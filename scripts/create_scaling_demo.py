"""Create editable vector teaching diagrams and original-size FPGA BMP assets."""
from pathlib import Path
from PIL import Image, ImageDraw, ImageFont
import html, math, json, copy, importlib.util, struct, hashlib

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / 'assets/scaling_demo'
OUT.mkdir(parents=True, exist_ok=True)
FONT = 'C:/Windows/Fonts/msyh.ttc'
NAVY = '#062452'; CARD = '#0b3568'; CYAN = '#35e5ee'; WHITE = '#f1f8ff'; MUTED = '#b3d2ee'; GOLD = '#ffca64'

class Art:
    def __init__(self,w,h):
        self.w,self.h=w,h
        self.im=Image.new('RGB',(w,h),NAVY);self.d=ImageDraw.Draw(self.im)
        self.svg=[f'<svg xmlns="http://www.w3.org/2000/svg" width="{w}" height="{h}" viewBox="0 0 {w} {h}">',f'<rect width="{w}" height="{h}" fill="{NAVY}"/>']
    def line(self,pts,fill=CYAN,width=3):
        self.d.line(pts,fill=fill,width=width,joint='curve')
        self.svg.append(f'<polyline points="{" ".join(f"{x},{y}" for x,y in pts)}" fill="none" stroke="{fill}" stroke-width="{width}" stroke-linecap="round" stroke-linejoin="round"/>')
    def rect(self,box,fill=CARD,outline=None,width=2,r=0):
        self.d.rounded_rectangle(box,radius=r,fill=fill,outline=outline,width=width)
        x,y,x2,y2=box;self.svg.append(f'<rect x="{x}" y="{y}" width="{x2-x}" height="{y2-y}" rx="{r}" fill="{fill or "none"}" stroke="{outline or "none"}" stroke-width="{width}"/>')
    def ellipse(self,box,fill=None,outline=CYAN,width=3):
        self.d.ellipse(box,fill=fill,outline=outline,width=width)
        x,y,x2,y2=box;self.svg.append(f'<ellipse cx="{(x+x2)/2}" cy="{(y+y2)/2}" rx="{(x2-x)/2}" ry="{(y2-y)/2}" fill="{fill or "none"}" stroke="{outline or "none"}" stroke-width="{width}"/>')
    def text(self,xy,s,size=24,fill=WHITE,center=False):
        f=ImageFont.truetype(FONT,size);x,y=xy
        if center:x-=self.d.textlength(s,font=f)/2
        self.d.text((x,y),s,font=f,fill=fill,anchor='lt')
        self.svg.append(f'<text x="{x}" y="{y}" font-family="Microsoft YaHei" font-size="{size}" fill="{fill}" dominant-baseline="text-before-edge">{html.escape(s)}</text>')
    def arrow(self,x1,y1,x2,y2,width=4):
        self.line([(x1,y1),(x2,y2)],width=width)
        a=math.atan2(y2-y1,x2-x1)
        self.line([(x2-13*math.cos(a-.5),y2-13*math.sin(a-.5)),(x2,y2),(x2-13*math.cos(a+.5),y2-13*math.sin(a+.5))],width=width)
    def save(self,name):
        self.im.save(OUT/f'{name}.BMP');self.im.save(OUT/f'{name}.png')
        (OUT/f'{name}.svg').write_text('\n'.join(self.svg+['</svg>']),encoding='utf-8')
        return self.im

a=Art(1280,720)
a.text((64,44),'01 / 校园声音课堂',24,CYAN)
a.text((64,88),'声音从振动出发',54)
a.text((64,158),'声源振动，经空气传播，被人耳接收。',30,MUTED)
for x,title,note in [(64,'声源','振动的音叉'),(472,'介质','空气中的传播'),(880,'接收','人耳感知声音')]:
    a.rect((x,220,x+336,474),r=20)
    a.text((x+168,386),title,34,center=True);a.text((x+168,434),note,24,MUTED,True)
# Tuning fork and its handle.
a.line([(204,260),(204,320),(212,336),(228,342),(244,336),(252,320),(252,260)],WHITE,9)
a.line([(228,342),(228,370)],WHITE,9)
a.arrow(173,290,146,290);a.arrow(283,290,310,290)
for r in (30,57,84):
    pts=[(570+r*math.cos(t),315+r*math.sin(t)) for t in [(-.8+i*1.6/40) for i in range(41)]]
    a.line(pts,CYAN,5)
