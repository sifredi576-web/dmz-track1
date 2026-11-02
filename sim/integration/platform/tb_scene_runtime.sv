`timescale 1ns/1ps
module tb_scene_runtime;
reg clk=0;always #5 clk=~clk;
reg reset=1,start=0,bv=0,bl=0;reg [7:0] bd=0;wire br,sw,sv,commit;wire [19:0] sa;wire [7:0] sb,loader_error;
wire [1:0] version;wire [20:0] length;wire [6:0] resources;wire [5:0] pages;wire [7:0] widgets;wire [4:0] entry;
wire wr,wd,wi,wvalid;wire [20:0] wa;wire [255:0] wdata;
wire [1:0] ready,response;wire [20:0] ra,ma;wire [255:0] unused,md;wire rv,mv,mwrite;reg mr=0,mresponse=0;reg [255:0] memory_data=0;
reg [255:0] memory[0:32767];reg [7:0] scene[0:514271];
wire active;wire [7:0] error;wire lookup;wire [5:0] query;reg [5:0] tag=0;reg valid=0;reg [63:0] name=0;reg [31:0] bytes=0;
reg [63:0] names[0:63];reg [31:0] sizes[0:63];
reg ev=0;reg [3:0] action=0;reg physical=0;reg [31:0] swaps=0;reg image_busy=0;wire image_select,page_begin;wire [4:0] image_index;
wire audio_select,audio_stop;wire [3:0] audio_index;wire [41:0] params;reg [7:0] params_ack=0;reg [8:0] finished=0;
wire ctrl;wire [7:0] ctrl_byte;wire [3:0] count;wire [98:0] widget;wire [4:0] displayed;wire [159:0] status;
integer length_bytes=514272;integer cycle=0,delay=0,imgdelay=0;reg pending=0,pwrite;reg [20:0] address;reg [255:0] write_data;
dmz_scene_loader loader(.clk(clk),.reset(reset),.start(start),.stream_error(1'b0),.byte_valid(bv),.byte_last(bl),.byte_data(bd),.byte_ready(br),
 .staging_ready(wr),.staging_write(sw),.staging_addr(sa),.staging_data(sb),.busy(),.ready(sv),.commit(commit),.error(loader_error),.resources(resources),.pages(pages),.widgets(widgets),.entry_page(entry),.format_version(version),.payload_length(length));
dmz_cfg_writer writer(.clk(clk),.reset(reset),.start(start),.abort(loader_error!=0),.valid(sw),.last(bl),.addr(sa),.data(sb),.ready(wr),
 .mem_valid(wvalid),.mem_addr(wa),.mem_data(wdata),.mem_ready(ready[0]),.mem_response(response[0]),.idle(wi),.done(wd));
dmz_mem_mux #(.N(2)) mux(.clk(clk),.reset(reset),.valid({rv,wvalid}),.write(2'b01),.addr({ra,wa}),.wdata({256'd0,wdata}),.ready(ready),.response(response),
 .req_valid(mv),.req_write(mwrite),.req_addr(ma),.req_wdata(md),.req_ready(mr),.rsp_valid(mresponse));
dmz_scene_runtime #(.MS_CYCLES(16)) dut(.clk(clk),.reset(reset),.start(sv&&wd),.version(version),.payload_length(length),.resource_count(resources),.page_count(pages),.widget_total(widgets),.entry_page(entry),
 .active(active),.error(error),.mem_valid(rv),.mem_write(),.mem_addr(ra),.mem_wdata(unused),.mem_ready(ready[1]),.mem_response(response[1]),.mem_data(memory_data),
 .lookup_enable(lookup),.lookup_query(query),.browse_tag(tag),.browse_valid(valid),.browse_name(name),.browse_bytes(bytes),.image_count(6'd16),.wav_count(5'd7),
 .event_valid(ev),.event_action(action),.menu_open(1'b0),.paused(1'b0),.muted(1'b0),.physical_alert(physical),.swaps(swaps),.image_busy(image_busy),.image_error(8'd0),
 .image_select(image_select),.image_index(image_index),.page_begin(page_begin),.audio_select(audio_select),.audio_stop(audio_stop),.audio_index(audio_index),.audio_params(params),.audio_params_ack(params_ack),.audio_finished(finished),
 .control_valid(ctrl),.control_byte(ctrl_byte),.control_count(count),.compositor_busy(1'b0),.compositor_index(3'd0),.compositor_widget(widget),.displayed_image(displayed),.status(status));
always @(posedge clk)begin
 cycle<=cycle+1;mr<=!pending&&(cycle%5!=0);mresponse<=0;
 if(mv&&mr)begin
  if(pending)$fatal(1,"overlapping memory transactions");
  if(ma<21'h80000||ma>=21'hc0000||ma[2:0]!=0)$fatal(1,"config address bounds %h",ma);
  address<=ma;write_data<=md;pwrite<=mwrite;pending<=1;delay<=2+cycle%7;mr<=0;
 end
 if(pending)begin
  if(delay!=0)delay<=delay-1;
  else begin
   if(pwrite)memory[(address-21'h80000)>>3]<=write_data;else memory_data<=memory[(address-21'h80000)>>3];
   mresponse<=1;pending<=0;
  end
 end
 tag<=query;name<=names[query];bytes<=sizes[query];valid<=1;
 params_ack<=params[41:34];
 if(image_select)begin
  if(image_busy)$fatal(1,"page issued while image busy");image_busy<=1;imgdelay<=35;
 end
 if(imgdelay!=0)begin imgdelay<=imgdelay-1;if(imgdelay==1)begin swaps<=swaps+1;image_busy<=0;end end
 if(error!=0&&(($test$plusargs("badmeta")&&error==8'h15)||($test$plusargs("badwidget")&&error==8'h17)))begin
  if(active||image_select||audio_select)$fatal(1,"invalid config activated");
  $display("PASS semantic rejection before page activation error=%h",error);$finish;
 end else if(error!=0)$fatal(1,"runtime rejected real package %h state=%0d ri=%0d pi=%0d wi=%0d",error,dut.state,dut.ri,dut.pi,dut.wi);
 if(loader_error==7&&$test$plusargs("badcrc")&&wi)begin
  if(active||sv||commit)$fatal(1,"CRC-failed scene activated");
  $display("PASS CRC failure aborts staging and drains accepted memory transaction without activation");$finish;
 end else if(loader_error!=0&&!$test$plusargs("badcrc"))$fatal(1,"loader error %h",loader_error);
end
task ticks(input integer n);repeat(n)@(negedge clk);endtask
task wait_idle;
 integer watchdog;begin watchdog=0;
 while(!active||status[1]||status[149]||dut.state!=11||dut.cache_tag!=status[10:8])begin
  ticks(1);watchdog++;if(watchdog>50000)$fatal(1,"idle timeout state=%0d page=%0d busy=%b",dut.state,status[15:11],status[149]);
 end ticks(5);
 end
endtask
task land(input integer wanted);begin
 wait_idle();if(status[15:11]!=wanted)$fatal(1,"page wanted %0d got %0d",wanted,status[15:11]);
 $display("PAGE %0d score=%0d focus=%0d",wanted,status[25:22],status[10:8]);
end endtask
task send_event(input [3:0] code);begin ticks(1);ev=1;action=code;ticks(1);ev=0;ticks(8);end endtask
task focus_to(input integer wanted);
 integer n,next_slot;begin
 wait_idle();n=0;
 while(status[10:8]!=wanted)begin
  // BFS distances generated by the host are unnecessary: choose any neighbor that
  // reaches target in the configured graph, then follow the shortest route.
  action=route(status[15:11],status[10:8],wanted);send_event(action);wait_idle();
  n++;if(n>10)$fatal(1,"focus routing failed");
 end
end endtask
task click(input integer slot);begin focus_to(slot);send_event(5);end endtask
function automatic [3:0] route(input integer page,src,dst);begin case((page<<6)|(src<<3)|dst)
129:route=4'd4;
130:route=4'd3;
136:route=4'd3;
138:route=4'd4;
144:route=4'd4;
145:route=4'd3;
193:route=4'd4;
194:route=4'd3;
200:route=4'd3;
202:route=4'd4;
208:route=4'd4;
209:route=4'd3;
257:route=4'd4;
258:route=4'd3;
264:route=4'd3;
266:route=4'd4;
272:route=4'd4;
273:route=4'd3;
321:route=4'd4;
322:route=4'd3;
328:route=4'd3;
330:route=4'd4;
336:route=4'd4;
337:route=4'd3;
385:route=4'd4;
386:route=4'd4;
387:route=4'd3;
388:route=4'd3;
392:route=4'd3;
394:route=4'd4;
395:route=4'd4;
396:route=4'd3;
400:route=4'd3;
401:route=4'd3;
403:route=4'd4;
404:route=4'd4;
408:route=4'd4;
409:route=4'd3;
410:route=4'd3;
412:route=4'd4;
416:route=4'd4;
417:route=4'd4;
418:route=4'd3;
419:route=4'd3;
449:route=4'd3;
450:route=4'd2;
451:route=4'd3;
452:route=4'd1;
456:route=4'd3;
458:route=4'd3;
459:route=4'd2;
460:route=4'd1;
464:route=4'd1;
465:route=4'd3;
467:route=4'd3;
468:route=4'd2;
472:route=4'd3;
473:route=4'd1;
474:route=4'd3;
476:route=4'd2;
480:route=4'd2;
481:route=4'd2;
482:route=4'd1;
483:route=4'd1;
577:route=4'd3;
578:route=4'd2;
579:route=4'd3;
580:route=4'd1;
584:route=4'd3;
586:route=4'd3;
587:route=4'd2;
588:route=4'd1;
592:route=4'd1;
593:route=4'd3;
595:route=4'd3;
596:route=4'd2;
600:route=4'd3;
601:route=4'd1;
602:route=4'd3;
604:route=4'd2;
608:route=4'd2;
609:route=4'd2;
610:route=4'd1;
611:route=4'd1;
705:route=4'd3;
706:route=4'd2;
707:route=4'd3;
708:route=4'd1;
712:route=4'd3;
714:route=4'd3;
715:route=4'd2;
716:route=4'd1;
720:route=4'd1;
721:route=4'd3;
723:route=4'd3;
724:route=4'd2;
728:route=4'd3;
729:route=4'd1;
730:route=4'd3;
732:route=4'd2;
736:route=4'd2;
737:route=4'd2;
738:route=4'd1;
739:route=4'd1;
833:route=4'd3;
840:route=4'd3;
default:route=0;endcase end endfunction
initial begin
 for(integer i=0;i<64;i++)begin names[i]=0;sizes[i]=0;end
names[0]=64'h2020323054494157;sizes[0]=921654;
names[1]=64'h2020313054494157;sizes[1]=921654;
names[2]=64'h2020544c55534552;sizes[2]=921654;
names[3]=64'h202033305a495551;sizes[3]=921654;
names[4]=64'h202032305a495551;sizes[4]=921654;
names[5]=64'h202031305a495551;sizes[5]=921654;
names[6]=64'h204556524553424f;sizes[6]=921654;
names[7]=64'h2020454349544f4e;sizes[7]=921654;
names[8]=64'h33304e4f5353454c;sizes[8]=921654;
names[9]=64'h32304e4f5353454c;sizes[9]=921654;
names[10]=64'h31304e4f5353454c;sizes[10]=921654;
names[11]=64'h202033304c505845;sizes[11]=921654;
names[12]=64'h202032304c505845;sizes[12]=921654;
names[13]=64'h202031304c505845;sizes[13]=921654;
names[14]=64'h2020455352554f43;sizes[14]=921654;
names[15]=64'h2020205452454c41;sizes[15]=921654;
names[32]=64'h2031304543494f56;sizes[32]=768044;
names[33]=64'h20203130454e4f54;sizes[33]=768044;
names[34]=64'h2031304f4e414950;sizes[34]=768044;
names[35]=64'h202033305443454c;sizes[35]=1421452;
names[36]=64'h202032305443454c;sizes[36]=1611828;
names[37]=64'h202031305443454c;sizes[37]=1209092;
names[38]=64'h20202031304d4742;sizes[38]=4608044;
 if($test$plusargs("badmeta"))sizes[15]=sizes[15]+1;
 if($test$plusargs("notice"))begin
  for(integer j=0;j<64;j++)begin names[j]=0;sizes[j]=0;end
  names[0]=64'h2020205452454c41;sizes[0]=921654;
  names[1]=64'h2020454349544f4e;sizes[1]=921654;
  $readmemh("sim/integration/platform/notice_v2.hex",scene);length_bytes=46400;
 end else $readmemh("sim/integration/platform/course_v2.hex",scene);
 ticks(4);reset=0;start=1;ticks(1);start=0;
 for(integer i=0;i<length_bytes;i++)begin
  while(!br&&loader_error==0)ticks(1);if(loader_error!=0)break;bv=1;bd=scene[i]^(($test$plusargs("badcrc")&&i==100)?8'd1:8'd0);bl=i==length_bytes-1;ticks(1);bv=0;
 end
 while(!wd)ticks(1);
 if($test$plusargs("badcrc"))begin ticks(10);$fatal(1,"CRC rejection missing");end
 for(integer i=0;i<length_bytes-32;i++)if(memory[i>>5][(i%32)*8+:8]!=scene[i+32])$fatal(1,"staging data mismatch %0d",i);

 if($test$plusargs("badwidget"))memory[(int'(resources)+int'(pages))][103:96]=0;
 if($test$plusargs("notice"))begin
  land(0);click(0);land(1);click(0);land(0);send_event(10);wait_idle();
  if(status[25:22]!=0||status[15:11]!=0)$fatal(1,"generic notice configuration");
  $display("PASS second scene, same runtime RTL, alternate backgrounds/widgets/resource count, optional notice absent");$finish;
 end
 land(0);click(0);land(1);click(0);land(2);click(0);land(3);
 // Normal notice, priority escalation, exact context/focus restoration.
 focus_to(2);send_event(10);land(14);send_event(11);land(15);send_event(12);land(3);
 if(status[10:8]!=2)$fatal(1,"notice focus restoration");
 send_event(5);land(4);click(2);land(5);click(2);land(6);
 // Three independently configured observation audio buttons.
 click(0);wait_idle();if(audio_index!=1)$fatal(1,"TONE resource name mapping");
 click(1);wait_idle();if(audio_index!=2)$fatal(1,"PIANO resource name mapping");
 click(2);wait_idle();if(audio_index!=0)$fatal(1,"VOICE resource name mapping");
 click(4);land(7);
 click(4);ticks(30);if(status[15:11]!=7||status[25:22]!=0)$fatal(1,"submit without selection");
 click(2);click(0);click(4);land(8);if(status[25:22]!=1)$fatal(1,"first answer score");
 // Revisit, immutable first-attempt result and no duplicate score.
 send_event(6);land(7);click(1);click(4);land(8);if(status[25:22]!=1)$fatal(1,"duplicate scoring");
 click(0);land(9);click(0);click(4);land(10);if(status[25:22]!=1)$fatal(1,"wrong answer scored");
 click(0);land(11);click(2);click(4);land(12);if(status[25:22]!=2)$fatal(1,"third answer score");
 click(0);land(13);if(!status[3]||status[25:22]!=2||status[29:26]!=3)$fatal(1,"result overlay");
 click(0);land(0);if(status[25:22]!=0)$fatal(1,"restart score reset");

 $display("PASS real v2 CRC+SDRAM staging, shuffled catalog binding, full course, first-attempt score, notifications and restart");$finish;
end
initial begin #100000000;$fatal(1,"runtime simulation watchdog");end
endmodule
