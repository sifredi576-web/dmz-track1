"""Preview current v2 scenes directly from embedded UI, without shadow BIN files."""
import argparse,json,struct
from pathlib import Path
from PIL import Image,ImageDraw,ImageOps

def sprite(scene,resource):
    start=32+resource["embedded_offset"]
    data=scene[start:start+resource["bytes"]]
    pixels=[((v>>10&31)*255//31,(v>>5&31)*255//31,(v&31)*255//31,255 if v&32768 else 0)
            for (v,) in struct.iter_unpack("<H",data)]
    image=Image.new("RGBA",(resource["width"],resource["height"]));image.putdata(pixels)
    return image

def main():
    parser=argparse.ArgumentParser();parser.add_argument("package",type=Path);parser.add_argument("--output",required=True,type=Path)
    args=parser.parse_args();report=json.loads((args.package/"PACKAGE.json").read_text(encoding="utf-8"))
    data=(args.package/"SCENE.BIN").read_bytes()
    if report["version"]!=2:raise ValueError("Only the current v2 format is supported")
    rc,pc,wc=data[16:19];base=32+rc*32;resources=report["resources"];names={v:k for k,v in report["pages"].items()}
    args.output.mkdir(parents=True,exist_ok=True);atlas=Image.new("RGB",(1280,((pc+3)//4)*268),"#dddddd")
    for i in range(pc):
        page=data[base+i*32:base+(i+1)*32]
        background=Image.open(args.package/resources[page[1]]["file"]).convert("RGBA")
        background=ImageOps.contain(background,(640,480),Image.Resampling.NEAREST)
        image=Image.new("RGBA",(640,480),"black");image.alpha_composite(background,((640-background.width)//2,(480-background.height)//2))
        for j in range(page[8],page[8]+page[9]):
            record=data[base+pc*32+j*32:base+pc*32+(j+1)*32];x,y,w,h=struct.unpack_from("<HHHH",record,4)
            for resource in [record[3],record[2]]:image.alpha_composite(sprite(data,resources[resource]),(x,y))
            if j==page[8]:ImageDraw.Draw(image).rectangle((x,y,x+w-1,y+h-1),outline="#ffe56d",width=2)
        image.convert("RGB").save(args.output/(names[i]+".png"))
        atlas.paste(image.convert("RGB").resize((320,240)),((i%4)*320,(i//4)*268))
        ImageDraw.Draw(atlas).text(((i%4)*320+5,(i//4)*268+244),names[i],fill="black")
    atlas.save(args.output/"CONTACT.png");print(f"Previewed {pc} pages; software reference, not FPGA output")

if __name__=="__main__":main()
