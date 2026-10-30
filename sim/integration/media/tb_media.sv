`timescale 1ns/1ps
module tb_media;
wire invalid_volume=$test$plusargs("bpb")||$test$plusargs("signature")||$test$plusargs("nobmp");
reg clk=0,reset=1,select_request=0;always #10 clk=~clk;
reg [4:0] requested=0;wire [4:0] selected;
reg audio_select=0;reg [3:0] audio_requested=0;wire [3:0] audio_selected;wire audio_flush;
reg [5:0] browse_query=0;wire [5:0] browse_tag;wire [63:0] browse_name;wire browse_valid;wire [4:0] wav_count;
wire catalog_ready;wire [5:0] count;wire [63:0] name;
wire image_busy,image_done,lv,last,wav_found,wav_done,pcm_valid;
wire [7:0] image_error,image_state,wav_error,wav_state;
wire [31:0] pixels,wav_bytes,decoded,loops,total,pcm_pair,image_reads,audio_reads,lba;
wire [17:0] addr;wire [255:0] data;reg load_ready=1,ack=0;
wire read_start;reg sd_ready=1,sd_done=0,bv=0;reg [8:0] bi=0;reg [7:0] bd=0;
integer cycle=0,pcm_count=0,bursts=0,ack_delay=0,sd_pos=0;reg reading=0;reg [31:0] active_lba;
wire pcm_ready=cycle%103==0;
function automatic [31:0] audio_expected(input integer index);
 reg [15:0] left;begin left=16'((index%4096)*17-32768);audio_expected={~left,left};end
endfunction
`include "sim/fixtures/av_fixture.svh"
dmz_media_pipeline dut(.clk(clk),.reset(reset),.enable(1'b1),.audio_urgent(cycle%1000<500),
 .audio_select_request(audio_select),.audio_requested_index(audio_requested),.audio_selected_index(audio_selected),.audio_flushing(audio_flush),.wav_count(wav_count),
 .browse_query(browse_query),.browse_tag(browse_tag),.browse_name(browse_name),.browse_valid(browse_valid),
 .select_request(select_request),.requested_index(requested),.selected_index(selected),.catalog_ready(catalog_ready),.image_count(count),.image_name(name),
 .image_busy(image_busy),.image_done(image_done),.image_error(image_error),.image_status(image_state),.image_pixels(pixels),
 .load_valid(lv),.load_addr(addr),.load_data(data),.load_last(last),.load_ready(load_ready),.load_ack(ack),
 .wav_found(wav_found),.wav_bytes(wav_bytes),.decoded_pairs(decoded),.loop_count(loops),.declared_pairs(total),.wav_error(wav_error),.wav_status(wav_state),.wav_done(wav_done),
 .pcm_valid(pcm_valid),.pcm_ready(pcm_ready),.pcm_pair(pcm_pair),.sd_start(read_start),.sd_lba(lba),.sd_ready(sd_ready),.sd_done(sd_done),.sd_byte_valid(bv),
 .sd_byte_index(bi),.sd_byte_data(bd),.sd_error(8'd0),.image_reads(image_reads),.audio_reads(audio_reads));
function automatic [15:0] image_expected(input integer a,input integer odd);
 integer x,y;reg [7:0] r,g,b;
 begin x=(a%320)*2+odd;y=a/320;b=8'(x);g=8'(y);r=8'(x^y);if(selected==1) begin r=~r;g=~g;b=~b;end image_expected={r[7:3],g[7:2],b[7:3]};end
endfunction
reg held=0;reg [31:0] held_pcm;
always @(posedge clk) begin
 cycle<=cycle+1;bv<=0;sd_done<=0;ack<=0;
 if(read_start) begin
  if(!sd_ready||reading) $fatal(1,"SD transaction overlap");
  reading<=1;sd_ready<=0;active_lba<=lba;sd_pos<=0;
 end else if(reading&&cycle%2==0) begin
  bv<=1;bi<=9'(sd_pos);bd<=disk(active_lba,sd_pos);
  if(sd_pos==511) reading<=0;else sd_pos<=sd_pos+1;
 end else if(!reading&&!sd_ready) begin sd_done<=1;sd_ready<=1;end
 if(lv&&load_ready) begin
  for(integer j=0;j<8;j=j+1) if(data[j*32+:32]!=={image_expected(addr+j,1),image_expected(addr+j,0)}) $fatal(1,"streamed BMP pixel address=%0d",addr+j);
  bursts<=bursts+1;ack_delay<=5;load_ready<=0;
 end
 if(ack_delay>0) begin ack_delay<=ack_delay-1;if(ack_delay==1) begin ack<=1;load_ready<=1;end end
 if(audio_flush) begin pcm_count<=0;held<=0;end else begin
 if(pcm_valid&&pcm_ready) begin
  if(pcm_pair!==(audio_expected(pcm_count)^(audio_selected==1?32'h00ff00ff:32'd0))) $fatal(1,"fragmented WAV/sample/loop mismatch idx=%0d got=%h",pcm_count,pcm_pair);
  pcm_count<=pcm_count+1;
 end
 if(!reset&&held&&wav_error==0&&(!pcm_valid||pcm_pair!==held_pcm)) $fatal(1,"PCM did not hold under backpressure");
 held<=pcm_valid&&!pcm_ready;held_pcm<=pcm_pair;
 end
 if(!reset&&((image_error!=0&&!invalid_volume)||(wav_error!=0&&!$test$plusargs("wavinvalid")&&!$test$plusargs("shortchain")))) $fatal(1,"media error BMP=%0d WAV=%0d",image_error,wav_error);
end
task choose(input [4:0] slot);
 begin @(negedge clk);bursts=0;requested=slot;select_request=1;@(negedge clk);select_request=0;wait(image_busy);wait(image_done);end
endtask
initial begin
 #100;reset=0;
 if(invalid_volume) begin
  wait(image_error!=0);
  if(image_error!=($test$plusargs("signature")?1:$test$plusargs("bpb")?3:5)||bursts!=0) $fatal(1,"Invalid volume accepted or partially written: %0d",image_error);
  $display("PASS invalid FAT signature/BPB or empty image catalog rejected with zero framebuffer writes");$finish;
 end
 wait(image_done);
 if(count!=2||wav_found==$test$plusargs("nowav")||(!$test$plusargs("nowav")&&wav_bytes!=16428)||bursts!=19200) $fatal(1,"catalog/image count=%0d wav=%0d bursts=%0d",count,wav_found,bursts);
 choose(1);if(bursts!=19200||pixels!=307200) $fatal(1,"second image frame incomplete");
 choose(0);if(bursts!=19200||image_reads==0) $fatal(1,"image reload progress");
 if($test$plusargs("wavinvalid")) begin if(wav_error!=3||pcm_count!=0) $fatal(1,"bad WAV must stop without harming gallery");end
 else if($test$plusargs("shortchain")) begin if(wav_error!=135||pcm_count>1013) $fatal(1,"short FAT chain must stop audio");end
 else if($test$plusargs("nowav")) begin if(audio_reads!=0||pcm_count!=0) $fatal(1,"missing WAV must not read audio");end
 else if(loops<2||total!=4096||audio_reads==0) $fatal(1,"loop/concurrent progress");
 if($test$plusargs("multiwav")) begin
  if(wav_count!=2) $fatal(1,"WAV index count");
  browse_query=33;repeat(5) @(negedge clk);
  if(!browse_valid||browse_tag!=33||browse_name!=64'h202020324f4d4544) $fatal(1,"WAV metadata query");
  // Cancel while a sector transaction is outstanding; arbiter must drain it.
  wait(dut.audio.file_stream.state==3);@(negedge clk);audio_requested=1;audio_select=1;
  @(negedge clk);audio_select=0;wait(!audio_flush);wait(loops>=1&&pcm_count>4500);
  browse_query=1;repeat(5) @(negedge clk);
  if(!browse_valid||browse_tag!=1||browse_name!=64'h2020202020424349) $fatal(1,"BMP metadata query");
  // Switch back under PCM backpressure, then replay even the same selected file.
  repeat(2) begin
   wait(pcm_valid&&!pcm_ready);@(negedge clk);audio_requested=0;audio_select=1;
   @(negedge clk);audio_select=0;wait(!audio_flush);wait(loops>=1&&pcm_count>4500);
  end
  $display("PASS multi-WAV metadata, exact new-track samples, outstanding SD cancellation, backpressure switching and same-file restart");
 end
 $display("PASS shared FAT/SD: catalog BMP+WAV, 3 complete images/921600 pixels, fragmented WAV loops and exact stereo samples, concurrent arbitration/backpressure");$finish;
end
initial begin #1000000000;$fatal(1,"media timeout image=%0d wav=%0d",image_state,wav_state);end
endmodule
