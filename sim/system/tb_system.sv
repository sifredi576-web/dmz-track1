`timescale 1ns/1ps
// Integrated logic model, not an electrical or vendor-hard-macro timing model.
module tb_system;
reg clk=0,run_n=0,rx=1;always #10 clk=~clk;
wire cs,sck,mosi,miso,tx;wire [7:0] leds;wire hc,h0,h1,h2;
wire [31:0] model_data;
dmz_track1_top dut(.clk_50m(clk),.run_n(run_n),.mute_switch(1'b1),.pattern_switch(1'b1),.uart_rx(rx),
 .SD_CS(cs),.SD_SCK(sck),.SD_MOSI(mosi),.SD_MISO(miso),.uart_tx(tx),.leds(leds),.HDMI_CLK_P(hc),.HDMI_D0_P(h0),.HDMI_D1_P(h1),.HDMI_D2_P(h2));
// Test script overrides parameter defaults in generated simulation-only copies:
// ideal-pin READ_WAIT=2, BIST_WORDS=4096, HOLD=5000. Production RTL is untouched.
sdram_model memory_model(.clk(dut.sdram_clk),.reset(dut.reset),.ras_n(dut.ras_n),.cas_n(dut.cas_n),.we_n(dut.we_n),
 .addr(dut.sa),.ba(dut.ba),.dq_out(dut.dq_out),.dq_oe(dut.dq_oe),.dq_in(model_data));
system_sd_model card(.cs(cs),.sck(sck),.mosi(mosi),.miso(miso));
integer pixels=0,frames=0;reg checking=0;reg [7:0] r,g,b;reg [15:0] expected;
always @(posedge dut.pixel_clk) if(!dut.pixel_reset&&dut.dv[1]&&!dut.fr[2]) begin
 if(dut.x==0&&dut.y==0) checking=1;
 if(checking&&dut.x<640&&dut.y<480) begin
  r=8'(dut.x^dut.y);g=8'(dut.y);b=8'(dut.x);expected={r[7:3],g[7:2],b[7:3]};
  if(dut.fifo_empty||dut.p565!==expected) $fatal(1,"integrated image mismatch x=%0d y=%0d actual=%h expected=%h",dut.x,dut.y,dut.p565,expected);
  pixels=pixels+1;
 end
 if(checking&&dut.x==799&&dut.y==479) frames=frames+1;
end
task command(input [7:0] value);
 begin @(negedge dut.pixel_clk);rx=0;repeat(217) @(negedge dut.pixel_clk);
 for(integer k=0;k<8;k=k+1) begin rx=value[k];repeat(217) @(negedge dut.pixel_clk);end
 rx=1;repeat(300) @(negedge dut.pixel_clk);end
endtask
reg [31:0] before_nonzero;
initial begin
 #200;run_n=1;
 wait(dut.display_valid||dut.image_error!=0||dut.sd_error!=0);
 if(dut.image_error||dut.sd_error||!dut.bist_passed||dut.errors) $fatal(1,"integrated boot/CRC/file error");
 if(!dut.tone_muted||dut.audio_mode!=2) $fatal(1,"integrated boot must be silent");
 wait(frames==2);
 if(pixels!=614400||dut.underflow||dut.fb_fault) $fatal(1,"integrated frame count/underflow");
 command("U");before_nonzero=dut.dbg_nonzero_packets;
 repeat(500000) @(posedge dut.pixel_clk);
 if(dut.tone_muted||dut.dbg_nonzero_packets<=before_nonzero||dut.command_count!=1) $fatal(1,"integrated unmute");
 command("M");repeat(3000) @(posedge dut.pixel_clk);before_nonzero=dut.dbg_nonzero_packets;
 repeat(100000) @(posedge dut.pixel_clk);
 if(!dut.tone_muted||dut.dbg_nonzero_packets!=before_nonzero||dut.command_count!=2||dut.underflow) $fatal(1,"integrated mute");
 $display("PASS integrated SPI+CRC+FAT+BMP+SDRAM+FIFO+HDMI/control: two frames/614400 pixels, muted boot, unmute/mute; model wait2/BIST4096");$finish;
end
initial begin #3000000000;$fatal(1,"integrated timeout SD=%0d BMP=%0d",dut.sd_status,dut.image_status);end
endmodule

module dmz_p2_pll(input refclk,reset,output reg clk0_out=0,clk1_out=0,mem_clk=0,output sdram_clk,output reg locked=0);
always #20 clk0_out=~clk0_out;always #4 clk1_out=~clk1_out;always #10 mem_clk=~mem_clk;
assign sdram_clk=~mem_clk;
always @(posedge refclk) locked<=!reset;
endmodule

module EG_PHY_SDRAM_2M_32(input clk,ras_n,cas_n,we_n,input [10:0] addr,input [1:0] ba,inout [31:0] dq,input cs_n,cke,dm0,dm1,dm2,dm3);
assign dq=tb_system.dut.dq_oe?32'bz:tb_system.model_data;
endmodule
