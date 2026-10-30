`timescale 1ns/1ps
module tb_architecture;
reg refclk=0,run_n=0,rx=1,em=0,hide=0,ms=0,ps=0;
always #10 refclk=~refclk;
wire [3:0] row_a,row_b;wire [7:0] leds_a,leds_b;
wire clk_a,a0,a1,a2,tx_a,cs_a,sck_a,mosi_a;
wire clk_b,b0,b1,b2,tx_b,cs_b,sck_b,mosi_b;
dmz_reference_top golden(.clk_50m(refclk),.run_n(run_n),.mute_switch(ms),.pattern_switch(ps),.uart_rx(rx),
 .emergency_switch(em),.visual_hide_switch(hide),.key_col(4'hf),.key_row(row_a),.SD_CS(cs_a),.SD_SCK(sck_a),.SD_MOSI(mosi_a),.SD_MISO(1'b1),
 .uart_tx(tx_a),.leds(leds_a),.HDMI_CLK_P(clk_a),.HDMI_D0_P(a0),.HDMI_D1_P(a1),.HDMI_D2_P(a2));
dmz_track1_top dut(.clk_50m(refclk),.run_n(run_n),.mute_switch(ms),.pattern_switch(ps),.uart_rx(rx),
 .emergency_switch(em),.visual_hide_switch(hide),.key_col(4'hf),.key_row(row_b),.SD_CS(cs_b),.SD_SCK(sck_b),.SD_MOSI(mosi_b),.SD_MISO(1'b1),
 .uart_tx(tx_b),.leds(leds_b),.HDMI_CLK_P(clk_b),.HDMI_D0_P(b0),.HDMI_D1_P(b1),.HDMI_D2_P(b2));
// Speed up only telemetry capture, identically in both designs.
defparam golden.telemetry.PERIOD=128;
defparam dut.diagnostics.telemetry.PERIOD=128;
reg [9:0] sx=0,sy=0;reg push=0,flush=0;reg [31:0] data=0;
integer memory_cycles=0,pixels=0,bits=0;
always @(negedge refclk) begin
 memory_cycles=memory_cycles+1;push=memory_cycles%4==0;
 data={16'(memory_cycles),16'(~memory_cycles)};
end
always @(negedge dut.pixel_clk) begin
 if(pixels%97==0) begin sx=0;sy=480;end
 else begin sx=10'((pixels*13)%640);sy=10'((pixels*17)%480);end
 #1;
 if(run_n&&!dut.base_pixel_reset&&pixels>128) begin
  if((^dut.rgb===1'bx)||(^dut.pcm_output===1'bx)) $fatal(1,"Unknown output after initialization");
  if(dut.rgb!==golden.rgb) $fatal(1,"RGB mismatch at %0d new=%h old=%h",pixels,dut.rgb,golden.rgb);
  if({dut.aw[1],dut.aw[0]}!=={golden.aw[1],golden.aw[0]}) $fatal(1,"PCM mismatch at %0d",pixels);
  if({dut.command_valid,dut.command_byte,dut.restart,dut.volume,dut.menu_open,dut.menu_query,dut.emergency,dut.visual_enabled}!==
     {golden.command_valid,golden.command_byte,golden.restart,golden.volume,golden.menu_open,golden.menu_query,golden.emergency,golden.visual_enabled}) $fatal(1,"Control mismatch");
  if(dut.diagnostics.status!==golden.status) $fatal(1,"Telemetry word mismatch at %0d",pixels);
  if({tx_a,row_a,leds_a}!=={tx_b,row_b,leds_b}) $fatal(1,"Board output mismatch");
 end
 pixels=pixels+1;
end
always @(negedge dut.serial_clk) begin
 #1;if(run_n&&!dut.pixel_reset&&pixels>128) begin
  if({clk_a,a0,a1,a2}!=={clk_b,b0,b1,b2}) $fatal(1,"TMDS mismatch");bits=bits+1;
 end
end
task send(input [7:0] ch);
 begin
  @(negedge dut.pixel_clk);rx=0;repeat(217) @(negedge dut.pixel_clk);
  for(integer i=0;i<8;i=i+1) begin rx=ch[i];repeat(217) @(negedge dut.pixel_clk);end
  rx=1;repeat(230) @(negedge dut.pixel_clk);
 end
endtask
initial begin
 force golden.x=sx;force dut.x=sx;force golden.y=sy;force dut.y=sy;
 force golden.fifo_push=push;force dut.fifo_push=push;
 force golden.fifo_in=data;force dut.fifo_in=data;
 force golden.fifo_reset=!run_n;force dut.fifo_reset=!run_n;
 force golden.display_valid=1;force dut.display_valid=1;
 force golden.bist_done=1;force dut.bist_done=1;force golden.bist_passed=1;force dut.bist_passed=1;
 force golden.pcm_valid=1;force dut.pcm_valid=1;force golden.pcm_pair=data;force dut.pcm_pair=data;
 force golden.wav_found=1;force dut.wav_found=1;force golden.wav_done=0;force dut.wav_done=0;
 force golden.wav_error=0;force dut.wav_error=0;force golden.audio_flushing=flush;force dut.audio_flushing=flush;
 force golden.catalog_ready=1;force dut.catalog_ready=1;force golden.image_count=3;force dut.image_count=3;
 force golden.wav_count=2;force dut.wav_count=2;force golden.browse_valid=1;force dut.browse_valid=1;
 force golden.browse_tag=golden.query_mem;force dut.browse_tag=dut.query_mem;
 force golden.browse_name=64'h2020454c49464d44;force dut.browse_name=64'h2020454c49464d44;
 #400;run_n=1;
 send("M");send("U");send("-");send("+");send("K");send("L");
 em=1;repeat(300) @(negedge dut.pixel_clk);send("M");send("U");em=0;
 send("T");send("W");send("F");send("O");send("V");send("E");send("F");
 send("]");send("C");send("D");hide=1;repeat(300) @(negedge dut.pixel_clk);hide=0;
 flush=1;repeat(20) @(negedge dut.pixel_clk);flush=0;send("Q");send("X");send("Z");send("Z");send("R");
 repeat(27000) @(negedge dut.pixel_clk);
 if(bits<100000||dut.command_count<15) $fatal(1,"Insufficient stimulus");
 $display("PASS architecture comparison: %0d pixel cycles, %0d TMDS symbols, RGB/PCM/control/96-byte telemetry unchanged",pixels,bits);$finish;
end
initial begin #10000000;$fatal(1,"Architecture timeout");end
endmodule
