`timescale 1ns/1ps
module tb_sd;
reg clk=0,reset=1,start=0,miso=1;always #10 clk=~clk;
wire cs,sck,mosi,ready,initialized,done,bv;wire [8:0] bi;wire [7:0] bd,error,status;wire [31:0] sectors;
dmz_sd_reader dut(.clk(clk),.reset(reset),.read_start(start),.read_lba(32'd3),.ready(ready),.initialized(initialized),.read_done(done),.byte_valid(bv),.byte_index(bi),.byte_data(bd),.error(error),.status(status),.sectors_read(sectors),.sd_cs(cs),.sd_sck(sck),.sd_mosi(mosi),.sd_miso(miso));
reg [7:0] response[0:1023],command[0:5];
reg [7:0] receive_byte=0;
integer bits=0,cmdbytes=0,head=0,tail=0,outbit=7,received=0;
reg [31:0] argument;
reg [7:0] complete_byte;
task put(input [7:0] b);begin response[tail]=b;tail=tail+1;end endtask
always @(posedge sck) if(!cs) begin
 complete_byte={receive_byte[6:0],mosi};receive_byte=complete_byte;
 if(bits==7) begin
  bits=0;
  if(cmdbytes!=0 || complete_byte[7:6]==2'b01) begin
   command[cmdbytes]=complete_byte;
   if(cmdbytes==5) begin
    argument={command[1],command[2],command[3],command[4]};
    case(command[0][5:0])
    0:put(1);
    8:begin put(1);put(0);put(0);put(1);put(8'haa);end
    55:put(1);
    41:begin if(argument!=32'h40000000) $fatal(1,"ACMD41 HCS");put(0);end
    58:begin put(0);put(8'hc0);put(8'hff);put(8'h80);put(0);end
    17:begin
     if(argument!=3) $fatal(1,"SDHC LBA");put(0);put(255);put(8'hfe);
     for(integer i=0;i<512;i=i+1) put(8'(i)^8'ha5);
     put(255);put(255);
    end
    default:$fatal(1,"unknown command %0d",command[0][5:0]);
    endcase
    cmdbytes=0;
   end else cmdbytes=cmdbytes+1;
  end
 end else bits=bits+1;
end
always @(negedge sck or posedge cs) begin
 if(cs) begin miso<=1;head=0;tail=0;outbit=7;bits=0;cmdbytes=0;end
 else if(head<tail) begin
  miso<=response[head][outbit];if(outbit==0) begin head=head+1;outbit=7;end else outbit=outbit-1;
 end else miso<=1;
end
always @(posedge clk) if(bv) begin
 if(bi!=received || bd!=(8'(received)^8'ha5)) $fatal(1,"sector byte idx=%0d expectedidx=%0d data=%h",bi,received,bd);
 received=received+1;
end
initial begin #100;reset=0;wait(ready);@(negedge clk);start=1;@(negedge clk);start=0;wait(done||error!=0);if(error!=0||received!=512) $fatal(1,"SD failure code=%0d bytes=%0d",error,received);$display("PASS SD SPI initialization CMD0/8/55/41/58, SDHC addressing, CMD17 512 indexed bytes");$finish;end
initial begin #30000000;$fatal(1,"SD timeout state=%0d error=%0d",status,error);end
endmodule
