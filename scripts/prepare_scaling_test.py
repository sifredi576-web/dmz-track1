"""Build an actual-package runtime regression from the existing SDRAM harness."""
from pathlib import Path
import json, struct, zlib
root=Path(__file__).resolve().parents[1]
package=root/'assets/platform/tf_scaling_demo'
data=(package/'SCENE.BIN').read_bytes()
report=json.loads((package/'PACKAGE.json').read_text(encoding='utf-8'))
assert zlib.crc32(data[32:])==struct.unpack_from('<I',data,12)[0]
assert data[16:20]==bytes([55,19,47,0])
(root/'sim/platform/scaling_demo.hex').write_text('\n'.join(f'{b:02x}' for b in data)+'\n',encoding='ascii')
source=(root/'sim/platform/tb_scene_runtime.sv').read_text(encoding='utf-8')
source=source[:source.index('initial begin\n')]
source=source.replace('module tb_scene_runtime;','module tb_scaling_course;').replace('scene[0:514271]',f'scene[0:{len(data)-1}]').replace('length_bytes=514272',f'length_bytes={len(data)}').replace(".image_count(6'd16)",".image_count(6'd19)").replace('.MS_CYCLES(16)', '.MS_CYCLES(16),.AUTOPLAY_ON_RESET(1)')
names=[]
for kind,base in [('bmp',0),('wav',32)]:
    items=sorted([r for r in report['resources'] if r['kind']==kind],key=lambda r:r['file'],reverse=True)
    for i,r in enumerate(items):
        p=package/r['file'];stem=p.stem.ljust(8).encode('ascii')
        names.append(f" names[{base+i}]=64'h{int.from_bytes(stem,'little'):016x};sizes[{base+i}]={p.stat().st_size};")
tail='''
task await_page(input integer wanted);
 integer tries;begin
 tries=0;
 while(!(active&&!status[1]&&dut.state==11&&!dut.core_busy&&status[15:11]==wanted))begin
  ticks(64);tries=tries+1;if(tries>6000)$fatal(1,"automatic page timeout wanted=%0d got=%0d error=%h",wanted,status[15:11],error);
 end
 $display("AUTO PAGE %0d",wanted);
 end
endtask
initial begin
 for(integer j=0;j<64;j++)begin names[j]=0;sizes[j]=0;end
@NAMES@
 $readmemh("sim/platform/scaling_demo.hex",scene);
 ticks(4);reset=0;start=1;ticks(1);start=0;
 for(integer i=0;i<length_bytes;i++)begin
  while(!br&&loader_error==0)ticks(1);
  if(loader_error!=0)$fatal(1,"loader error");
  bv=1;bd=scene[i];bl=i==length_bytes-1;ticks(1);bv=0;
 end
 while(!wd)ticks(1);
 await_page(0);
 if(!status[150]||status[151])$fatal(1,"autoplay must start on first page without key input");
 send_event(9);ticks(125000);land(0);
 if(!status[151]||paused||ctrl)$fatal(1,"KEY2 must hold first page without pausing audio");
 send_event(9);
 await_page(1);await_page(2);await_page(3);await_page(4);await_page(5);await_page(6);
 finished={1'b1,params[41:34]-8'd1};ticks(1000);land(6);
 finished={1'b1,params[41:34]};await_page(7);finished=0;
 menu=1;finished={1'b1,params[41:34]};ticks(1000);land(7);menu=0;
 await_page(8);finished=0;finished={1'b1,params[41:34]};await_page(9);finished=0;
 if(!params[33])$fatal(1,"observation must start tone");
 finished={1'b1,params[41:34]};await_page(10);finished=0;
 ticks(125000);land(10);
 if(status[4]||status[6]||status[25:22]!=0)$fatal(1,"quiz must wait for manual choice");
 send_event(7);await_page(0);
 if(!status[150]||status[151])$fatal(1,"Home must restart autoplay from first picture");
 $display("PASS real 19-page package: boot autoplay, three native-size pictures, full automatic chain, KEY2 hold/resume, stale audio ticket, menu suppression, quiz wait and Home restart");
 $finish;
end
initial begin #100000000;$fatal(1,"scaling course watchdog");end
endmodule
'''.replace('@NAMES@','\n'.join(names))
(root/'sim/platform/tb_scaling_course.sv').write_text(source+tail,encoding='utf-8')
cpp=(root/'sim/platform/tb_scene_runtime_main.cpp').read_text().replace('Vtb_scene_runtime','Vtb_scaling_course')
(root/'sim/platform/scaling_course_main.cpp').write_text(cpp,encoding='utf-8')
print('Prepared actual package CRC, catalog and runtime simulation: 55 resources / 19 pages / 47 widgets')
