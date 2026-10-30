module dmz_image_player(input clk,reset,input catalog_ready,input [5:0] image_count,
 input select_request,input [4:0] requested_index,output reg [4:0] selected_index,
 input fat16,input [7:0] spc,input [31:0] fat_base,data_base,image_cluster,image_bytes,
 output wire sd_start,output wire [31:0] sd_lba,input sd_ready,sd_done,
 input sd_byte_valid,input [8:0] sd_byte_index,input [7:0] sd_byte_data,sd_error,
 output wire load_valid,output wire [17:0] load_addr,output wire [255:0] load_data,output wire load_last,
 input load_ready,load_ack,output wire busy,output wire done,output wire [7:0] error,status,output wire [31:0] pixels_loaded);
localparam WAIT_CATALOG=0,LOOKUP=1,META=2,START=3,RUN=4,FINISH=5,FAIL=6;
reg [2:0] state;
wire stream_busy,stream_done,byte_valid,byte_ready,byte_last,decode_done;
wire [7:0] byte_data,stream_error,decode_error,decode_status;wire [31:0] bytes_read;
wire launch=state==START;
wire cancel=decode_done||decode_error!=0;
assign busy=state!=FINISH&&state!=FAIL;
assign done=state==FINISH;assign error=(catalog_ready&&image_count==0)?8'd5:decode_error;
assign status=decode_status;
dmz_fat_stream file_stream(.clk(clk),.reset(reset),.start(launch),.cancel(cancel),.fat16(fat16),.spc(spc),.fat_base(fat_base),.data_base(data_base),
 .first_cluster(image_cluster),.file_bytes(image_bytes),.sd_start(sd_start),.sd_lba(sd_lba),.sd_ready(sd_ready),.sd_done(sd_done),
 .sd_byte_valid(sd_byte_valid),.sd_byte_index(sd_byte_index),.sd_byte_data(sd_byte_data),.sd_error(sd_error),
 .byte_valid(byte_valid),.byte_ready(byte_ready),.byte_data(byte_data),.byte_last(byte_last),.busy(stream_busy),.done(stream_done),.error(stream_error),.bytes_read(bytes_read));
dmz_bmp_decoder decoder(.clk(clk),.reset(reset),.start(launch),.file_bytes(image_bytes),.stream_error(stream_error),
 .byte_valid(byte_valid),.byte_ready(byte_ready),.byte_data(byte_data),.load_valid(load_valid),.load_addr(load_addr),.load_data(load_data),.load_last(load_last),
 .load_ready(load_ready),.load_ack(load_ack),.done(decode_done),.error(decode_error),.status(decode_status),.pixels_loaded(pixels_loaded));
always @(posedge clk) begin
 if(reset) begin state<=WAIT_CATALOG;selected_index<=0;end
 else case(state)
  WAIT_CATALOG:if(catalog_ready) begin if(image_count==0) state<=FAIL;else state<=LOOKUP;end
  LOOKUP:state<=META;
  META:if(!stream_busy) state<=START;
  START:state<=RUN;
  RUN:if(decode_error!=0) state<=FAIL;else if(decode_done) state<=FINISH;
  FINISH,FAIL:if(select_request&&requested_index<image_count&&!stream_busy) begin selected_index<=requested_index;state<=LOOKUP;end
  default:state<=FAIL;
 endcase
end
endmodule
