`timescale 1ns/1ps
module tb_trigger;
reg clk=0;always #5 clk=~clk;reg reset=1,ce=0,ft=0,trig=1;reg [15:0] sample=0;
wire ink,shade;wire [23:0] color;wire [4:0] ll,lr,pl,pr;
dmz_audio_visual #(.PIPELINED(1),.TRIGGER_SUPPORT(1)) dut(.clk(clk),.reset(reset),.sample_ce(ce),.frame_tick(ft),.enabled(1'b1),.trigger_enabled(trig),.left(sample),.right(sample),.x(10'd100),.y(10'd200),.ink(ink),.shade(shade),.color(color),.level_l(ll),.level_r(lr),.peak_l(pl),.peak_r(pr));
reg [11:0] reference_page[0:127];
reg periodic_test=1;integer fallback_starts=0;
integer n,starts=0,swaps=0;reg old_front=0;
always @(posedge clk)if(!reset)begin
 if(dut.trigger_start&&dut.trigger_wait==4095)fallback_starts++;
 if(dut.take_sample&&trig&&periodic_test)begin
  if(starts<=1)reference_page[dut.wp]=sample[15:4];
  else if(reference_page[dut.wp]!==sample[15:4])$fatal(1,"Phase moved across captures at point %0d",dut.wp);
 end
 if(dut.trigger_start&&dut.trigger_wait!=4095)begin
  if($signed(sample)<0||$signed(sample)>1600)$fatal(1,"Not rising zero crossing");starts++;
 end
 if(dut.front!=old_front)begin swaps++;old_front=dut.front;end
end
initial begin
 repeat(4)@(negedge clk);reset=0;ce=1;
 for(n=0;n<12000;n++)begin
  sample=16'($rtoi(12000*$sin(6.28318530718*(n+17)/48.0)));ft=n%800==799;@(negedge clk);
 end
 if(starts<5||swaps<5)$fatal(1,"No repeat acquisitions");
 periodic_test=0;sample=0;ft=0;
 for(n=0;n<6500;n++)begin ft=n%800==799;@(negedge clk);end
 if(dut.capturing==0&&dut.trigger_wait==4095)$fatal(1,"AUTO fallback stalled");
 if(fallback_starts==0)$fatal(1,"Silence did not auto-trigger");
 trig=0;for(n=0;n<2500;n++)begin ft=n%800==799;@(negedge clk);end
 if(dut.wp==0&&!dut.page_ready)$fatal(1,"Free capture stopped");
 $display("PASS rising-zero trigger, repeated acquisitions=%0d frame swaps=%0d, silence AUTO fallback and free-running toggle",starts,swaps);$finish;
end
endmodule
