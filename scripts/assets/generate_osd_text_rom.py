"""Generate current OSD or status-panel ROM source; never runs during playback."""
import argparse,json
from pathlib import Path
root=Path(__file__).resolve().parents[2]

def replace_region(path,start,end,body):
    text=path.read_text(encoding="utf-8-sig")
    a=text.index(start);b=text.index(end,a)+len(end)
    path.write_text(text[:a]+start+"\n"+body+"\n"+end+text[b:],encoding="utf-8")

def main():
    parser=argparse.ArgumentParser();parser.add_argument("--target",choices=["osd","status","all"],default="osd");args=parser.parse_args()
    if args.target in ["osd","all"]:
        lines=json.loads((root/"assets/osd_text_lines.json").read_text(encoding="utf-8"))
        text=['reg [7:0] text_rom[0:4095]; /* fehdl force_ram=1, ram_style="bram" */','integer ti;','initial begin',' for(ti=0;ti<4096;ti=ti+1)text_rom[ti]=32;']
        for index,line in enumerate(lines):
            for col,value in enumerate(line.encode("ascii").rjust(40,b"\0")[-40:]):
                if value!=32:text.append(f" text_rom[{index*64+col}]={value};")
        text.append("end")
        replace_region(root/"rtl/video/dmz_osd.sv","// BEGIN GENERATED TEXT ROM","// END GENERATED TEXT ROM","\n".join(text))
    if args.target in ["status","all"]:
        font=json.loads((root/"assets/status_panel_font.json").read_text(encoding="utf-8"))
        text=['reg [13:0] font_rom[0:511]; /* fehdl force_ram=1, ram_style="bram" */','integer i;initial begin',' for(i=0;i<512;i=i+1)font_rom[i]=0;']
        text.extend(f" font_rom[{i}]=14'h{value:04x};" for i,value in enumerate(font["rows"]) if value)
        text.append("end")
        replace_region(root/"rtl/video/dmz_status_panel.sv","// BEGIN GENERATED STATUS FONT","// END GENERATED STATUS FONT","\n".join(text))
    print("Generated ROM source:",args.target)

if __name__=="__main__":main()
