// Read-priority burst arbiter + RGB565 double frame buffers + frame-boundary mailbox.
// Buffer 0 byte base 0; buffer 1 byte base 0x100000 (262144 32-bit words).
module dmz_image_framebuffer(
 input wire clk,reset,input wire bist_done,bist_passed,
 input wire frame_toggle,
 input wire load_valid,input wire [17:0] load_addr,input wire [255:0] load_data,input wire load_last,
 output wire load_ready,output reg load_ack,
 output wire req_valid,req_write,output wire [20:0] req_addr,output reg [255:0] req_wdata,
 input wire req_ready,rsp_valid,input wire [255:0] rsp_rdata,
 input wire [11:0] fifo_used,input wire fifo_full,
 output wire fifo_push,output wire [31:0] fifo_data,output wire fifo_reset,
 output reg display_valid,output reg front_bank,output reg [31:0] swaps,
 output reg [31:0] frames_written,output reg [31:0] dma_reads,output reg fault);
localparam IDLE=0,WAIT_READ=1,DRAIN=2,WAIT_WRITE=3;
reg [1:0] state;
(* ASYNC_REG="TRUE" *) reg ft1,ft2;
reg last_frame,frame_pending;
reg [5:0] flush;
reg [17:0] rd_addr,wr_addr;
reg [8:0] wr_x,wr_y;
reg back_ready;reg transition_active;reg [8:0] wipe_words,rd_x;
wire read_bank=(transition_active&&rd_x<wipe_words)?~front_bank:front_bank;
reg [7:0] swap_timer;
reg [2:0] beat;
reg [255:0] read_buffer;
wire video_req=display_valid && rd_addr<153600 && fifo_used<=2032;
wire draw_req=load_valid&&!back_ready;
reg transaction_last;
assign load_ready=req_valid&&req_ready&&!video_req;
wire enabled=bist_done&&bist_passed&&!fault;
assign req_valid=enabled && state==IDLE && flush==0 && !frame_pending && (video_req||draw_req);
assign req_write=!video_req;
assign req_addr=video_req ? {2'b00,read_bank,rd_addr} : {2'b00,~front_bank,load_addr};
assign fifo_push=state==DRAIN && !fifo_full && flush==0;
assign fifo_data=read_buffer[beat*32+:32];
assign fifo_reset=reset || flush!=0 || !display_valid;
always @* req_wdata=load_data;
always @(posedge clk)if(!reset&&state==WAIT_READ&&rsp_valid)read_buffer<=rsp_rdata;
always @(posedge clk) begin
 if(reset) begin
  transition_active<=0;wipe_words<=0;rd_x<=0;state<=IDLE;ft1<=0;ft2<=0;last_frame<=0;frame_pending<=0;flush<=0;rd_addr<=153600;wr_addr<=0;
  wr_x<=0;wr_y<=0;back_ready<=0;swap_timer<=0;beat<=0;display_valid<=0;front_bank<=0;
  swaps<=0;frames_written<=0;dma_reads<=0;fault<=0;load_ack<=0;transaction_last<=0;
 end else begin
  load_ack<=0;
  ft1<=frame_toggle;ft2<=ft1;
  if(ft2!=last_frame) begin last_frame<=ft2;frame_pending<=1;end
  if(flush!=0) flush<=flush-1'b1;
  if(state==IDLE && frame_pending) begin
   frame_pending<=0;
   if(enabled) begin
    flush<=31;rd_addr<=0;rd_x<=0;
    if(back_ready) begin
     if(!display_valid||(transition_active&&wipe_words>=320)) begin
      transition_active<=0;wipe_words<=0;swap_timer<=0;
      front_bank<=~front_bank;display_valid<=1;back_ready<=0;swaps<=swaps+1'b1;
      wr_addr<=0;wr_x<=0;wr_y<=0;
     end else if(!transition_active) begin transition_active<=1;wipe_words<=16;end
     else wipe_words<=wipe_words+16;
    end
   end
  end else case(state)
  IDLE:if(req_valid&&req_ready) begin if(video_req) state<=WAIT_READ;else begin state<=WAIT_WRITE;transaction_last<=load_last;end end
  WAIT_READ:if(rsp_valid) begin beat<=0;state<=DRAIN;rd_addr<=rd_addr+8;rd_x<=rd_x==312?0:rd_x+8;dma_reads<=dma_reads+1'b1;end
  DRAIN:if(!fifo_full) begin if(beat==7) state<=IDLE;else beat<=beat+1'b1;end
  WAIT_WRITE:if(rsp_valid) begin
   state<=IDLE;load_ack<=1;
   if(transaction_last) begin back_ready<=1;frames_written<=frames_written+1'b1;end
  end
  default:begin fault<=1;state<=IDLE;end
  endcase
 end
end
endmodule
