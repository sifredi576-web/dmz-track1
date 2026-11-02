// Generic semantic controller. Descriptor inputs belong to the committed page.
// No course names, directory indexes, or image pixel values participate in logic.
module dmz_ui_controller #(parameter COMPACT_NEIGHBORS=0)(input clk,reset,config_ready,input [4:0] entry_page,
 input [5:0] page_count,input [6:0] resource_count,
 input event_valid,input [3:0] event_action,input [7:0] external_page,
 input restore_focus_valid,input [2:0] restore_focus,
 input [3:0] widget_count,input [7:0] visible,enabled,
 input [255:0] neighbors,
 input [3:0] widget_action,input [7:0] widget_target,widget_arg,
 input [7:0] back_page,page_audio,input quiz_valid,input [2:0] quiz_id,
 input [1:0] correct_option,
 output reg page_request,output reg [4:0] requested_page,input page_accept,page_loaded,
 output reg audio_request,output reg [5:0] requested_audio,input audio_accept,
 output reg control_request,output reg [1:0] control_action,output reg [7:0] control_arg,input control_accept,
 output reg [4:0] current_page,output reg [2:0] focus,
 output reg [7:0] answered,correct,output reg [3:0] score,
 output wire choice_valid,output wire [1:0] selected_choice,
 output reg notice_request,output reg [1:0] notice_priority,
 output reg notice_exit,output reg [7:0] error,output wire busy);
reg configured,waiting,moving;reg [2:0] candidate;reg [1:0] direction;
reg [3:0] attempts;reg [7:0] choices_valid;reg [15:0] choices;
wire [7:0] available=visible&enabled;
wire [3:0] compact_neighbor=neighbors[{candidate,direction,2'b00}+:4];
wire [7:0] neighbor=COMPACT_NEIGHBORS?(compact_neighbor[3]?8'hff:{5'd0,compact_neighbor[2:0]}):neighbors[{candidate,direction,3'b000}+:8];
assign busy=waiting||moving||page_request||audio_request||control_request;
assign choice_valid=quiz_valid&&choices_valid[quiz_id];
assign selected_choice=choices[{quiz_id,1'b0}+:2];
task jump(input [7:0] target);
 begin
  if({1'b0,target}< {3'd0,page_count}) begin requested_page<=target[4:0];page_request<=1;waiting<=1;end
  else error<=1;
 end
endtask
task play(input [7:0] target);
 begin
  if({1'b0,target}<{2'd0,resource_count})begin requested_audio<=target[5:0];audio_request<=1;end
  else error<=2;
 end
endtask
integer i;reg first;
always @(posedge clk) begin
 if(reset||!config_ready)begin
  configured<=0;waiting<=0;moving<=0;candidate<=0;direction<=0;attempts<=0;
  page_request<=0;requested_page<=0;audio_request<=0;requested_audio<=0;current_page<=0;focus<=0;
  control_request<=0;control_action<=0;control_arg<=0;
  answered<=0;correct<=0;score<=0;choices_valid<=0;choices<=0;
  notice_request<=0;notice_priority<=0;notice_exit<=0;error<=0;
 end else begin
  notice_request<=0;notice_exit<=0;
  // Notice dispatch must not be lost while a page/resource request is waiting.
  // The separate notice manager owns preemption/cancellation and context restore.
  if(event_valid&&(event_action==10||event_action==11))begin
   notice_request<=1;notice_priority<=event_action==11?2'd2:2'd1;
  end
  if(event_valid&&event_action==12)notice_exit<=1;
  if(page_request&&page_accept)page_request<=0;
  if(audio_request&&audio_accept)audio_request<=0;
  if(control_request&&control_accept)control_request<=0;
  if(!configured)begin configured<=1;jump({3'd0,entry_page});end
  else if(waiting&&page_loaded&&!page_request)begin
   current_page<=requested_page;waiting<=0;focus<=0;error<=0;first=1;
   for(i=0;i<8;i=i+1)if(i<widget_count&&available[i]&&first)begin focus<=3'(i);first=0;end
   if(restore_focus_valid&&{1'b0,restore_focus}<widget_count&&available[restore_focus])focus<=restore_focus;
   if(page_audio!=255)play(page_audio);
  end else if(moving)begin
   if(neighbor==255||neighbor>7||{1'b0,neighbor}>= {5'd0,widget_count})begin moving<=0;error<=3;end
   else if(available[neighbor[2:0]])begin focus<=neighbor[2:0];moving<=0;end
   else if(attempts==7)begin moving<=0;error<=3;end
   else begin candidate<=neighbor[2:0];attempts<=attempts+1'b1;end
  end else if(event_valid&&!busy&&(event_action<10||event_action==13))begin
   error<=0;
   case(event_action)
    1,2,3,4:begin
     // Descriptor order is left, right, up, down.
     direction<=event_action==1?2'd2:event_action==2?2'd3:event_action==3?2'd0:2'd1;
     candidate<=focus;attempts<=0;moving<=1;
    end
    5:if({1'b0,focus}>=widget_count||!available[focus])error<=4;
      else case(widget_action)
       1:if(quiz_valid&&!answered[quiz_id])error<=5;else jump(widget_target);
       2:play(widget_target);
       3:if(!quiz_valid||widget_arg>3)error<=6;
         else if(answered[quiz_id])error<=7;
         else begin choices_valid[quiz_id]<=1;choices[{quiz_id,1'b0}+:2]<=widget_arg[1:0];end
       4:jump(back_page);
       5:begin answered<=0;correct<=0;score<=0;choices_valid<=0;jump({3'd0,entry_page});end
       6,7,8:begin control_request<=1;control_action<=2'(widget_action-6);control_arg<=widget_arg;end
       9:if(!quiz_valid||!choice_valid)error<=5;
         else if({1'b0,widget_target}>={3'd0,page_count})error<=1;
         else begin
          if(!answered[quiz_id])begin
           answered[quiz_id]<=1;correct[quiz_id]<=selected_choice==correct_option;
           if(selected_choice==correct_option)score<=score+1'b1;
          end
          jump(widget_target);
         end
       default:error<=8;
      endcase
    13:jump(external_page);
    6:jump(back_page);
    7:jump({3'd0,entry_page});
    8:play(page_audio);
    default:error<=8;
   endcase
  end
 end
end
endmodule
