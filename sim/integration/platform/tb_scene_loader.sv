`timescale 1ns/1ps
module tb_scene_loader;
reg clk=0;always #5 clk=~clk;
reg reset=1,start=0,stream_error=0,bv=0,last=0;reg [7:0] data=0;
wire br,wr,busy,ready,commit;wire [19:0] addr;wire [7:0] outdata,error;
wire [6:0] resources;wire [5:0] pages;wire [7:0] widgets;wire [4:0] entry;wire [1:0] version;wire [20:0] payload_length;
integer cycle=0,writes=0,commits=0;
reg [7:0] course[0:3423];reg [7:0] exhibit[0:319];
wire accept_stage=cycle%7!=2;
dmz_scene_loader dut(clk,reset,start,stream_error,bv,last,data,br,accept_stage,wr,addr,outdata,
 busy,ready,commit,error,resources,pages,widgets,entry,version,payload_length);
always @(posedge clk) begin
 cycle<=cycle+1;
 if(!reset) begin
  if(wr) begin
   if(addr!=writes) $fatal(1,"nonsequential staging address");
   writes<=writes+1;
  end
  if(commit) commits<=commits+1;
 end
end
task run(input integer scenario,input integer length,input integer expected_error);
 integer i,n;reg [7:0] value;
 begin
  @(negedge clk);reset=1;bv=0;start=0;stream_error=0;
  repeat(3) @(negedge clk);reset=0;writes=0;commits=0;start=1;
  @(negedge clk);start=0;
  for(i=0;i<length;i=i+1) begin
   value=scenario==1?exhibit[i]:course[i%3424];
   if(scenario==2&&i==4)value=3;
   if(scenario==3&&i==16)value=65;
   if(scenario==4&&i==100)value=value^1;
   if(scenario==7&&i==20)value=1;
   data=value;bv=1;last=i==length-1;
   n=0;
   begin:handshake
    while(1) begin
     @(posedge clk);if(br) begin @(negedge clk);disable handshake;end
     if(!busy) begin @(negedge clk);disable handshake;end
     n=n+1;if(n>100)$fatal(1,"handshake stalled");
    end
   end
   bv=0;
   if(!busy) i=length;
   else begin repeat(i%3) @(negedge clk);end
  end
  repeat(4) @(negedge clk);
  if(error!=expected_error||ready!=(expected_error==0)||commits!=(expected_error==0?1:0))
   $fatal(1,"scenario=%0d error=%0d ready=%0d commits=%0d",scenario,error,ready,commits);
  if(expected_error==0 && writes!=length-32) $fatal(1,"payload byte count");
  if(scenario==1 && (resources!=5||pages!=2||widgets!=2)) $fatal(1,"exhibit counts");
  $display("PASS loader scenario %0d",scenario);
 end
endtask
initial begin
 $readmemh("sim/integration/platform/course.hex",course);$readmemh("sim/integration/platform/exhibit.hex",exhibit);
 run(0,3424,0);run(1,320,0);run(2,3424,3);run(3,3424,4);run(4,3424,7);
 run(5,100,2);run(6,3425,6);run(7,3424,5);
 @(negedge clk);reset=1;repeat(2)@(negedge clk);reset=0;start=1;
 @(negedge clk);start=0;stream_error=1;@(negedge clk);stream_error=0;
 if(error!=1||busy||ready)$fatal(1,"stream error");
 $display("PASS platform loader: both real configs, stalls, version, bounds, CRC, truncation, excess, reserved, I/O error");$finish;
end
initial begin #1000000;$fatal(1,"timeout");end
endmodule


