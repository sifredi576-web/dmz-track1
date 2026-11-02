/* Simulation-only materialized upstream FAT disk and independent pixel oracle. */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#ifdef _WIN32
#define DPI_EXPORT __declspec(dllexport)
#else
#define DPI_EXPORT
#endif
static unsigned choice=0;
static unsigned char *data=0,*boot,*directory,*blob,*pcm,*pixels;
static uint32_t *fat,*offsets,*waves,*header;
DPI_EXPORT void dmz_select_package(unsigned notice) {choice=notice;}
static void init(void) {
 FILE *f;long bytes;
 if(data)return;
 f=fopen(choice?"build/fixtures/notice.bin":"build/fixtures/course.bin","rb");
 if(!f){fprintf(stderr,"Missing prepared platform fixture\n");exit(2);}
 fseek(f,0,SEEK_END);bytes=ftell(f);rewind(f);data=(unsigned char*)malloc(bytes);
 if(!data||fread(data,1,bytes,f)!=(size_t)bytes){fprintf(stderr,"Fixture read failed\n");exit(2);}fclose(f);
 header=(uint32_t*)data;boot=data+32;directory=boot+512;
 fat=(uint32_t*)(directory+1024);offsets=fat+header[5];blob=(unsigned char*)(offsets+header[5]);
 waves=(uint32_t*)(blob+header[2]);pcm=(unsigned char*)(waves+32);pixels=pcm+header[3];
}
DPI_EXPORT unsigned dmz_disk(unsigned lba,unsigned index) {
 unsigned cluster,entry,value;init();
 if(index>=512)return 0;
 if(!lba)return boot[index];
 if(lba<=1024){entry=(lba-1)*128+index/4;value=entry<header[5]?fat[entry]:0;return (value>>(8*(index%4)))&255;}
 cluster=lba-1023;
 if(cluster==2||cluster==3)return directory[(cluster-2)*512+index];
 if(cluster>=header[5]||offsets[cluster]==0xffffffff){fprintf(stderr,"Unallocated sector %u\n",lba);exit(2);}
 return blob[offsets[cluster]+index];
}
DPI_EXPORT unsigned dmz_expected_pcm(unsigned wave,unsigned sample) {
 unsigned at;init();if(wave>=header[6]||!waves[wave*2+1])return 0;
 at=waves[wave*2]+sample%waves[wave*2+1]*4;
 return pcm[at]|((unsigned)pcm[at+1]<<8)|((unsigned)pcm[at+2]<<16)|((unsigned)pcm[at+3]<<24);
}
DPI_EXPORT unsigned dmz_expected_pixel(unsigned page,unsigned pixel) {
 unsigned at;init();if(page>=header[4]||pixel>=307200){fprintf(stderr,"Invalid reference pixel\n");exit(2);}
 at=(page*307200+pixel)*2;return pixels[at]|((unsigned)pixels[at+1]<<8);
}
