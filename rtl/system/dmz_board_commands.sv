// UART has priority. Queue a physical key so a coincident UART byte cannot lose it.
module dmz_board_commands(
 input clk,reset,key_valid,input [3:0] key_code,
 input audio_paused,tone_muted,uart_valid,input [7:0] uart_byte,
 output wire command_valid,output wire [7:0] command_byte);
reg pending;reg [7:0] held;reg mapped;reg [7:0] decoded;
always @* begin
 mapped=1;decoded=0;
 case(key_code)
  0:decoded="N";1:decoded="P";
  2:decoded=audio_paused?"A":"H";3:decoded=tone_muted?"U":"M";
  4:decoded="-";5:decoded="+";6:decoded="A";7:decoded="R";
  8:decoded="K";9:decoded="L";10:decoded="W";
  11:decoded="F";12:decoded="E";13:decoded="V";14:decoded="I";15:decoded="O";
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
