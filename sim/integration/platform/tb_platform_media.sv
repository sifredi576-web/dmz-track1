`timescale 1ns/1ps
module tb_platform_media;
import "DPI-C" function void dmz_select_package(input int unsigned notice);
initial dmz_select_package($test$plusargs("notice"));
import "DPI-C" function int unsigned dmz_disk(input int unsigned lba,input int unsigned index);
import "DPI-C" function int unsigned dmz_expected_pcm(input int unsigned wave,input int unsigned sample);
import "DPI-C" function int unsigned dmz_expected_pixel(input int unsigned page,input int unsigned pixel);
reg clk=0;always #5 clk=~clk;reg reset=1;integer cycle=0;
wire catalog,found,config_ready,mode;wire [7:0] error,image_error,wav_error;wire [159:0] status;
wire [4:0] selected;wire [3:0] wave;wire image_busy,image_done,lv,last,pcm,flush;
wire [17:0] la;wire [255:0] ld;reg lr=1,lack=0;
wire sd_start;wire [31:0] lba;reg sr=1,sd=0,bv=0;reg [8:0] bi=0;reg [7:0] bd=0;
wire av,aw;wire [20:0] aa;wire [255:0] ad;reg ar=0,ap=0;reg [255:0] ard=0;reg [255:0] memory[0:32767];
reg [31:0] swaps=0;wire [41:0] params;reg [7:0] ack=0;
reg ev=0;reg [3:0] action=0;wire [31:0] pair;wire timed=$test$plusargs("timed");
wire fifo_full;
wire pcm_ready=timed?!fifo_full:(cycle%1000==0);
reg rclk=0;always #10 rclk=~rclk;
wire fifo_empty;wire [11:0] fifo_used;wire [31:0] fifo_data;
reg [1:0] flush_sync=3,prefill_sync=0;reg [10:0] sample_div=0;reg playing=0;
integer consumed=0,underruns=0;wire sample_tick=sample_div==1041;
wire pop=timed&&sample_tick&&playing&&!fifo_empty&&!status[148]&&params[33];
dmz_pixel_fifo #(.AW(11),.RECODE_ADDR(1)) fifo(.wclk(clk),.wreset(reset||flush),.wpush(timed&&pcm&&pcm_ready),.wdata(pair),.full(fifo_full),.used(fifo_used),
 .rclk(rclk),.rreset(reset||flush_sync[1]),.rpop(pop),.rdata(fifo_data),.empty(fifo_empty));
always @(posedge rclk)begin
 flush_sync<=reset?3:{flush_sync[0],flush};
 if(reset||flush_sync[1])begin prefill_sync<=0;sample_div<=0;playing<=0;end
 else begin
  prefill_sync<={prefill_sync[0],fifo_used>=512};
  if(prefill_sync[1])playing<=1;
  sample_div<=sample_tick?0:sample_div+1'b1;
  if(sample_tick&&playing&&params[33]&&!status[148]&&fifo_empty)underruns<=underruns+1;
  if(pop)consumed<=consumed+1;
 end
end
integer token_wait=0;integer sindex=0,ldelay=0,mdelay=0,samples=0,frames=0,bursts=0;reg reading=0,mpending=0,mwrite;reg [31:0] slba;reg [20:0] maddr;reg [255:0] mdata;reg final_load=0;
dmz_media_pipeline #(.RT_PLATFORM(1)) dut(.clk(clk),.reset(reset),.enable(1'b1),.audio_urgent(!timed||fifo_used<1024),.pair_enable(1'b0),.frame_swaps(swaps),
 .audio_select_request(1'b0),.audio_requested_index(4'd0),.audio_selected_index(wave),.platform_found(found),.platform_ready(config_ready),.platform_error(error),.audio_flushing(flush),
 .wav_count(),.browse_query(6'd0),.browse_tag(),.browse_name(),.browse_valid(),.select_request(1'b0),.requested_index(5'd0),.selected_index(selected),.catalog_ready(catalog),.image_count(),.image_name(),
 .image_busy(image_busy),.image_done(image_done),.image_error(image_error),.image_status(),.image_pixels(),.load_valid(lv),.load_addr(la),.load_data(ld),.load_last(last),.load_ready(lr),.load_ack(lack),
 .wav_found(),.wav_bytes(),.decoded_pairs(),.loop_count(),.declared_pairs(),.wav_error(wav_error),.wav_status(),.wav_done(),.pcm_valid(pcm),.pcm_ready(pcm_ready),.pcm_pair(pair),
 .sd_start(sd_start),.sd_lba(lba),.sd_ready(sr),.sd_done(sd),.sd_byte_valid(bv),.sd_byte_index(bi),.sd_byte_data(bd),.sd_error(8'd0),.image_reads(),.audio_reads(),
 .ui_event_valid(ev),.ui_event_action(action),.ui_menu_open(1'b0),.ui_paused(1'b0),.ui_muted(1'b0),.physical_alert(1'b0),.platform_mode(mode),.ui_status(status),
 .audio_params(params),.audio_params_ack(ack),.audio_finished(9'd0),.ui_control_valid(),.ui_control_byte(),
 .aux_valid(av),.aux_write(aw),.aux_addr(aa),.aux_data(ad),.aux_ready(ar),.aux_response(ap),.aux_rdata(ard));
always @(posedge clk)begin
 cycle<=cycle+1;bv<=0;sd<=0;lack<=0;ap<=0;ack<=params[41:34];ar<=!mpending&&cycle%5!=0;
 if(sd_start)begin if(!sr||reading)$fatal(1,"SD collision");reading<=1;sr<=0;slba<=lba;sindex<=0;token_wait<=timed?10000:0;end
 else if(reading&&token_wait!=0)token_wait<=token_wait-1;
 else if(reading&&cycle%(timed?64:2)==0)begin bv<=1;bi<=9'(sindex);bd<=8'(dmz_disk(slba,sindex));if(sindex==511)reading<=0;else sindex<=sindex+1;end
 else if(!reading&&!sr)begin sd<=1;sr<=1;end
 if(av&&ar)begin
  if(aa<21'h80000||aa>=21'hc0000||aa[2:0]!=0)$fatal(1,"aux address bounds");
  maddr<=aa;mdata<=ad;mwrite<=aw;mpending<=1;mdelay<=cycle%5+1;ar<=0;
 end
 if(mpending)begin if(mdelay!=0)mdelay<=mdelay-1;else begin
  if(mwrite)memory[(maddr-21'h80000)>>3]<=mdata;else ard<=memory[(maddr-21'h80000)>>3];
  mpending<=0;ap<=1;end end
 if(lv&&lr)begin
  for(integer p=0;p<16;p++)begin
   if(ld[p*16+:16]!==16'(dmz_expected_pixel(int'(dut.configured_ui.runtime.target_page),int'(la)*2+p)))
    $fatal(1,"pixel mismatch page=%0d x=%0d y=%0d actual=%h expected=%h",dut.configured_ui.runtime.target_page,(int'(la)*2+p)%640,(int'(la)*2+p)/640,ld[p*16+:16],16'(dmz_expected_pixel(int'(dut.configured_ui.runtime.target_page),int'(la)*2+p)));
  end
  bursts<=bursts+1;lr<=0;ldelay<=3;final_load<=last;end
 if(ldelay!=0)begin ldelay<=ldelay-1;if(ldelay==1)begin lack<=1;lr<=1;if(final_load)begin
  if(bursts!=19200)$fatal(1,"incomplete frame %0d",bursts);bursts<=0;frames<=frames+1;swaps<=swaps+1;end end end
 if(flush)samples<=0;
 else if(pcm&&pcm_ready)begin
  if(pair!==dmz_expected_pcm(wave,samples))$fatal(1,"real WAV data mismatch wave=%0d sample=%0d got=%h",wave,samples,pair);
  samples<=samples+1;
 end
 if(!reset&&(error!=0||image_error!=0||wav_error!=0))$fatal(1,"integrated errors CFG=%h BMP=%h WAV=%h",error,image_error,wav_error);
end
task ticks(input integer n);repeat(n)@(negedge clk);endtask
task idle_page(input integer wanted);begin
 wait(status[0]&&!status[1]&&!status[149]&&status[15:11]==wanted&&dut.configured_ui.runtime.state==11);ticks(16);
 if(status[15:11]!=wanted)$fatal(1,"expected page %0d got %0d",wanted,status[15:11]);
 $display("REAL SD PAGE %0d complete frames=%0d audio samples=%0d",wanted,frames,samples);
end endtask
task send(input [3:0] e);begin ticks(1);action=e;ev=1;ticks(1);ev=0;ticks(16);end endtask
initial begin
 ticks(5);reset=0;idle_page(0);
 if($test$plusargs("notice"))begin
  send(5);idle_page(1);send(5);idle_page(0);
  if(params[33]||samples!=0||frames!=3)$fatal(1,"second package integration");
  $display("PASS second TF package on same integrated RTL, fragmented config/BMP, independent labels and no WAV requirement");$finish;
 end
 wait(samples>300);send(5);idle_page(1);if(params[33])$fatal(1,"silent page did not stop audio");
 if(timed)begin
  if(consumed<5000||underruns!=0)$fatal(1,"timed audio FIFO underrun=%0d consumed=%0d",underruns,consumed);
  $display("PASS 2048-pair asynchronous audio FIFO, 48kHz consumption, 12.5Mbit/s card data + 100us token delays, concurrent composed image load, zero audio underruns (%0d pairs)",consumed);$finish;
 end
 send(5);idle_page(2);send(5);idle_page(3);wait(samples>300);
 send(10);idle_page(14);send(11);idle_page(15);send(12);idle_page(3);wait(samples>600);
 if(frames!=7)$fatal(1,"page/frame commit count");
 $display("PASS pixel-exact BMP + Chinese composition including NOTICE/ALERT, actual FAT32 fragmented SCENE/BMP/WAV, CRC->SDRAM->runtime->Chinese composition->frame commit, real PCM and notice return without audio restart");$finish;
end
initial begin #(64'd5000000000);$fatal(1,"platform media timeout state=%0d image=%0d",dut.configured_ui.runtime.state,dut.images.state);end
endmodule
