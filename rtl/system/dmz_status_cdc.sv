// Bundled-data request/acknowledge snapshot. Source data is held until the next
// request; the destination waits two additional cycles after synchronizing ack.
module dmz_status_cdc #(parameter integer WIDTH=256,INTERVAL=25000)(
 input src_clk,src_reset,input [WIDTH-1:0] src_data,
 input dst_clk,dst_reset,output reg [WIDTH-1:0] dst_data);
reg request,ack;
(* ASYNC_REG="TRUE" *) reg [1:0] req_sync,ack_sync;
reg [WIDTH-1:0] held;
reg [15:0] interval_count;
reg [1:0] settle;
reg waiting;
always @(posedge src_clk) begin
 if(src_reset) begin req_sync<=0;ack<=0;held<=0;end
 else begin
  req_sync<={req_sync[0],request};
  if(req_sync[1]!=ack) begin held<=src_data;ack<=req_sync[1];end
 end
end
always @(posedge dst_clk) begin
 if(dst_reset) begin request<=0;ack_sync<=0;dst_data<=0;interval_count<=0;settle<=0;waiting<=0;end
 else begin
  ack_sync<={ack_sync[0],ack};
  if(!waiting) begin
   if(interval_count==0) begin request<=~request;waiting<=1;settle<=0;end
   else interval_count<=interval_count-1'b1;
  end else if(ack_sync[1]==request) begin
   if(settle==2) begin dst_data<=held;waiting<=0;interval_count<=INTERVAL-1;end
   else settle<=settle+1'b1;
  end
 end
end
endmodule
