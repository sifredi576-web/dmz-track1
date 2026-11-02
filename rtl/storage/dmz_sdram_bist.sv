// Destructive power-on BIST: entire 8 MiB, 4 patterns, retention under refresh.
module dmz_sdram_bist #(parameter integer WORD_COUNT=2097152,HOLD_CYCLES=5000000,PARALLEL_CHECK=0,COUNT_ERRORS=1)(
 input wire clk,reset,init_done,
 output wire req_valid,output wire req_write,output wire [20:0] req_addr,
 output reg [255:0] req_wdata,input wire req_ready,rsp_valid,input wire [255:0] rsp_rdata,
 output wire done,output wire passed,output reg [31:0] errors,checked_words,
 output reg [20:0] first_bad_addr,output reg [31:0] first_expected,first_actual,
 output wire [7:0] status);
localparam WAIT_INIT=0,ISSUE=1,WAIT_RSP=2,CHECK=3,HOLD=4,FINISH=5;
reg [2:0] state,beat;
reg [1:0] pattern;
reg reading;
reg [20:0] address;
reg [31:0] hold_count;
reg [255:0] read_data;
function automatic [31:0] pattern_word(input [20:0] a,input [1:0] p);
 reg [31:0] mixed;
 begin
 mixed={a[10:0],a} ^ 32'h9e3779b9;
 case(p) 0:pattern_word=0;1:pattern_word=32'hffffffff;2:pattern_word=mixed;default:pattern_word=~mixed;endcase
 end
endfunction
integer k;
always @* for(k=0;k<8;k=k+1) req_wdata[k*32+:32]=pattern_word(address+21'(k),pattern);
assign req_valid=state==ISSUE;
assign req_write=!reading;
assign req_addr=address;
assign done=state==FINISH;
assign passed=done && errors==0;
assign status={2'b00,pattern,reading,state};
wire [20:0] check_addr=address+{18'd0,beat};
wire [31:0] expected=pattern_word(check_addr,pattern);
wire [31:0] actual=read_data[beat*32+:32];
reg [3:0] failed_words;reg [2:0] first_failed;integer lane;
always @*begin
 failed_words=0;first_failed=0;
 for(lane=7;lane>=0;lane=lane-1)begin
  if(rsp_rdata[lane*32+:32]!=pattern_word(address+21'(lane),pattern))begin
   failed_words=failed_words+1'b1;first_failed=3'(lane);
  end
 end
end
task advance_read;
 begin
  if(address==WORD_COUNT-8)begin
   if(pattern==3)state<=FINISH;
   else begin address<=0;pattern<=pattern+1'b1;reading<=0;state<=ISSUE;end
  end else begin address<=address+8;state<=ISSUE;end
 end
endtask
always @(posedge clk)if(!PARALLEL_CHECK&&!reset&&state==WAIT_RSP&&rsp_valid&&reading)read_data<=rsp_rdata;
always @(posedge clk) begin
 if(reset) begin state<=WAIT_INIT;beat<=0;pattern<=0;reading<=0;address<=0;hold_count<=0;errors<=0;checked_words<=0;first_bad_addr<=0;first_expected<=0;first_actual<=0;end
 else case(state)
 WAIT_INIT:if(init_done) state<=ISSUE;
 ISSUE:if(req_ready) state<=WAIT_RSP;
 WAIT_RSP:if(rsp_valid) begin
  if(reading)begin
   if(PARALLEL_CHECK)begin
    checked_words<=checked_words+8;
    if(failed_words!=0)begin
     errors<=COUNT_ERRORS?(errors>32'hfffffff7 ?32'hffffffff:errors+{28'd0,failed_words}):32'd1;
     if(errors==0)begin first_bad_addr<=address+{18'd0,first_failed};
      first_expected<=pattern_word(address+{18'd0,first_failed},pattern);first_actual<=rsp_rdata[first_failed*32+:32];end
    end
    advance_read();
   end else begin beat<=0;state<=CHECK;end
  end
  else if(address==WORD_COUNT-8) begin address<=0;hold_count<=HOLD_CYCLES-1;state<=HOLD;end
  else begin address<=address+8;state<=ISSUE;end
 end
 CHECK:begin
  checked_words<=checked_words+1'b1;
  if(actual!==expected) begin
   if(errors!=32'hffffffff)errors<=COUNT_ERRORS?errors+1'b1:32'd1;
   if(errors==0) begin first_bad_addr<=check_addr;first_expected<=expected;first_actual<=actual;end
  end
  if(beat==7) begin
   if(address==WORD_COUNT-8) begin
    if(pattern==3) state<=FINISH;
    else begin address<=0;pattern<=pattern+1'b1;reading<=0;state<=ISSUE;end
   end else begin address<=address+8;state<=ISSUE;end
  end else beat<=beat+1'b1;
 end
 HOLD:if(hold_count==0) begin reading<=1;state<=ISSUE;end else hold_count<=hold_count-1'b1;
 default:begin end
 endcase
end
endmodule
