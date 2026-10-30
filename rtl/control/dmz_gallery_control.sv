// Dwell starts on frame commit; never start another load before that commit.
// N/P select manually and pause auto; A resumes, H pauses. One latest command queues.
module dmz_gallery_control #(parameter integer HOLD_CYCLES=250000000)(
 input clk,reset,command_valid,input [7:0] command_byte,
 input catalog_ready,input [5:0] file_count,input [4:0] selected_index,
 input loader_busy,input [7:0] loader_error,input [31:0] swaps,
 output reg select_request,output reg [4:0] requested_index,
 output reg autoplay,loading,output reg [4:0] displayed_index);
import dmz_contract_pkg::*;
reg [31:0] last_swaps,timer;
reg [1:0] pending;
reg [4:0] direct_index;
always @(posedge clk) begin
 if(reset) begin last_swaps<=0;timer<=0;pending<=0;direct_index<=0;select_request<=0;requested_index<=0;autoplay<=1;loading<=1;displayed_index<=0;end
 else begin
  select_request<=0;
  if(swaps!=last_swaps) begin last_swaps<=swaps;displayed_index<=selected_index;loading<=0;timer<=0;end
  else if(!loader_busy&&loader_error!=0&&!select_request) begin loading<=0;if(timer<HOLD_CYCLES-1) timer<=timer+1'b1;end
  else if(!loading&&autoplay&&timer<HOLD_CYCLES-1) timer<=timer+1'b1;
  if(catalog_ready&&!loader_busy&&!loading&&!select_request &&
    (pending!=0||(autoplay&&file_count>1&&timer==HOLD_CYCLES-1))) begin
   if(pending==3) requested_index<=direct_index;
   else if(pending==2) requested_index<=selected_index==0?5'(file_count-1'b1):selected_index-1'b1;
   else requested_index<=({1'b0,selected_index}+1'b1>=file_count)?5'd0:selected_index+1'b1;
   select_request<=1;loading<=1;pending<=0;timer<=0;
  end
  if(command_valid) case(command_byte)
   CMD_NEXT,CMD_NEXT_LOWER:begin pending<=1;autoplay<=0;end
   CMD_PREVIOUS,CMD_PREVIOUS_LOWER:begin pending<=2;autoplay<=0;end
   CMD_AUTO,CMD_AUTO_LOWER:begin autoplay<=1;timer<=0;end
   CMD_PAUSE,CMD_PAUSE_LOWER,CMD_MENU,CMD_MENU_LOWER:begin autoplay<=0;pending<=0;timer<=0;end
   default:if(command_byte[7:5]==IMAGE_COMMAND_PREFIX&&{1'b0,command_byte[4:0]}<file_count) begin
    pending<=3;direct_index<=command_byte[4:0];autoplay<=0;
   end
  endcase
 end
end
endmodule
