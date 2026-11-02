// 2048 x 32 dual-clock FIFO; Gray pointers, registered show-ahead output.
module dmz_pixel_fifo #(parameter AW=11,RECODE_ADDR=0)(
 input wire wclk,wreset,wpush,input wire [31:0] wdata,output wire full,output wire [AW:0] used,
 input wire rclk,rreset,rpop,output reg [31:0] rdata,output wire empty);
reg [31:0] mem[0:(1<<AW)-1];
reg [AW:0] wp,rp,wgray,rgray;
(* ASYNC_REG="TRUE" *) reg [AW:0] rg1,rg2,wg1,wg2;
wire pop=rpop&&!empty;
wire push=wpush&&!full;
wire [AW:0] rn=rp+pop,wn=wp+push;
wire [AW:0] rng=(rn>>1)^rn,wng=(wn>>1)^wn;
function automatic [AW:0] binary(input [AW:0] g);
 integer i;begin binary[AW]=g[AW];for(i=AW-1;i>=0;i=i-1) binary[i]=binary[i+1]^g[i];end
endfunction
// Optional invertible address recoding inserts real logic on short RAM address paths.
// Pointer arithmetic, Gray CDC, full/empty and external FIFO ordering stay unchanged.
function automatic [AW-1:0] physical_addr(input [AW-1:0] address);
 reg [AW-1:0] g;
 begin g=(address>>1)^address;g[AW-1]=g[AW-1]^g[0];physical_addr=g;end
endfunction
wire [AW-1:0] write_addr=RECODE_ADDR?physical_addr(wp[AW-1:0]):wp[AW-1:0];
wire [AW-1:0] read_addr=RECODE_ADDR?physical_addr(rn[AW-1:0]):rn[AW-1:0];
assign used=wp-binary(rg2);
assign full=(wgray=={~rg2[AW:AW-1],rg2[AW-2:0]});
assign empty=(rgray==wg2);
always @(posedge wclk) begin
 if(wreset) begin wp<=0;wgray<=0;rg1<=0;rg2<=0;end
 else begin wp<=wn;wgray<=wng;rg1<=rgray;rg2<=rg1;end
 if(push && !wreset) mem[write_addr]<=wdata;
end
always @(posedge rclk) begin
 if(rreset) begin rp<=0;rgray<=0;wg1<=0;wg2<=0;end
 else begin rp<=rn;rgray<=rng;wg1<=wgray;wg2<=wg1;end
 rdata<=mem[read_addr];
end
endmodule
