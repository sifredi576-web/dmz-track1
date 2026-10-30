module dmz_display_control #(parameter integer SECOND_CYCLES=25000000)(
 input clk,reset,frame_tick,command_valid,input [7:0] command_byte,
 output reg [3:0] brightness,contrast,output reg [23:0] time_bcd);
import dmz_contract_pkg::*;
reg [24:0] ticks;reg [3:0] wanted_b,wanted_c;
always @(posedge clk) begin
 if(reset) begin ticks<=0;time_bcd<=0;wanted_b<=4;wanted_c<=4;brightness<=4;contrast<=4;end
 else begin
  if(frame_tick) begin brightness<=wanted_b;contrast<=wanted_c;end
  if(command_valid) case(command_byte)
   CMD_BRIGHTNESS_DOWN:if(wanted_b!=0) wanted_b<=wanted_b-1'b1;
   CMD_BRIGHTNESS_UP:if(wanted_b<8) wanted_b<=wanted_b+1'b1;
   CMD_CONTRAST:wanted_c<=wanted_c==8?0:wanted_c+1'b1;
   CMD_PICTURE_DEFAULT:begin wanted_b<=4;wanted_c<=4;end
   default:begin end
  endcase
  if(ticks==SECOND_CYCLES-1) begin
   ticks<=0;
   if(time_bcd[3:0]!=9) time_bcd[3:0]<=time_bcd[3:0]+1'b1;
   else begin time_bcd[3:0]<=0;
    if(time_bcd[7:4]!=5) time_bcd[7:4]<=time_bcd[7:4]+1'b1;
    else begin time_bcd[7:4]<=0;
     if(time_bcd[11:8]!=9) time_bcd[11:8]<=time_bcd[11:8]+1'b1;
     else begin time_bcd[11:8]<=0;
      if(time_bcd[15:12]!=5) time_bcd[15:12]<=time_bcd[15:12]+1'b1;
      else begin time_bcd[15:12]<=0;
       if(time_bcd[19:16]!=9) time_bcd[19:16]<=time_bcd[19:16]+1'b1;
       else begin time_bcd[19:16]<=0;time_bcd[23:20]<=time_bcd[23:20]==9?0:time_bcd[23:20]+1'b1;end
      end
     end
    end
   end
  end else ticks<=ticks+1'b1;
 end
end
endmodule
