module dmz_scene_control #(parameter integer HALF_SECOND=12500000)(
 input clk,reset,frame_tick,emergency_switch,visual_hide_switch,command_valid,input [7:0] command_byte,
 output reg emergency,visual_enabled,output wire alert_on);
(* ASYNC_REG="TRUE" *) reg [1:0] es,vs;
reg soft_alert,soft_visual;reg [$clog2(HALF_SECOND*2)-1:0] tick;
assign alert_on=emergency&&tick<HALF_SECOND;
always @(posedge clk) begin
 if(reset) begin es<=0;vs<=0;soft_alert<=0;soft_visual<=1;emergency<=0;visual_enabled<=1;tick<=0;end
 else begin
  es<={es[0],emergency_switch};vs<={vs[0],visual_hide_switch};
  if(frame_tick) begin emergency<=es[1]||soft_alert;visual_enabled<=soft_visual&&!vs[1];end
  if(!emergency) tick<=0;else if(tick==HALF_SECOND*2-1) tick<=0;else tick<=tick+1'b1;
  if(command_valid) case(command_byte)
   "Q","q":soft_alert<=1;"X","x":soft_alert<=0;"Z","z":soft_visual<=~soft_visual;
   default:begin end
  endcase
 end
end
endmodule
