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
import dmz_contract_pkg::*;
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
   CMD_UNMUTE,CMD_UNMUTE_LOWER,CMD_MUTE,CMD_MUTE_LOWER,CMD_BEEP,CMD_BEEP_LOWER,CMD_SWITCHES,CMD_SWITCHES_LOWER,CMD_RELOAD,CMD_RELOAD_LOWER,CMD_NEXT,CMD_NEXT_LOWER,CMD_PREVIOUS,CMD_PREVIOUS_LOWER,CMD_AUTO,CMD_AUTO_LOWER,CMD_PAUSE,CMD_PAUSE_LOWER,CMD_WAV,CMD_WAV_LOWER,CMD_TONE,CMD_TONE_LOWER,CMD_AUDIO_PAUSE,CMD_AUDIO_PAUSE_LOWER,CMD_AUDIO_RESUME,CMD_AUDIO_RESUME_LOWER,CMD_VOLUME_UP,CMD_VOLUME_DOWN,CMD_EMERGENCY_ON,CMD_EMERGENCY_ON_LOWER,CMD_EMERGENCY_OFF,CMD_EMERGENCY_OFF_LOWER,CMD_VISUAL_TOGGLE,CMD_VISUAL_TOGGLE_LOWER,CMD_BRIGHTNESS_DOWN,CMD_BRIGHTNESS_UP,CMD_CONTRAST,CMD_PICTURE_DEFAULT,CMD_MENU,CMD_MENU_LOWER,CMD_CONFIRM,CMD_CONFIRM_LOWER,CMD_CATEGORY,CMD_CATEGORY_LOWER,CMD_MENU_PREVIOUS,CMD_MENU_PREVIOUS_LOWER,CMD_MENU_NEXT,CMD_MENU_NEXT_LOWER:begin
    command_count<=command_count+1'b1;last_command<=command_byte;
    case(command_byte)
     CMD_UNMUTE,CMD_UNMUTE_LOWER:mode<=1;
     CMD_MUTE,CMD_MUTE_LOWER:mode<=2;
     CMD_BEEP,CMD_BEEP_LOWER:begin mode<=3;wav_source<=0;audio_paused<=0;second_count<=0;beep_phase<=1;end
     CMD_SWITCHES,CMD_SWITCHES_LOWER:mode<=0;
     CMD_RELOAD,CMD_RELOAD_LOWER:begin mode<=2'(DEFAULT_MODE);wav_source<=1'(DEFAULT_WAV);audio_paused<=0;restart_count<=RESTART_CYCLES;restart<=1;end
     CMD_WAV,CMD_WAV_LOWER:begin wav_source<=1;mode<=1;audio_paused<=0;end
     CMD_TONE,CMD_TONE_LOWER:begin wav_source<=0;mode<=1;audio_paused<=0;end
     CMD_PAUSE,CMD_PAUSE_LOWER,CMD_AUDIO_PAUSE,CMD_AUDIO_PAUSE_LOWER:audio_paused<=1;
     CMD_AUTO,CMD_AUTO_LOWER,CMD_AUDIO_RESUME,CMD_AUDIO_RESUME_LOWER:audio_paused<=0;
     CMD_VOLUME_UP:if(volume<8) volume<=volume+1'b1;
     CMD_VOLUME_DOWN:if(volume!=0) volume<=volume-1'b1;
     default:begin end
    endcase
   end
   default:if(command_byte[7:5]==IMAGE_COMMAND_PREFIX||command_byte[7:4]==AUDIO_COMMAND_PREFIX) begin
    command_count<=command_count+1'b1;last_command<=command_byte;
    if(command_byte[7:4]==AUDIO_COMMAND_PREFIX) begin wav_source<=1;mode<=1;audio_paused<=0;end
   end
  endcase
 end
end
endmodule
