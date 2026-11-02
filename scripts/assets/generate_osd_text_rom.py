"""Regenerate the production OSD constant character ROM (not course labels)."""
import json
from pathlib import Path
root=Path(__file__).resolve().parents[2]
lines=json.loads((root/'assets/osd_text_lines.json').read_text(encoding='utf-8'))
text=['// BEGIN GENERATED TEXT ROM','reg [7:0] text_rom[0:4095]; /* fehdl force_ram=1, ram_style="bram" */','integer ti;','initial begin',' for(ti=0;ti<4096;ti=ti+1)text_rom[ti]=32;']
for index,line in enumerate(lines):
 for col,value in enumerate(line.encode('ascii').rjust(40,b'\0')[-40:]):
  if value!=32:text.append(f' text_rom[{index*64+col}]={value};')
text+=['end','// END GENERATED TEXT ROM']
path=root/'rtl/video/dmz_osd.sv'
s=path.read_text(encoding='utf-8')
a=s.index('// BEGIN GENERATED TEXT ROM');b=s.index('// END GENERATED TEXT ROM',a)+len('// END GENERATED TEXT ROM')
path.write_text(s[:a]+'\n'.join(text)+s[b:],encoding='utf-8')
print('Regenerated OSD text ROM without changing line IDs')