a.arrow(548,315,726,315)
# Simple ear outline, a diagram rather than a measured signal.
a.line([(1005,344),(1005,319),(993,305),(991,283),(1001,265),(1023,257),(1045,265),(1055,283),(1053,305),(1035,326),(1028,346),(1015,356),(1005,344)],WHITE,7)
a.line([(1008,294),(1009,280),(1025,275),(1038,286),(1036,302),(1023,310)],CYAN,5)
a.arrow(413,345,453,345);a.arrow(821,345,861,345)
a.text((64,504),'示意图 · 不代表实际采集波形',24,MUTED)
a.ellipse((68,569,132,633),outline=CYAN,width=4);a.rect((160,569,224,633),fill=None,outline=GOLD,width=4)
a.text((250,568),'圆与方格：观察缩放后是否保持比例',27)
a.text((250,615),'原图 1280 × 720  /  横向大图等比缩小',25,CYAN)
wide=a.save('WIDE01')

a=Art(360,640)
a.text((24,42),'02 / 校园声音实验',17,CYAN)
a.text((24,77),'看见音叉的振动',28)
a.text((24,120),'轻敲音叉，观察水面。',18,MUTED)
a.rect((22,162,338,360),r=16)
a.line([(154,182),(154,245),(161,258),(180,265),(199,258),(206,245),(206,182)],WHITE,7)
a.line([(180,265),(180,316)],WHITE,7)
a.line([(100,325),(260,325),(247,346),(114,346),(100,325)],CYAN,3)
a.line([(115,334),(137,330),(160,335),(180,330),(205,335),(228,330),(248,333)],CYAN,2)
a.arrow(132,220,108,220,3);a.arrow(228,220,252,220,3)
a.text((180,368),'实验步骤',22,CYAN,True)
for y,num,line in [(405,'1','轻敲音叉，使其振动'),(446,'2','叉脚轻触水面'),(487,'3','观察水花与振动现象')]:
    a.ellipse((24,y,48,y+24),fill=CYAN,outline=None);a.text((36,y+3),num,15,NAVY,True)
    a.text((60,y+2),line,19)
a.ellipse((26,540,58,572),outline=CYAN,width=2);a.rect((75,540,107,572),fill=None,outline=GOLD,width=2)
a.text((124,541),'保持圆形与正方形',17,MUTED)
a.text((24,588),'原图 360 × 640 / 竖图等比适配',16,CYAN)
tall=a.save('TALL01')

a=Art(320,240)
a.text((18,20),'03 / 校园声音小卡片',13,CYAN)
a.text((18,49),'振动产生声音',25)
a.text((18,85),'小图放大，比例保持。',16,MUTED)
a.rect((16,118,304,182),r=12)
a.ellipse((29,132,63,166),outline=CYAN,width=2)
a.rect((78,132,112,166),fill=None,outline=GOLD,width=2)
a.line([(132,149),(143,149),(152,131),(164,166),(176,137),(187,158),(198,141),(208,149),(228,149)],CYAN,3)
a.text((241,141),'示意',14,MUTED)
a.text((18,193),'320 × 240 → 640 × 480',15,CYAN)
small=a.save('SMALL01')

# Independent overlay assets are not embedded into the source BMPs.
nav=OUT/'ui';nav.mkdir(exist_ok=True)
im=Image.new('RGBA',(112,32),(8,40,78,255));d=ImageDraw.Draw(im)
d.rounded_rectangle((0,0,111,31),radius=8,outline=CYAN,width=2)
im.save(nav/'SCL_BASE.png')
for name,label in [('SCL_PREV','上一页'),('SCL_NEXT','下一页')]:
    im=Image.new('RGBA',(112,32));d=ImageDraw.Draw(im);f=ImageFont.truetype(FONT,18)
    d.text((56,5),label,font=f,fill=WHITE,anchor='mt');im.save(nav/f'{name}.png')

