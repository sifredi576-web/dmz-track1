// Read-only SD SPI host: SDv1/v2, SDHC/SDSC, CMD17 sector reads.
module dmz_sd_reader(input clk,reset,input read_start,input [31:0] read_lba,
 output wire ready,output reg initialized,output reg read_done,
 output reg byte_valid,output reg [8:0] byte_index,output reg [7:0] byte_data,
 output reg [7:0] error,output wire [7:0] status,output reg [31:0] sectors_read,
 output reg sd_cs,output wire sd_sck,sd_mosi,input sd_miso);
localparam POWER=0,CLOCKS=1,CLOCK_WAIT=2,INIT0=3,INIT8=4,CHECK8=5,INIT55=6,INIT41=7,CHECK41=8,INIT58=9,CHECK58=10,INIT16=11,SET_READY=12,IDLE=13,
 SEND=20,SEND_WAIT=21,RESP=22,RESP_WAIT=23,EXTRA=24,EXTRA_WAIT=25,GAP=26,GAP_WAIT=27,TOKEN=28,TOKEN_WAIT=29,DATA=30,DATA_WAIT=31,CRC=32,CRC_WAIT=33,FAIL=63;
reg [5:0] state,continuation;
reg [47:0] frame;
reg [3:0] bytes_left;
reg [31:0] power_count,response_extra;
reg [19:0] timeout_count;
reg [15:0] init_attempts;
reg [7:0] response;
reg [2:0] extra_count;
reg high_capacity,v2,reading;
reg [1:0] crc_left;
reg [8:0] data_index;
wire busy,spi_done;wire [7:0] rx;
wire issue=(state==CLOCKS||state==SEND||state==RESP||state==EXTRA||state==GAP||state==TOKEN||state==DATA||state==CRC);
wire [7:0] send_byte=state==SEND?frame[47:40]:8'hff;
dmz_spi_byte spi(.clk(clk),.reset(reset),.start(issue&&!busy),.tx(send_byte),.divider(initialized?8'd2:8'd125),.miso(sd_miso),.sck(sd_sck),.mosi(sd_mosi),.busy(busy),.done(spi_done),.rx(rx));
assign ready=state==IDLE&&initialized;
assign status={2'd0,state};
task command(input [5:0] number,input [31:0] argument,input [7:0] crc,input [2:0] extra,input [5:0] next_state);
 begin frame<={2'b01,number,argument,crc};bytes_left<=6;extra_count<=extra;response_extra<=0;continuation<=next_state;sd_cs<=0;timeout_count<=0;state<=SEND;end
endtask
always @(posedge clk) begin
 if(reset) begin
  state<=POWER;continuation<=0;frame<=0;bytes_left<=0;power_count<=50000;response_extra<=0;timeout_count<=0;init_attempts<=0;
  response<=255;extra_count<=0;high_capacity<=0;v2<=0;reading<=0;crc_left<=0;initialized<=0;read_done<=0;byte_valid<=0;byte_index<=0;data_index<=0;byte_data<=0;error<=0;sectors_read<=0;sd_cs<=1;
 end else begin
  read_done<=0;byte_valid<=0;
  case(state)
  POWER:if(power_count==0) begin bytes_left<=10;state<=CLOCKS;end else power_count<=power_count-1'b1;
  CLOCKS:if(!busy) state<=CLOCK_WAIT;
  CLOCK_WAIT:if(spi_done) begin if(bytes_left==1) state<=INIT0;else begin bytes_left<=bytes_left-1'b1;state<=CLOCKS;end end
  INIT0:command(0,0,8'h95,0,INIT8);
  INIT8:if(response!=1) begin error<=1;state<=FAIL;end else command(8,32'h1aa,8'h87,4,CHECK8);
  CHECK8:begin
   if(response==1 && response_extra[11:0]==12'h1aa) v2<=1;
   else if(response==5) v2<=0;
   else begin error<=2;state<=FAIL;end
   if(response==1||response==5) state<=INIT55;
  end
  INIT55:command(55,0,8'h01,0,INIT41);
  INIT41:if(response>1) begin error<=3;state<=FAIL;end else command(41,v2?32'h40000000:0,8'h01,0,CHECK41);
  CHECK41:if(response==0) state<=INIT58;
   else if(response==1&&init_attempts<2000) begin init_attempts<=init_attempts+1'b1;state<=INIT55;end
   else begin error<=4;state<=FAIL;end
  INIT58:command(58,0,8'h01,4,CHECK58);
  CHECK58:if(response!=0||!response_extra[31]) begin error<=5;state<=FAIL;end
   else begin high_capacity<=response_extra[30];if(response_extra[30]) state<=SET_READY;else state<=INIT16;end
  INIT16:command(16,512,8'h01,0,SET_READY);
  SET_READY:if(response!=0) begin error<=6;state<=FAIL;end else begin initialized<=1;state<=IDLE;end
  IDLE:if(read_start) begin reading<=1;command(17,high_capacity?read_lba:(read_lba<<9),8'h01,0,IDLE);end
  SEND:if(!busy) state<=SEND_WAIT;
  SEND_WAIT:if(spi_done) begin frame<={frame[39:0],8'hff};if(bytes_left==1) state<=RESP;else begin bytes_left<=bytes_left-1'b1;state<=SEND;end end
  RESP:if(!busy) state<=RESP_WAIT;
  RESP_WAIT:if(spi_done) begin
   if(!rx[7]) begin
    response<=rx;
    if(reading) begin if(rx!=0) begin error<=8;state<=FAIL;end else begin timeout_count<=0;state<=TOKEN;end end
    else if(extra_count!=0 && rx!=5) state<=EXTRA;
    else state<=GAP;
   end else if(timeout_count==127) begin error<=7;state<=FAIL;end
   else begin timeout_count<=timeout_count+1'b1;state<=RESP;end
  end
  EXTRA:if(!busy) state<=EXTRA_WAIT;
  EXTRA_WAIT:if(spi_done) begin response_extra<={response_extra[23:0],rx};if(extra_count==1) state<=GAP;else begin extra_count<=extra_count-1'b1;state<=EXTRA;end end
  GAP:begin sd_cs<=1;if(!busy) state<=GAP_WAIT;end
  GAP_WAIT:if(spi_done) begin state<=continuation;if(reading) begin reading<=0;read_done<=1;sectors_read<=sectors_read+1'b1;end end
  TOKEN:if(!busy) state<=TOKEN_WAIT;
  TOKEN_WAIT:if(spi_done) begin
   if(rx==8'hfe) begin data_index<=0;state<=DATA;end
   else if(rx!=255 || timeout_count==20'h7ffff) begin error<=9;state<=FAIL;end
   else begin timeout_count<=timeout_count+1'b1;state<=TOKEN;end
  end
  DATA:if(!busy) state<=DATA_WAIT;
  DATA_WAIT:if(spi_done) begin byte_data<=rx;byte_index<=data_index;byte_valid<=1;if(data_index==511) begin crc_left<=2;state<=CRC;end else begin data_index<=data_index+1'b1;state<=DATA;end end
  CRC:if(!busy) state<=CRC_WAIT;
  CRC_WAIT:if(spi_done) begin if(crc_left==1) state<=GAP;else begin crc_left<=crc_left-1'b1;state<=CRC;end end
  FAIL:sd_cs<=1;
  default:begin error<=255;state<=FAIL;end
  endcase
 end
end
endmodule
