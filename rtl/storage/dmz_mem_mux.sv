// Fixed-priority, response-tagged non-pipelined clients. Index zero wins.
module dmz_mem_mux #(parameter N=2)(input clk,reset,
 input [N-1:0] valid,write,input [N*21-1:0] addr,input [N*256-1:0] wdata,
 output reg [N-1:0] ready,response,
 output reg req_valid,req_write,output reg [20:0] req_addr,output reg [255:0] req_wdata,
 input req_ready,rsp_valid);
localparam OW=(N<2)?1:$clog2(N);
reg busy;reg [OW-1:0] owner,selected;integer i;
always @* begin
 selected=0;ready=0;response=0;req_valid=0;req_write=0;req_addr=0;req_wdata=0;
 for(i=N-1;i>=0;i=i-1)begin
  if(!busy&&valid[i])begin
   selected=OW'(i);req_valid=1;req_write=write[i];req_addr=addr[i*21+:21];req_wdata=wdata[i*256+:256];
   ready=0;ready[i]=req_ready;
  end
  if(busy&&rsp_valid&&owner==OW'(i))response[i]=1;
 end
end
always @(posedge clk)begin
 if(reset)begin busy<=0;owner<=0;end
 else begin
  if(req_valid&&req_ready)begin busy<=1;owner<=selected;end
  if(busy&&rsp_valid)busy<=0;
 end
end
endmodule
