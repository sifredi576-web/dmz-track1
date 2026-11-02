// Restart matched audio only on completed display commit, or explicit mode entry.
// No match preserves background audio. SD restart/refill adds a finite audible gap.
module dmz_pair_control(input clk,reset,enable,input [31:0] swaps,
 input pair_found,input [3:0] pair_index,
 output reg request,output reg [3:0] index);
reg [31:0] last_swaps;
reg was_enabled;
reg pending;
reg [4:0] settle;
always @(posedge clk) begin
 if(reset) begin last_swaps<=0;was_enabled<=0;pending<=0;settle<=0;request<=0;index<=0;end
 else begin
  request<=0;last_swaps<=swaps;was_enabled<=enable;
  if(!enable) begin pending<=0;settle<=0;end
  else if(!was_enabled || swaps!=last_swaps) begin pending<=1;settle<=31;end
  else if(pending) begin
   if(settle!=0) settle<=settle-1'b1;
   else begin pending<=0;if(pair_found) begin request<=1;index<=pair_index;end end
  end
 end
end
endmodule

