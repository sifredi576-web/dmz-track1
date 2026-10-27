`timescale 1ns/1ps
module system_sd_model(input cs,sck,mosi,output reg miso=1);
`include "sim/system/media_fixture.svh"
reg [7:0] response[0:1023],command[0:5];
reg [7:0] receive_byte=0;
integer bits=0,cmdbytes=0,head=0,tail=0,outbit=7,received=0;
reg [31:0] argument;
reg [7:0] complete_byte;
reg [15:0] crc;
function automatic [15:0] crc_byte(input [15:0] old,input [7:0] b);
 reg [15:0] c;
 begin c=old;for(integer k=7;k>=0;k=k-1) c=((c<<1)^((c[15]^b[k])?16'h1021:16'd0));crc_byte=c;end
endfunction
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
    0:if(!$test$plusargs("noresponse")) put(1);
    8:if($test$plusargs("v1")) put(5);else begin put(1);put(0);put(0);put(1);put(8'haa);end
    55:put(1);
    41:begin if(argument!=($test$plusargs("v1")?32'd0:32'h40000000)) $fatal(1,"ACMD41 HCS");put(0);end
    58:begin put(0);put(($test$plusargs("sdsc")||$test$plusargs("v1"))?8'h80:8'hc0);put(8'hff);put(8'h80);put(0);end
    16:begin if(argument!=512) $fatal(1,"SDSC block length");put(0);end
    17:begin
     
     if($test$plusargs("readerror")) put(4);
     else if($test$plusargs("badtoken")) begin put(0);put(8'h0b);end
     else begin
      put(0);put(255);put(8'hfe);crc=0;
      for(integer i=0;i<512;i=i+1) begin put(disk(argument,i));crc=crc_byte(crc,disk(argument,i));end
      put(crc[15:8]);put(crc[7:0]^($test$plusargs("badcrc")?8'd1:8'd0));
     end
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

endmodule
