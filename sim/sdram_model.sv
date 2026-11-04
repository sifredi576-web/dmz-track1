`timescale 1ns/1ps
// Behavioral EM638325 subset model. Independent command decoding, CL3/BL8,
// bank/row geometry, 6 ns read access and conservative command timing checks.
// Not a vendor electrical model; no analog retention or signal integrity modeling.
module sdram_model(input clk,reset,input ras_n,cas_n,we_n,input [10:0] addr,input [1:0] ba,
 input [31:0] dq_out,input dq_oe,output reg [31:0] dq_in);
reg [31:0] mem[0:2097151];
reg [10:0] rows[4];reg open_bank[4];
integer cycle=0,last_active[4],closed_at[4],last_refresh=-100,last_mrs=-100;
integer ref_count=0,delay_read=0,rd_left=0,wr_left=0;
integer rd_address=0,wr_address=0,bank_active=0;
reg mode_set=0;
reg inject;
initial begin inject=$test$plusargs("fault");for(integer i=0;i<4;i=i+1) begin open_bank[i]=0;last_active[i]=-100;closed_at[i]=-100;end end
always @(posedge clk) begin
 cycle=cycle+1;
 if(reset) begin delay_read=0;rd_left=0;wr_left=0;mode_set=0;ref_count=0;last_refresh=cycle;for(integer i=0;i<4;i=i+1) open_bank[i]=0;end
 else begin
  if(mode_set && cycle-last_refresh>780) $fatal(1,"refresh overdue");
  if(wr_left!=0) begin
   if(!dq_oe) $fatal(1,"missing write data");
   mem[wr_address]=dq_out;wr_address=wr_address+1;wr_left=wr_left-1;
   if(wr_left==0) begin open_bank[bank_active]=0;closed_at[bank_active]=cycle+1;end
  end
  if(delay_read!=0) begin delay_read=delay_read-1;if(delay_read==0) rd_left=8;end
  if(rd_left!=0) begin
   if(dq_oe) $fatal(1,"DQ contention");
   dq_in <= #6 (mem[rd_address] ^ ((inject&&rd_address==23)?32'd1:32'd0));
   rd_address=rd_address+1;rd_left=rd_left-1;
   if(rd_left==0) begin open_bank[bank_active]=0;closed_at[bank_active]=cycle;end
  end
  case({ras_n,cas_n,we_n})
  3'b010:begin
   if(addr[10]) for(integer i=0;i<4;i=i+1) begin open_bank[i]=0;closed_at[i]=cycle;end
   else begin open_bank[ba]=0;closed_at[ba]=cycle;end
  end
  3'b001:begin
   for(integer i=0;i<4;i=i+1) if(open_bank[i] || cycle-closed_at[i]<2) $fatal(1,"refresh with open bank/tRP");
   if(cycle-last_refresh<4) $fatal(1,"tRFC");
   last_refresh=cycle;ref_count=ref_count+1;
  end
  3'b000:begin
   if(ref_count<8 || addr!=11'h033 || ba!=0) $fatal(1,"initialization/mode");
   mode_set=1;last_mrs=cycle;
  end
  3'b011:begin
   if(!mode_set || open_bank[ba] || cycle-closed_at[ba]<2 || cycle-last_refresh<4 || cycle-last_mrs<2) $fatal(1,"ACT timing");
   rows[ba]=addr;open_bank[ba]=1;last_active[ba]=cycle;
  end
  3'b101,3'b100:begin
   if(!open_bank[ba] || cycle-last_active[ba]<2 || !addr[10] || addr[2:0]!=0) $fatal(1,"READ/WRITE timing/address");
   bank_active=ba;
   if(we_n) begin rd_address={ba,rows[ba],addr[7:0]};delay_read=3;end
   else begin
    if(!dq_oe) $fatal(1,"first write beat");
    wr_address={ba,rows[ba],addr[7:0]};mem[wr_address]=dq_out;wr_address=wr_address+1;wr_left=7;
   end
  end
  default:begin end
  endcase
 end
end
endmodule
