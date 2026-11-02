"""Materialize the upstream fragmented FAT disk and independent pixel/PCM oracle.

The 32-bit ASE compiler cannot build std::filesystem; the SV test and real media
remain unchanged apart from selecting the fixture explicitly. FPGA inputs do not
include this file or the simulation-only C backend.
"""
from pathlib import Path
from array import array
import struct,wave,json,shutil
from PIL import Image

root=Path(__file__).resolve().parents[2]
out=root/'build/fixtures';out.mkdir(parents=True,exist_ok=True)
def u16(b,n):return struct.unpack_from('<H',b,n)[0]
def u32(b,n):return struct.unpack_from('<I',b,n)[0]
def make(kind):
    package=root/'assets/platform'/('tf_'+kind+'_v2')
    paths=sorted((p for p in package.iterdir() if p.suffix in ('.BMP','.WAV') or p.name=='SCENE.BIN'),reverse=True)
    files={p.name:p.read_bytes() for p in paths}
    boot=bytearray(512);struct.pack_into('<H',boot,11,512);boot[13]=1
    struct.pack_into('<H',boot,14,1);boot[16]=1
    for n,v in [(32,262144),(36,1024),(44,2)]:struct.pack_into('<I',boot,n,v)
    struct.pack_into('<H',boot,510,0xaa55)
    directory=bytearray(1024);fat={2:3,3:0x0fffffff};blocks={};blob=bytearray();cluster=4;pcms=[];pcm=bytearray()
    for slot,p in enumerate(paths):
        data=files[p.name];first=cluster;at=slot*32
        directory[at:at+11]=(p.stem.ljust(8)+p.suffix[1:].ljust(3)).encode('ascii');directory[at+11]=32
        struct.pack_into('<H',directory,at+20,first>>16);struct.pack_into('<H',directory,at+26,first&65535);struct.pack_into('<I',directory,at+28,len(data))
        for off in range(0,len(data),512):
            blocks[cluster]=len(blob);blob.extend(data[off:off+512].ljust(512,b'\0'))
            fat[cluster]=cluster+2 if off+512<len(data) else 0x0fffffff;cluster+=2
        if p.suffix=='.WAV':
            with wave.open(str(p),'rb') as f:
                assert f.getsampwidth()==2 and f.getnchannels()==2
                raw=f.readframes(f.getnframes())
            pcms.append((len(pcm),len(raw)//4));pcm.extend(raw)
    scene=files['SCENE.BIN'];rc,pc=scene[16:18];pb=32+rc*32;wb=pb+pc*32;rendered=array('H')
    for pg in range(pc):
        pr=pb+pg*32;rr=32+scene[pr+1]*32;name=scene[rr:rr+8].decode().rstrip()+'.'+scene[rr+8:rr+11].decode().rstrip()
        with Image.open(package/name) as im:rgb=im.convert('RGB').tobytes()
        frame=array('H',(((rgb[n]>>3)<<11)|((rgb[n+1]>>2)<<5)|(rgb[n+2]>>3) for n in range(0,len(rgb),3)))
        assert len(frame)==640*480
        for layer in range(4):
            for index in range(scene[pr+9]):
                w=wb+(scene[pr+8]+index)*32
                if scene[w+1]!=layer or not scene[w+15]&2:continue
                x,y,width,height=struct.unpack_from('<4H',scene,w+4)
                for plane in (3,2):
                    resource=32+scene[w+plane]*32;raw=32+u32(scene,resource+26)
                    for yy in range(height):
                        for xx in range(width):
                            rgba=u16(scene,raw+2*(yy*width+xx))
                            if rgba&32768:
                                val=((rgba>>10&31)<<11)|((rgba>>5&31)<<6)|((rgba>>9&1)<<5)|(rgba&31)
                                if not scene[w+15]&1:val=(val&0xf7de)>>1
                                frame[(y+yy)*640+x+xx]=val
        rendered.extend(frame)
    n=cluster+1
    fat_array=array('I',(fat.get(i,0x0fffffff if i<2 else 0) for i in range(n)))
    offsets=array('I',(blocks.get(i,0xffffffff) for i in range(n)))
    indices=array('I',(v for pair in (pcms+[(0,0)]*(16-len(pcms))) for v in pair))
    header=struct.pack('<8I',0x44535a4d,len(files),len(blob),len(pcm),pc,n,len(pcms),0)
    (out/(kind+'.bin')).write_bytes(header+boot+directory+fat_array.tobytes()+offsets.tobytes()+blob+indices.tobytes()+pcm+rendered.tobytes())
    print('Prepared',kind,'fixture:',len(files),'files,',pc,'independently rendered pages')
def materials():
    """Reconstruct quantized test inputs from the published package, not artwork originals."""
    base=out/'materials';package=root/'assets/platform/tf_course_v2'
    scene=json.loads((root/'assets/platform/sound_course.json').read_text(encoding='utf-8'))
    report=json.loads((package/'PACKAGE.json').read_text(encoding='utf-8'))
    resources={r['id']:r for r in report['resources']}
    for item in scene['resources']:
        meta=resources[item['id']];dest=base/item['source'];dest.parent.mkdir(parents=True,exist_ok=True)
        raw=(package/meta['file']).read_bytes()
        if meta['kind']!='sprite':shutil.copyfile(package/meta['file'],dest);continue
        rgba=bytearray()
        for n in range(0,len(raw),2):
            v=u16(raw,n)
            for shift in [10,5,0]:
                c=(v>>shift)&31;rgba.append((c<<3)|(c>>2))
            rgba.append(255 if v&32768 else 0)
        Image.frombytes('RGBA',(meta['width'],meta['height']),bytes(rgba)).save(dest)
    print('Prepared portable packer inputs from quantized published resources')

if __name__=='__main__':
    for kind in ['course','notice']:make(kind)
    materials()
