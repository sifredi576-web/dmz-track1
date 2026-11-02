"""Generate the immutable upstream topology for simulation, never a second project."""
from pathlib import Path
import argparse,re,subprocess

root=Path(__file__).resolve().parents[2]
p=argparse.ArgumentParser();p.add_argument('--revision',default='28298f7')
p.add_argument('--source',type=Path);p.add_argument('--output',type=Path);args=p.parse_args()
if args.source:
    text=args.source.read_text(encoding='utf-8-sig')
else:
    text=subprocess.check_output(['git','show',args.revision+':rtl/system/dmz_track1_top.sv'],cwd=root).decode('utf-8-sig')
    text=text.replace('module dmz_track1_top','module dmz_reference_top').replace('dmz_media_storage','dmz_media_pipeline')
head,body=text.split(');',1);declarations=[]
def variables(s):
    result=[];depth=0;start=0
    for i,c in enumerate(s):
        if c in '({[':depth+=1
        if c in ')}]':depth-=1
        if c==',' and depth==0:result.append(s[start:i]);start=i+1
    return result+[s[start:]]
def hoist(m):
    kind,sign,width,names=m.groups();out=[]
    for v in variables(names):
        name,sep,value=v.partition('=')
        declarations.append(kind+' '+(sign or '')+(width or '')+name.strip()+';')
        if sep:out.append('assign '+name.strip()+'='+value+';')
    return '\n'.join(out)
# Declaration order only, for ASE 10.3c. Expressions and always blocks are unchanged.
body=re.sub(r'\b(wire|reg)\s+(signed\s+)?(\[[^\]]+\]\s*)?([^;]+);',hoist,body)
out=args.output or root/'build/architecture/reference_top.sv';out.parent.mkdir(parents=True,exist_ok=True)
out.write_text(head+');\n'+'\n'.join(declarations)+'\n'+body,encoding='utf-8')
