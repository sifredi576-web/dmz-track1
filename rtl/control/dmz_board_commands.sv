// UART has priority. Queue a physical key so a coincident UART byte cannot lose it.
module dmz_board_commands(
 input clk,reset,key_valid,input [3:0] key_code,
 input audio_paused,tone_muted,uart_valid,input [7:0] uart_byte,
 output wire command_valid,output wire [7:0] command_byte);
import dmz_contract_pkg::*;
reg pending;reg [7:0] held;reg mapped;reg [7:0] decoded;
always @* begin
 mapped=1;decoded=0;
 case(key_code)
  0:decoded=CMD_NEXT;1:decoded=CMD_PREVIOUS;
  2:decoded=audio_paused?CMD_AUTO:CMD_PAUSE;3:decoded=tone_muted?CMD_UNMUTE:CMD_MUTE;
  4:decoded=CMD_VOLUME_DOWN;5:decoded=CMD_VOLUME_UP;6:decoded=CMD_AUTO;7:decoded=CMD_RELOAD;
  8:decoded=CMD_AUDIO_PAUSE;9:decoded=CMD_AUDIO_RESUME;10:decoded=CMD_WAV;
  11:decoded=CMD_MENU;12:decoded=CMD_CONFIRM;13:decoded=CMD_CATEGORY;14:decoded=CMD_MENU_PREVIOUS;15:decoded=CMD_MENU_NEXT;
  default:mapped=0;
 endcase
end
assign command_valid=uart_valid||pending;
assign command_byte=uart_valid?uart_byte:held;
always @(posedge clk) begin
 if(reset) begin pending<=0;held<=0;end
 else begin
  if(pending&&!uart_valid) pending<=0;
  if(key_valid&&mapped) begin pending<=1;held<=decoded;end
 end
end
endmodule
