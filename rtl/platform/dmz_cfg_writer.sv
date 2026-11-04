// Pack sequential payload bytes into aligned SDRAM BL8 transactions at byte 0x200000.
module dmz_cfg_writer #(parameter [20:0] CFG_BASE=21'h080000)(input clk,reset,start,abort,
 input valid,last,input [19:0] addr,input [7:0] data,output wire ready,
 output wire mem_valid,output wire [20:0] mem_addr,output wire [255:0] mem_data,
 input mem_ready,mem_response,output wire idle,output reg done);
reg pending,waiting,final_word;reg [4:0] count;
reg [255:0] buffer;reg [20:0] address;
assign ready=!pending&&!waiting&&!done&&!abort;
assign mem_valid=pending&&!abort;assign mem_addr=address;assign mem_data=buffer;
assign idle=!pending&&!waiting;
always @(posedge clk)if(valid&&ready)buffer[count*8+:8]<=data;
always @(posedge clk)begin
 if(reset||start)begin pending<=0;waiting<=0;count<=0;address<=0;done<=0;final_word<=0;end
 else begin
  if(valid&&ready)begin

   if(count==0)address<=CFG_BASE+{3'd0,addr[19:2]};
   if(count==31||last)begin count<=0;pending<=1;final_word<=last;end
   else count<=count+1'b1;
  end
  if(mem_valid&&mem_ready)begin pending<=0;waiting<=1;end
  if(waiting&&mem_response)begin waiting<=0;if(final_word)done<=1;end
  if(abort)begin pending<=0;count<=0;if(!waiting||mem_response)done<=1;end
 end
end
endmodule
