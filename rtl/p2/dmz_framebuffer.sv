// Read-priority burst arbiter + RGB565 double frame buffers + frame-boundary mailbox.
// Buffer 0 byte base 0; buffer 1 byte base 0x100000 (262144 32-bit words).
module dmz_framebuffer #(parameter integer SWAP_FRAMES=60)(
 input wire clk,reset,input wire bist_done,bist_passed,
 input wire frame_toggle,
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
reg back_ready;
reg [7:0] swap_timer;
reg [2:0] beat;
reg [255:0] read_buffer;
wire video_req=display_valid && rd_addr<153600 && fifo_used<=2032;
wire draw_req=!back_ready;
wire enabled=bist_done&&bist_passed&&!fault;
assign req_valid=enabled && state==IDLE && flush==0 && !frame_pending && (video_req||draw_req);
assign req_write=!video_req;
assign req_addr=video_req ? {2'b00,front_bank,rd_addr} : {2'b00,~front_bank,wr_addr};
assign fifo_push=state==DRAIN && !fifo_full && flush==0;
assign fifo_data=read_buffer[beat*32+:32];
assign fifo_reset=reset || flush!=0 || !display_valid;
function automatic [15:0] pixel(input [9:0] x,input [8:0] y,input [31:0] f);
 reg [15:0] color;
 begin
 if(x<80) color=16'hffff;else if(x<160) color=16'hffe0;else if(x<240) color=16'h07ff;
 else if(x<320) color=16'h07e0;else if(x<400) color=16'hf81f;else if(x<480) color=16'hf800;
 else if(x<560) color=16'h001f;else color=0;
 if(f[0]) color=~color;
 if(y>=400) color={x[9:5],y[8:3],x[8:4]};
 if(x<4 || x>=636 || y<4 || y>=476) color=16'hffff;
 if(y>=200 && y<240 && x[9:5]==f[4:0]) color=16'hffff;
 pixel=color;
 end
endfunction
integer j;
always @* for(j=0;j<8;j=j+1)
 req_wdata[j*32+:32]={pixel({wr_x,1'b0}+10'(2*j+1),wr_y,frames_written),pixel({wr_x,1'b0}+10'(2*j),wr_y,frames_written)};
always @(posedge clk) begin
 if(reset) begin
  state<=IDLE;ft1<=0;ft2<=0;last_frame<=0;frame_pending<=0;flush<=0;rd_addr<=153600;wr_addr<=0;
  wr_x<=0;wr_y<=0;back_ready<=0;swap_timer<=0;beat<=0;read_buffer<=0;display_valid<=0;front_bank<=0;
  swaps<=0;frames_written<=0;dma_reads<=0;fault<=0;
 end else begin
  ft1<=frame_toggle;ft2<=ft1;
  if(ft2!=last_frame) begin last_frame<=ft2;frame_pending<=1;end
  if(flush!=0) flush<=flush-1'b1;
  if(state==IDLE && frame_pending) begin
   frame_pending<=0;
   if(enabled) begin
    flush<=31;rd_addr<=0;
    if(swap_timer<SWAP_FRAMES-1) swap_timer<=swap_timer+1'b1;
    if(back_ready && (!display_valid || swap_timer>=SWAP_FRAMES-1)) begin
     swap_timer<=0;
     front_bank<=~front_bank;display_valid<=1;back_ready<=0;swaps<=swaps+1'b1;
     wr_addr<=0;wr_x<=0;wr_y<=0;
    end
   end
  end else case(state)
  IDLE:if(req_valid&&req_ready) begin if(video_req) state<=WAIT_READ;else state<=WAIT_WRITE;end
  WAIT_READ:if(rsp_valid) begin read_buffer<=rsp_rdata;beat<=0;state<=DRAIN;rd_addr<=rd_addr+8;dma_reads<=dma_reads+1'b1;end
  DRAIN:if(!fifo_full) begin if(beat==7) state<=IDLE;else beat<=beat+1'b1;end
  WAIT_WRITE:if(rsp_valid) begin
   state<=IDLE;
   if(wr_addr==153592) begin back_ready<=1;frames_written<=frames_written+1'b1;end
   else begin
    wr_addr<=wr_addr+8;
    if(wr_x==312) begin wr_x<=0;wr_y<=wr_y+1'b1;end else wr_x<=wr_x+8;
   end
  end
  default:begin fault<=1;state<=IDLE;end
  endcase
 end
end
endmodule
