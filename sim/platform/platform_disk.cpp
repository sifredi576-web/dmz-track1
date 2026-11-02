// Simulation-only FAT32 disk backed by the real package. Not linked into FPGA RTL.
#include <algorithm>
#include <cstdint>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <iterator>
#include <map>
#include <stdexcept>
#include <string>
#include <vector>
namespace {
struct File { std::string name; std::vector<uint8_t> data; uint32_t first; };
std::vector<File> files;
std::map<uint32_t,uint32_t> fat;
std::map<uint32_t,std::pair<unsigned,unsigned>> blocks;
std::vector<uint8_t> directory;
std::vector<unsigned> waves;
bool initialized=false;
void put(std::vector<uint8_t>& data,unsigned at,uint32_t value,unsigned bytes) {
 for(unsigned j=0;j<bytes;j++)data[at+j]=uint8_t(value>>(8*j));
}
void init() {
 if(initialized)return;
 initialized=true;
 const char* selected=std::getenv("DMZ_TEST_PACKAGE");
 std::filesystem::path path=selected?selected:"../../assets/platform/tf_course_v2";
 std::vector<std::filesystem::path> paths;
 for(const auto& e:std::filesystem::directory_iterator(path)) {
  auto ext=e.path().extension().string();
  if(ext==".BMP"||ext==".WAV"||e.path().filename()=="SCENE.BIN")paths.push_back(e.path());
 }
 std::sort(paths.rbegin(),paths.rend());
 uint32_t cluster=4;fat[2]=3;fat[3]=0x0fffffff;
 directory.resize(1024,0);
 for(const auto& p:paths) {
  std::ifstream stream(p,std::ios::binary);
  File file{p.filename().string(),std::vector<uint8_t>(std::istreambuf_iterator<char>(stream),{}),cluster};
  unsigned slot=unsigned(files.size()),offset=0;
  for(;offset<file.data.size();offset+=512,cluster+=2) {
   blocks[cluster]={slot,offset};
   fat[cluster]=offset+512<file.data.size()?cluster+2:0x0fffffff;
  }
  unsigned at=slot*32;
  std::fill(directory.begin()+at,directory.begin()+at+11,' ');
  const auto stem=p.stem().string(),ext=p.extension().string().substr(1);
  std::copy(stem.begin(),stem.end(),directory.begin()+at);
  std::copy(ext.begin(),ext.end(),directory.begin()+at+8);
  directory[at+11]=0x20;
  put(directory,at+20,file.first>>16,2);put(directory,at+26,file.first&65535,2);put(directory,at+28,unsigned(file.data.size()),4);
  if(ext=="WAV")waves.push_back(slot);
  files.push_back(std::move(file));
 }
}
}
extern "C" unsigned int dmz_disk(unsigned int lba,unsigned int index) {
 init();
 if(lba==0) {
  std::vector<uint8_t> boot(512,0);
  put(boot,11,512,2);boot[13]=1;put(boot,14,1,2);boot[16]=1;
  put(boot,32,262144,4);put(boot,36,1024,4);put(boot,44,2,4);put(boot,510,0xaa55,2);
  return boot.at(index);
 }
 if(lba<=1024) {
  uint32_t entry=(lba-1)*128+index/4;
  uint32_t value=entry<2?0x0fffffff:(fat.count(entry)?fat.at(entry):0);
  return uint8_t(value>>(8*(index%4)));
 }
 uint32_t cluster=lba-1025+2;
 if(cluster==2||cluster==3)return directory.at((cluster-2)*512+index);
 auto found=blocks.find(cluster);
 if(found==blocks.end())throw std::runtime_error("unexpected unallocated sector");
 auto [slot,offset]=found->second;
 return offset+index<files[slot].data.size()?files[slot].data[offset+index]:0;
}
extern "C" unsigned int dmz_expected_pcm(unsigned int wave,unsigned int sample) {
 init();const auto& data=files.at(waves.at(wave)).data;
 unsigned at=12;
 while(at+8<=data.size()) {
  uint32_t size=uint32_t(data[at+4])|(uint32_t(data[at+5])<<8)|(uint32_t(data[at+6])<<16)|(uint32_t(data[at+7])<<24);
  if(std::string(reinterpret_cast<const char*>(&data[at]),4)=="data") {
   unsigned pos=at+8+(sample%(size/4))*4;
   return uint32_t(data[pos])|(uint32_t(data[pos+1])<<8)|(uint32_t(data[pos+2])<<16)|(uint32_t(data[pos+3])<<24);
  }
  at+=8+size+(size&1);
 }
 throw std::runtime_error("missing WAV PCM data");
}

