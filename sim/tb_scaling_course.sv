`timescale 1ns/1ps
module tb_scaling_course;
reg clk=0;always #5 clk=~clk;
reg reset=1,start=0,bv=0,bl=0;reg [7:0] bd=0;wire br,sw,sv,commit;wire [19:0] sa;wire [7:0] sb,loader_error;
wire [1:0] version;wire [20:0] length;wire [6:0] resources;wire [5:0] pages;wire [7:0] widgets;wire [4:0] entry;
wire wr,wd,wi,wvalid;wire [20:0] wa;wire [255:0] wdata;
wire [1:0] ready,response;wire [20:0] ra,ma;wire [255:0] unused,md;wire rv,mv,mwrite;reg mr=0,mresponse=0;reg [255:0] memory_data=0;
reg [255:0] memory[0:32767];reg [7:0] scene[0:536255];
wire active;wire [7:0] error;wire lookup;wire [5:0] query;reg [5:0] tag=0;reg valid=0;reg [63:0] name=0;reg [31:0] bytes=0;
reg [63:0] names[0:63];reg [31:0] sizes[0:63];
reg menu=0,paused=0;reg ev=0;reg [3:0] action=0;reg physical=0;reg [31:0] swaps=0;reg image_busy=0;wire image_select,page_begin;wire [4:0] image_index;
wire audio_select,audio_stop;wire [3:0] audio_index;wire [41:0] params;reg [7:0] params_ack=0;reg [8:0] finished=0;
wire ctrl;wire [7:0] ctrl_byte;wire [3:0] count;wire [98:0] widget;wire [4:0] displayed;wire [159:0] status;
integer length_bytes=536256;integer cycle=0,delay=0,imgdelay=0;reg pending=0,pwrite;reg [20:0] address;reg [255:0] write_data;
dmz_scene_loader loader(.clk(clk),.reset(reset),.start(start),.stream_error(1'b0),.byte_valid(bv),.byte_last(bl),.byte_data(bd),.byte_ready(br),
 .staging_ready(wr),.staging_write(sw),.staging_addr(sa),.staging_data(sb),.busy(),.ready(sv),.commit(commit),.error(loader_error),.resources(resources),.pages(pages),.widgets(widgets),.entry_page(entry),.format_version(version),.payload_length(length));
dmz_cfg_writer #(.CFG_BASE(21'h100000)) writer(.clk(clk),.reset(reset),.start(start),.abort(loader_error!=0),.valid(sw),.last(bl),.addr(sa),.data(sb),.ready(wr),
 .mem_valid(wvalid),.mem_addr(wa),.mem_data(wdata),.mem_ready(ready[0]),.mem_response(response[0]),.idle(wi),.done(wd));
dmz_mem_mux #(.N(2)) mux(.clk(clk),.reset(reset),.valid({rv,wvalid}),.write(2'b01),.addr({ra,wa}),.wdata({256'd0,wdata}),.ready(ready),.response(response),
 .req_valid(mv),.req_write(mwrite),.req_addr(ma),.req_wdata(md),.req_ready(mr),.rsp_valid(mresponse));
dmz_scene_runtime #(.MS_CYCLES(16),.AUTOPLAY_ON_RESET(1),.CFG_BASE(21'h100000)) dut(.clk(clk),.reset(reset),.start(sv&&wd),.version(version),.payload_length(length),.resource_count(resources),.page_count(pages),.widget_total(widgets),.entry_page(entry),
 .active(active),.error(error),.mem_valid(rv),.mem_write(),.mem_addr(ra),.mem_wdata(unused),.mem_ready(ready[1]),.mem_response(response[1]),.mem_data(memory_data),
 .lookup_enable(lookup),.lookup_query(query),.browse_tag(tag),.browse_valid(valid),.browse_name(name),.browse_bytes(bytes),.image_count(6'd19),.wav_count(5'd7),
 .event_valid(ev),.event_action(action),.menu_open(menu),.paused(paused),.muted(1'b0),.physical_alert(physical),.swaps(swaps),.image_busy(image_busy),.image_error(8'd0),
 .image_select(image_select),.image_index(image_index),.page_begin(page_begin),.audio_select(audio_select),.audio_stop(audio_stop),.audio_index(audio_index),.audio_params(params),.audio_params_ack(params_ack),.audio_finished(finished),
 .control_valid(ctrl),.control_byte(ctrl_byte),.control_count(count),.compositor_busy(1'b0),.compositor_index(3'd0),.compositor_widget(widget),.displayed_image(displayed),.status(status));
always @(posedge clk)begin
 cycle<=cycle+1;mr<=!pending&&(cycle%5!=0);mresponse<=0;
 if(mv&&mr)begin
  if(pending)$fatal(1,"overlapping memory transactions");
  if(ma<21'h100000||ma>=21'h140000||ma[2:0]!=0)$fatal(1,"config address bounds %h",ma);
  address<=ma;write_data<=md;pwrite<=mwrite;pending<=1;delay<=2+cycle%7;mr<=0;
 end
 if(pending)begin
  if(delay!=0)delay<=delay-1;
  else begin
   if(pwrite)memory[(address-21'h100000)>>3]<=write_data;else memory_data<=memory[(address-21'h100000)>>3];
   mresponse<=1;pending<=0;
  end
 end
 tag<=query;name<=names[query];bytes<=sizes[query];valid<=1;
 params_ack<=params[41:34];
 if(ctrl&&ctrl_byte=="H")paused<=1;else if(ctrl&&ctrl_byte=="A")paused<=0;
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
 names[0]=64'h2020313045444957;sizes[0]=2764854;
 names[1]=64'h2020323054494157;sizes[1]=921654;
 names[2]=64'h2020313054494157;sizes[2]=921654;
 names[3]=64'h202031304c4c4154;sizes[3]=691254;
 names[4]=64'h2031304c4c414d53;sizes[4]=230454;
 names[5]=64'h2020544c55534552;sizes[5]=921654;
 names[6]=64'h202033305a495551;sizes[6]=921654;
 names[7]=64'h202032305a495551;sizes[7]=921654;
 names[8]=64'h202031305a495551;sizes[8]=921654;
 names[9]=64'h204556524553424f;sizes[9]=921654;
 names[10]=64'h2020454349544f4e;sizes[10]=921654;
 names[11]=64'h33304e4f5353454c;sizes[11]=921654;
 names[12]=64'h32304e4f5353454c;sizes[12]=921654;
 names[13]=64'h31304e4f5353454c;sizes[13]=921654;
 names[14]=64'h202033304c505845;sizes[14]=921654;
 names[15]=64'h202032304c505845;sizes[15]=921654;
 names[16]=64'h202031304c505845;sizes[16]=921654;
 names[17]=64'h2020455352554f43;sizes[17]=921654;
 names[18]=64'h2020205452454c41;sizes[18]=921654;
 names[32]=64'h2031304543494f56;sizes[32]=768044;
 names[33]=64'h20203130454e4f54;sizes[33]=768044;
 names[34]=64'h2031304f4e414950;sizes[34]=768044;
 names[35]=64'h202033305443454c;sizes[35]=1421452;
 names[36]=64'h202032305443454c;sizes[36]=1611828;
 names[37]=64'h202031305443454c;sizes[37]=1209092;
 names[38]=64'h20202031304d4742;sizes[38]=4608044;
 $readmemh("../test_data/scene.hex",scene);
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
