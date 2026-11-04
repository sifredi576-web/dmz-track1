// Read SCENE.BIN once before media starts. No SCENE.BIN keeps legacy startup.
// Commit only after both CRC validation and the final SDRAM write response.
module dmz_platform_boot #(parameter STORE_CONFIG=0, parameter [20:0] CFG_BASE=21'h080000)(input clk,reset,catalog_ready,found,
 input fat16,input [7:0] spc,input [31:0] fat_base,data_base,first_cluster,file_bytes,
 output wire sd_start,output wire [31:0] sd_lba,input sd_ready,sd_done,sd_byte_valid,
 input [8:0] sd_byte_index,input [7:0] sd_byte_data,sd_error,
 output reg finished,output wire valid,output wire [7:0] error,
 output wire [6:0] resources,output wire [5:0] pages,output wire [7:0] widgets,output wire [4:0] entry_page,
 output wire [1:0] format_version,output wire [20:0] payload_length,
 output wire mem_valid,output wire [20:0] mem_addr,output wire [255:0] mem_data,
 input mem_ready,mem_response);
reg started,launch;
wire file_done,busy,byte_valid,byte_ready,byte_last,parser_busy;
wire [7:0] byte_data,file_error,parse_error;
wire [31:0] bytes_read;
wire aborted=file_error!=0||parse_error!=0;

wire staging_write,writer_ready,writer_idle,writer_done;wire [19:0] staging_addr;wire [7:0] staging_data;

generate if(STORE_CONFIG)begin
 dmz_cfg_writer #(.CFG_BASE(CFG_BASE)) writer(.clk(clk),.reset(reset),.start(launch),.abort(aborted),
 .valid(staging_write),.last(byte_last),.addr(staging_addr),.data(staging_data),.ready(writer_ready),
 .mem_valid(mem_valid),.mem_addr(mem_addr),.mem_data(mem_data),.mem_ready(mem_ready),.mem_response(mem_response),.idle(writer_idle),.done(writer_done));
end else begin
 assign writer_ready=1;assign writer_idle=1;assign writer_done=1;assign mem_valid=0;assign mem_addr=0;assign mem_data=0;
end endgenerate
assign error=file_error!=0?8'd1:parse_error;
always @(posedge clk) begin
 if(reset) begin started<=0;launch<=0;finished<=0;end
 else begin
  launch<=0;
  if(catalog_ready&&!started) begin
   started<=1;
   if(found) launch<=1;else finished<=1;
  end
  if(started&&!launch&&((valid&&writer_done&&!busy)||(aborted&&!busy&&writer_idle))) finished<=1;
 end
end
dmz_fat_stream stream(.clk(clk),.reset(reset),.start(launch),.cancel(parse_error!=0),
 .fat16(fat16),.spc(spc),.fat_base(fat_base),.data_base(data_base),.first_cluster(first_cluster),.file_bytes(file_bytes),
 .sd_start(sd_start),.sd_lba(sd_lba),.sd_ready(sd_ready),.sd_done(sd_done),.sd_byte_valid(sd_byte_valid),
 .sd_byte_index(sd_byte_index),.sd_byte_data(sd_byte_data),.sd_error(sd_error),
 .byte_valid(byte_valid),.byte_ready(byte_ready),.byte_data(byte_data),.byte_last(byte_last),
 .busy(busy),.done(file_done),.error(file_error),.bytes_read(bytes_read));
dmz_scene_loader parser(.clk(clk),.reset(reset),.start(launch),.stream_error(file_error!=0),
 .byte_valid(byte_valid),.byte_last(byte_last),.byte_data(byte_data),.byte_ready(byte_ready),
 .staging_ready(writer_ready),.staging_write(staging_write),.staging_addr(staging_addr),.staging_data(staging_data),
 .busy(parser_busy),.ready(valid),.commit(),.error(parse_error),.resources(resources),.pages(pages),.widgets(widgets),.entry_page(entry_page),.format_version(format_version),.payload_length(payload_length));
endmodule