// Independent software reference: decode original BMP and embedded sprite pixels.
// Every composed burst is compared, including gradients and the ALERT artwork.
extern "C" unsigned int dmz_expected_pixel(unsigned int page,unsigned int pixel) {
 init();
 static std::vector<std::vector<uint16_t>> rendered;
 if(rendered.empty()) {
  const auto find=[](const std::string& name)->const std::vector<uint8_t>& {
   for(const auto& f:files)if(f.name==name)return f.data;
   throw std::runtime_error("reference missing file: "+name);
  };
  const auto& scene=find("SCENE.BIN");
  const auto u16=[](const std::vector<uint8_t>& d,unsigned at)->unsigned {return d.at(at)|(unsigned(d.at(at+1))<<8);};
  const auto u32=[](const std::vector<uint8_t>& d,unsigned at)->uint32_t {return d.at(at)|(uint32_t(d.at(at+1))<<8)|(uint32_t(d.at(at+2))<<16)|(uint32_t(d.at(at+3))<<24);};
  unsigned rc=scene.at(16),pc=scene.at(17),pb=32+rc*32,wb=pb+pc*32;
  rendered.resize(pc);
  for(unsigned pg=0;pg<pc;pg++) {
   auto& out=rendered[pg];out.resize(640*480);
   unsigned pr=pb+pg*32,res=32+scene.at(pr+1)*32;
   std::string name;
   for(unsigned n=0;n<8&&scene.at(res+n)!=' ';n++)name+=char(scene.at(res+n));
   name+='.';for(unsigned n=8;n<11;n++)name+=char(scene.at(res+n));
   const auto& bmp=find(name);
   unsigned width=u32(bmp,18);int32_t height=int32_t(u32(bmp,22));unsigned bpp=u16(bmp,28)/8,stride=(width*bpp+3)&~3u,offset=u32(bmp,10);
   if(width!=640||(height!=480&&height!=-480)||(bpp!=3&&bpp!=4))throw std::runtime_error("pixel reference requires 640x480 BMP");
   for(unsigned y=0;y<480;y++)for(unsigned x=0;x<640;x++) {
    unsigned at=offset+(height>0?479-y:y)*stride+x*bpp;
    out[y*640+x]=uint16_t(((bmp.at(at+2)>>3)<<11)|((bmp.at(at+1)>>2)<<5)|(bmp.at(at)>>3));
   }
   for(unsigned layer=0;layer<4;layer++)for(unsigned n=0;n<scene.at(pr+9);n++) {
    unsigned w=wb+(scene.at(pr+8)+n)*32;
    if(scene.at(w+1)!=layer||!(scene.at(w+15)&2))continue;
    unsigned x=u16(scene,w+4),y=u16(scene,w+6),width=u16(scene,w+8),height=u16(scene,w+10);
    for(unsigned plane=0;plane<2;plane++) {
     unsigned rr=32+scene.at(w+(plane?2:3))*32,raw=32+u32(scene,rr+26);
     for(unsigned yy=0;yy<height;yy++)for(unsigned xx=0;xx<width;xx++) {
      unsigned rgba=u16(scene,raw+2*(yy*width+xx));if(!(rgba&0x8000))continue;
      unsigned rgb=((rgba>>10&31)<<11)|((rgba>>5&31)<<6)|((rgba>>9&1)<<5)|(rgba&31);
      if(!(scene.at(w+15)&1))rgb=(rgb&0xf7de)>>1;
      out.at((y+yy)*640+x+xx)=uint16_t(rgb);
     }
    }
   }
  }
 }
 return rendered.at(page).at(pixel);
}
