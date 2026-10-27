// DMZ P2, 50 MHz SDR SDRAM controller. 32-bit words, aligned BL8 requests.
// Geometry: 4 banks x 2048 rows x 256 columns. CL3, sequential, auto-precharge.
module dmz_sdram_ctrl #(parameter integer INIT_CYCLES=10000,REFRESH_CYCLES=390,READ_WAIT_CYCLES=1)(
 input wire clk,reset,
 input wire req_valid,req_write,input wire [20:0] req_addr,input wire [255:0] req_wdata,
 output wire req_ready,output reg rsp_valid,output reg [255:0] rsp_rdata,
 output reg init_done,output reg [31:0] refresh_count,
 output reg ras_n,cas_n,we_n,output reg [10:0] addr,output reg [1:0] ba,
 output wire [31:0] dq_out,output wire dq_oe,input wire [31:0] dq_in);
localparam POWER=0,IPRE=1,IPWAIT=2,IREF=3,IRWAIT=4,MRS=5,MRWAIT=6,
 IDLE=7,ACT=8,RCD=9,READ=10,RWAIT=11,RDATA=12,WRITE=13,WDATA=14,RECOVER=15,REFRESH=16,RFWAIT=17;
// Capture SDRAM return data on the falling controller edge, then consume
// it on the next rising edge. This gives package clock/data pads a full cycle.
reg [31:0] dq_capture;
always @(negedge clk) dq_capture<=dq_in;
reg [4:0] state;
reg [15:0] wait_count,refresh_age;
reg [3:0] init_refresh;
reg [2:0] beat;
reg [20:0] transaction_addr;
reg transaction_write;
reg [255:0] write_data;
assign req_ready=(state==IDLE && refresh_age<REFRESH_CYCLES);
assign dq_oe=(state==WRITE || state==WDATA);
// Shift the BL8 payload instead of putting an 8-way mux on package DQ.
assign dq_out=write_data[31:0];
always @* begin
 ras_n=1;cas_n=1;we_n=1;addr=0;ba=transaction_addr[20:19];
 case(state)
 IPRE:begin ras_n=0;we_n=0;addr[10]=1;end
 IREF,REFRESH:begin ras_n=0;cas_n=0;end
 MRS:begin ras_n=0;cas_n=0;we_n=0;ba=0;addr=11'h033;end
 ACT:begin ras_n=0;addr=transaction_addr[18:8];end
 READ:begin cas_n=0;addr={3'b100,transaction_addr[7:0]};end
 WRITE:begin cas_n=0;we_n=0;addr={3'b100,transaction_addr[7:0]};end
 default:begin end
 endcase
end
always @(posedge clk) begin
 if(reset) begin
  state<=POWER;wait_count<=INIT_CYCLES-1;refresh_age<=0;init_refresh<=0;
  init_done<=0;refresh_count<=0;rsp_valid<=0;rsp_rdata<=0;beat<=0;
  transaction_addr<=0;transaction_write<=0;write_data<=0;
 end else begin
  rsp_valid<=0;
  if(init_done && refresh_age!=65535) refresh_age<=refresh_age+1'b1;
  case(state)
  POWER:if(wait_count==0) state<=IPRE;else wait_count<=wait_count-1'b1;
  IPRE:begin state<=IPWAIT;wait_count<=1;end
  IPWAIT:if(wait_count==0) state<=IREF;else wait_count<=wait_count-1'b1;
  IREF:begin state<=IRWAIT;wait_count<=3;init_refresh<=init_refresh+1'b1;end
  IRWAIT:if(wait_count==0) begin if(init_refresh==8) state<=MRS;else state<=IREF;end else wait_count<=wait_count-1'b1;
  MRS:begin state<=MRWAIT;wait_count<=1;end
  MRWAIT:if(wait_count==0) begin state<=IDLE;init_done<=1;refresh_age<=0;end else wait_count<=wait_count-1'b1;
  IDLE:begin
   if(refresh_age>=REFRESH_CYCLES) state<=REFRESH;
   else if(req_valid) begin transaction_addr<=req_addr;transaction_write<=req_write;write_data<=req_wdata;state<=ACT;end
  end
  ACT:begin state<=RCD;wait_count<=1;end
  RCD:if(wait_count==0) begin beat<=0;if(transaction_write) state<=WRITE;else state<=READ;end else wait_count<=wait_count-1'b1;
  READ:begin state<=RWAIT;wait_count<=READ_WAIT_CYCLES;end
  RWAIT:if(wait_count==0) state<=RDATA;else wait_count<=wait_count-1'b1;
  RDATA:begin
   rsp_rdata[beat*32+:32]<=dq_capture;
   if(beat==7) begin state<=RECOVER;wait_count<=3;end else beat<=beat+1'b1;
  end
  WRITE:begin state<=WDATA;beat<=1;write_data<={32'd0,write_data[255:32]};end
  WDATA:begin write_data<={32'd0,write_data[255:32]};if(beat==7) begin state<=RECOVER;wait_count<=3;end else beat<=beat+1'b1;end
  RECOVER:if(wait_count==0) begin state<=IDLE;rsp_valid<=1;end else wait_count<=wait_count-1'b1;
  REFRESH:begin state<=RFWAIT;wait_count<=3;refresh_age<=0;refresh_count<=refresh_count+1'b1;end
  RFWAIT:if(wait_count==0) state<=IDLE;else wait_count<=wait_count-1'b1;
  default:state<=POWER;
  endcase
 end
end
endmodule

