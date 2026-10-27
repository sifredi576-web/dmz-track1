// Pixel-domain control; starts muted. R restarts the media pipeline, not PLL/UART.
module dmz_media_control #(parameter integer SECOND_CYCLES=25000000,
 parameter integer RESTART_CYCLES=25000)(
 input clk,reset,command_valid,input [7:0] command_byte,
 input mute_switch,continuous_switch,
 output wire tone_muted,output reg [1:0] mode,
 output reg [15:0] command_count,output reg [7:0] last_command,
 output wire restart,output reg beep_phase,
 output wire switch_mute,switch_continuous);
(* ASYNC_REG="TRUE" *) reg [1:0] ms,cs;
reg [24:0] second_count;
reg [15:0] restart_count;
assign switch_mute=ms[1];assign switch_continuous=cs[1];
assign restart=restart_count!=0;
assign tone_muted=restart||(mode==2)||(mode==3&&!beep_phase)||
 (mode==0&&(ms[1]||(!cs[1]&&!beep_phase)));
always @(posedge clk) begin
 if(reset) begin
  ms<=3;cs<=0;mode<=2;command_count<=0;last_command<=0;
  second_count<=0;beep_phase<=1;restart_count<=0;
 end else begin
  ms<={ms[0],mute_switch};cs<={cs[0],continuous_switch};
  if(second_count==SECOND_CYCLES-1) begin second_count<=0;beep_phase<=~beep_phase;end
  else second_count<=second_count+1'b1;
  if(restart_count!=0) restart_count<=restart_count-1'b1;
  if(command_valid) case(command_byte)
   "U","u","M","m","B","b","S","s","R","r","N","n","P","p","A","a","H","h":begin
    command_count<=command_count+1'b1;last_command<=command_byte;
    case(command_byte)
     "U","u":mode<=1;
     "M","m":mode<=2;
     "B","b":begin mode<=3;second_count<=0;beep_phase<=1;end
     "S","s":mode<=0;
     "R","r":begin mode<=2;restart_count<=RESTART_CYCLES;end
     default:begin end
    endcase
   end
   default:begin end
  endcase
 end
end
endmodule
