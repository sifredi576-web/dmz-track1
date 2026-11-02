// Pixel-domain control; starts muted. R restarts the media pipeline, not PLL/UART.
module dmz_media_control #(parameter integer DEFAULT_MODE=2,DEFAULT_WAV=0,SECOND_CYCLES=25000000,
 parameter integer RESTART_CYCLES=25000)(
 input clk,reset,command_valid,input [7:0] command_byte,
 input mute_switch,continuous_switch,
 output wire tone_muted,output reg [1:0] mode,
 output reg [15:0] command_count,output reg [7:0] last_command,
 output reg restart,output reg beep_phase,
 output wire switch_mute,switch_continuous,
 output reg wav_source,audio_paused,output reg [3:0] volume);
(* ASYNC_REG="TRUE" *) reg [1:0] ms,cs;
reg [24:0] second_count;
reg [15:0] restart_count;
assign switch_mute=ms[1];assign switch_continuous=cs[1];
assign tone_muted=restart||(mode==2)||(mode==3&&!beep_phase)||
 (mode==0&&(ms[1]||(!cs[1]&&!beep_phase)));
always @(posedge clk) begin
 if(reset) begin
  ms<=3;cs<=0;mode<=2'(DEFAULT_MODE);command_count<=0;last_command<=0;
  wav_source<=1'(DEFAULT_WAV);audio_paused<=0;volume<=8;
  second_count<=0;beep_phase<=1;restart_count<=0;restart<=0;
 end else begin
  ms<={ms[0],mute_switch};cs<={cs[0],continuous_switch};
  if(second_count==SECOND_CYCLES-1) begin second_count<=0;beep_phase<=~beep_phase;end
  else second_count<=second_count+1'b1;
  if(restart_count!=0) begin restart_count<=restart_count-1'b1;if(restart_count==1) restart<=0;end
  if(command_valid) case(command_byte)
   "U","u","M","m","B","b","S","s","R","r","N","n","P","p","A","a","H","h","W","w","J","j","T","t","K","k","L","l","+","-","Q","q","X","x","Z","z","[","]","C","c","D","F","f","E","e","V","v","I","i","O","o":begin
    command_count<=command_count+1'b1;last_command<=command_byte;
    case(command_byte)
     "U","u":mode<=1;
     "M","m":mode<=2;
     "B","b":begin mode<=3;wav_source<=0;audio_paused<=0;second_count<=0;beep_phase<=1;end
     "S","s":mode<=0;
     "R","r":begin mode<=2'(DEFAULT_MODE);wav_source<=1'(DEFAULT_WAV);audio_paused<=0;restart_count<=RESTART_CYCLES;restart<=1;end
     "W","w":begin wav_source<=1;mode<=1;audio_paused<=0;end
     "J","j":begin wav_source<=1;audio_paused<=0;end
     "T","t":begin wav_source<=0;mode<=1;audio_paused<=0;end
     "H","h","K","k":audio_paused<=1;
     "A","a","L","l":audio_paused<=0;
     "+":if(volume<8) volume<=volume+1'b1;
     "-":if(volume!=0) volume<=volume-1'b1;
     default:begin end
    endcase
   end
   default:if(command_byte[7:5]==3'b100||command_byte[7:4]==4'hc) begin
    command_count<=command_count+1'b1;last_command<=command_byte;
    if(command_byte[7:4]==4'hc) begin wav_source<=1;mode<=1;audio_paused<=0;end
   end
  endcase
 end
end
endmodule
