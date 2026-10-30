// DMZ: columns have external pull-ups; drive one row low, float the rest.
module dmz_matrix_keys #(parameter integer SLOT_CYCLES=12500,DEBOUNCE_FRAMES=8)(
 input clk,reset,input [3:0] col_in,output wire [3:0] row_low,
 output reg key_valid,output reg [3:0] key_code);
localparam CW=(SLOT_CYCLES<2)?1:$clog2(SLOT_CYCLES);
localparam DW=(DEBOUNCE_FRAMES<2)?1:$clog2(DEBOUNCE_FRAMES+1);
reg [CW-1:0] ticks;reg [1:0] row;
(* ASYNC_REG="TRUE" *) reg [3:0] col_meta,col_sync;
reg [15:0] scan,candidate;reg [DW-1:0] stable_count,release_count;reg armed;
wire [15:0] mask=16'h000f << {row,2'b00};
wire [15:0] complete=(scan&~mask)|({12'd0,~col_sync} << {row,2'b00});
wire single_key=(complete!=0)&&((complete&(complete-16'd1))==0);
assign row_low=reset?4'd0:(4'b0001<<row);
integer k;
always @(posedge clk) begin
 if(reset) begin ticks<=0;row<=0;col_meta<=15;col_sync<=15;scan<=0;
  candidate<=0;stable_count<=0;release_count<=0;armed<=0;key_valid<=0;key_code<=0;end
 else begin
  col_meta<=col_in;col_sync<=col_meta;key_valid<=0;
  if(ticks==SLOT_CYCLES-1) begin
   ticks<=0;row<=row+1'b1;scan<=complete;
   if(row==3) begin
    if(complete==0) begin
     candidate<=0;stable_count<=0;
     if(release_count<DEBOUNCE_FRAMES) release_count<=release_count+1'b1;
     if(release_count==DEBOUNCE_FRAMES-1) armed<=1;
    end else begin
     release_count<=0;
     // Multiple keys lock out until a debounced full release.
     if(!single_key) begin armed<=0;candidate<=0;stable_count<=0;end
     else if(armed) begin
      if(candidate!=complete) begin candidate<=complete;stable_count<=1;end
      else if(stable_count<DEBOUNCE_FRAMES) stable_count<=stable_count+1'b1;
      if((candidate==complete&&stable_count==DEBOUNCE_FRAMES-1)||DEBOUNCE_FRAMES==1) begin
       key_valid<=1;armed<=0;
       for(k=0;k<16;k=k+1) if(complete[k]) key_code<=4'(k);
      end
     end
    end
   end
  end else ticks<=ticks+1'b1;
 end
end
endmodule
