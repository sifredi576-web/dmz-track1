`timescale 1ns/1ps
module tb_command_fifo;
reg src=0,dst=0,reset=1,push=0;reg [31:0] data=0;
always #20 src=~src;
initial begin #3;forever #10 dst=~dst;end
wire full,empty;wire [31:0] result;
dmz_pixel_fifo #(.AW(2)) dut(.wclk(src),.wreset(reset),.wpush(push),.wdata(data),.full(full),.used(),
 .rclk(dst),.rreset(reset),.rpop(!empty),.rdata(result),.empty(empty));
integer sent=0,received=0;
always @(posedge dst) if(!reset&&!empty) begin
 if(result!==32'(received)) $fatal(1,"Command order/data lost: want %0d got %0d",received,result);
 received=received+1;
end
initial begin
 repeat(5) @(negedge src);reset=0;
 repeat(100) begin
  repeat(3) begin @(negedge src);data=32'(sent);push=1;sent=sent+1;if(full) $fatal(1,"Unexpected full");end
  @(negedge src);push=0;repeat(8) @(negedge src);
 end
 repeat(15) @(negedge src);
 if(received!=300||!empty) $fatal(1,"Queue not drained");
 $display("PASS command FIFO: 300 commands in consecutive bursts, shifted clocks, exact order and data");$finish;
end
initial begin #2000000;$fatal(1,"Command queue timeout");end
endmodule