def configure(scene):
    result=copy.deepcopy(scene);result['entry']='WIDE01'
    generated={'WIDE01','TALL01','SMALL01','SCL_BASE','SCL_PREV','SCL_NEXT'}
    result['resources']=[r for r in result['resources'] if r['id'] not in generated]
    result['pages']=[p for p in result['pages'] if p['id'] not in generated]
    result['resources'] += [{'id':n,'kind':'bmp','source':f'scaling_demo/{n}.BMP'} for n in ['WIDE01','TALL01','SMALL01']]
    result['resources'] += [{'id':n,'kind':'sprite','source':f'scaling_demo/ui/{n}.png'} for n in ['SCL_BASE','SCL_PREV','SCL_NEXT']]
    new=[]
    route=['WIDE01','TALL01','SMALL01','WAIT01','WAIT02','COURSE','LESSON01','LESSON02','LESSON03','OBSERVE','QUIZ01']
    for i,n in enumerate(route[:3]):
        previous=route[i-1] if i else 'WIDE01'
        new.append({'id':n,'background':n,'auto_target':route[i+1],'dwell_ms':7000,'auto_optional':True,'back':previous,
          'widgets':[{'label':'SCL_PREV','base':'SCL_BASE','rect':[24,424,112,32],'action':'goto','target':previous},
                     {'label':'SCL_NEXT','base':'SCL_BASE','rect':[504,424,112,32],'action':'goto','target':route[i+1]}]})
    result['pages']=new+result['pages']
    pages={p['id']:p for p in result['pages']}
    for i,n in enumerate(route[3:-1],3):
        p=pages[n];p['auto_target']=route[i+1];p['auto_optional']=True
        if n in ['WAIT01','WAIT02']:p['dwell_ms']=4000
        elif n=='COURSE':p['dwell_ms']=2000
        elif n.startswith('LESSON'):p.pop('dwell_ms',None);p['loop']=False
        elif n=='OBSERVE':p.pop('dwell_ms',None);p['loop']=False;p['audio']='TONE01'
    pages['WAIT01']['back']='SMALL01'
    pages['QUIZ01'].pop('auto_target',None);pages['QUIZ01'].pop('auto_optional',None)
    return result,route

# Use the already-validated active course as the board deployment source.
scene=json.loads((ROOT/'assets/platform/sound_course.json').read_text(encoding='utf-8-sig'))
scene,route=configure(scene)
for r in scene['resources']:
    if r['source'].startswith('scaling_demo/'):
        r['source']='../'+r['source']
(ROOT/'assets/platform/sound_course.json').write_text(json.dumps(scene,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
# Keep the active material root self-contained for the existing packer.
active_materials=ROOT.parents[0]/'素材'
import shutil
shutil.copytree(OUT,active_materials/'scaling_demo',dirs_exist_ok=True)
for r in scene['resources']:
    if r['source'].startswith('../scaling_demo/'):
        r['source']=r['source'][3:]
(ROOT/'assets/platform/sound_course.json').write_text(json.dumps(scene,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')

# Preview the same floor-based nearest-neighbor mapping used by the FPGA.
preview=Image.new('RGB',(1920,540),'#071b35');pd=ImageDraw.Draw(preview)
for i,(name,im) in enumerate([('WIDE01',wide),('TALL01',tall),('SMALL01',small)]):
    w,h=im.size
    dw,dh=(640,max(1,h*640//w)) if w*480>=h*640 else (max(1,w*480//h),480)
    px=im.load();scaled=Image.new('RGB',(dw,dh));scaled.putdata([px[x*w//dw,y*h//dh] for y in range(dh) for x in range(dw)])
    frame=Image.new('RGB',(640,480));frame.paste(scaled,((640-dw)//2,(480-dh)//2))
    for n,x in [('SCL_PREV',24),('SCL_NEXT',504)]:
        frame.paste(Image.open(nav/'SCL_BASE.png'),(x,424));label=Image.open(nav/f'{n}.png');frame.paste(label,(x,424),label)
    preview.paste(frame,(i*640,0));pd.text((i*640+20,496),f'{name}   {w} x {h}  ->  {dw} x {dh}',font=ImageFont.truetype(FONT,22),fill=WHITE)
preview.save(OUT/'PREVIEW.png')
(OUT/'placement.json').write_text(json.dumps({'route':route,'dwell_ms':7000,'native_dimensions':{'WIDE01':[1280,720],'TALL01':[360,640],'SMALL01':[320,240]},'note':'PC reference preview; not an FPGA screenshot'},ensure_ascii=False,indent=2),encoding='utf-8')
print('Generated original-size 24-bit BMP, PNG, SVG, navigation overlays and first-page route:', ' -> '.join(route))
