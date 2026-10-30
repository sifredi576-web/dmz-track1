// One shared mounted volume, two reusable file-stream contexts, one SD host.
module dmz_media_pipeline(input clk,reset,enable,audio_urgent,
 input audio_select_request,input [3:0] audio_requested_index,output reg [3:0] audio_selected_index,
 output wire audio_flushing,output wire [4:0] wav_count,
 input [5:0] browse_query,output wire [5:0] browse_tag,output wire [63:0] browse_name,output wire browse_valid,
 input select_request,input [4:0] requested_index,output wire [4:0] selected_index,
 output wire catalog_ready,output wire [5:0] image_count,output wire [63:0] image_name,
 output wire image_busy,image_done,output wire [7:0] image_error,image_status,output wire [31:0] image_pixels,
 output wire load_valid,output wire [17:0] load_addr,output wire [255:0] load_data,output wire load_last,input load_ready,load_ack,
 output wire wav_found,output wire [31:0] wav_bytes,decoded_pairs,loop_count,declared_pairs,
 output wire [7:0] wav_error,wav_status,output wire wav_done,
 output wire pcm_valid,input pcm_ready,output wire [31:0] pcm_pair,
 output wire sd_start,output wire [31:0] sd_lba,input sd_ready,sd_done,sd_byte_valid,
 input [8:0] sd_byte_index,input [7:0] sd_byte_data,sd_error,
 output wire [31:0] image_reads,audio_reads);
wire fat16;wire [7:0] spc;wire [31:0] fat_base,data_base,image_cluster,image_bytes,wav_cluster;
wire cat_start,img_start,aud_start,img_ready,aud_ready,img_done,aud_done,img_bv,aud_bv;
wire [31:0] cat_lba,img_lba,aud_lba;wire [7:0] cat_error,cat_status,decode_error,decode_status;
wire audio_change=audio_select_request&&catalog_ready&&({1'b0,audio_requested_index}<wav_count);
always @(posedge clk) if(reset) audio_selected_index<=0;else if(audio_change) audio_selected_index<=audio_requested_index;
assign image_error=cat_error!=0?cat_error:decode_error;
assign image_status=catalog_ready?decode_status:cat_status;
dmz_fat_catalog catalog(.clk(clk),.reset(reset),.enable(enable),.sd_start(cat_start),.sd_lba(cat_lba),
 .sd_ready(img_ready&&!catalog_ready),.sd_done(img_done&&!catalog_ready),.sd_byte_valid(img_bv&&!catalog_ready),
 .sd_byte_index(sd_byte_index),.sd_byte_data(sd_byte_data),.sd_error(sd_error),
 .ready(catalog_ready),.error(cat_error),.status(cat_status),.fat16(fat16),.spc(spc),.fat_base(fat_base),.data_base(data_base),
 .image_index(selected_index),.image_count(image_count),.image_cluster(image_cluster),.image_bytes(image_bytes),.image_name(image_name),
 .wav_index(audio_selected_index),.wav_count(wav_count),.browse_query(browse_query),.browse_tag(browse_tag),.browse_name(browse_name),.browse_valid(browse_valid),
 .wav_found(wav_found),.wav_cluster(wav_cluster),.wav_bytes(wav_bytes));
dmz_image_player images(.clk(clk),.reset(reset),.catalog_ready(catalog_ready),.image_count(image_count),
 .select_request(select_request),.requested_index(requested_index),.selected_index(selected_index),
 .fat16(fat16),.spc(spc),.fat_base(fat_base),.data_base(data_base),.image_cluster(image_cluster),.image_bytes(image_bytes),
 .sd_start(img_start),.sd_lba(img_lba),.sd_ready(img_ready&&catalog_ready),.sd_done(img_done&&catalog_ready),.sd_byte_valid(img_bv&&catalog_ready),
 .sd_byte_index(sd_byte_index),.sd_byte_data(sd_byte_data),.sd_error(sd_error),
 .load_valid(load_valid),.load_addr(load_addr),.load_data(load_data),.load_last(load_last),.load_ready(load_ready),.load_ack(load_ack),
 .busy(image_busy),.done(image_done),.error(decode_error),.status(decode_status),.pixels_loaded(image_pixels));
dmz_wav_player audio(.clk(clk),.reset(reset),.catalog_ready(catalog_ready),.wav_found(wav_found),.select_restart(audio_change),.flushing(audio_flushing),
 .fat16(fat16),.spc(spc),.fat_base(fat_base),.data_base(data_base),.wav_cluster(wav_cluster),.wav_bytes(wav_bytes),
 .sd_start(aud_start),.sd_lba(aud_lba),.sd_ready(aud_ready),.sd_done(aud_done),.sd_byte_valid(aud_bv),
 .sd_byte_index(sd_byte_index),.sd_byte_data(sd_byte_data),.sd_error(sd_error),
 .pcm_valid(pcm_valid),.pcm_ready(pcm_ready),.pcm_pair(pcm_pair),.decoded_pairs(decoded_pairs),.loop_count(loop_count),.declared_pairs(declared_pairs),
 .error(wav_error),.status(wav_status),.decode_done(wav_done));
dmz_sd_arbiter arbiter(.clk(clk),.reset(reset),.audio_urgent(audio_urgent),
 .image_start(catalog_ready?img_start:cat_start),.image_lba(catalog_ready?img_lba:cat_lba),.image_ready(img_ready),.image_done(img_done),.image_byte_valid(img_bv),
 .audio_start(aud_start),.audio_lba(aud_lba),.audio_ready(aud_ready),.audio_done(aud_done),.audio_byte_valid(aud_bv),
 .sd_start(sd_start),.sd_lba(sd_lba),.sd_ready(sd_ready),.sd_done(sd_done),.sd_byte_valid(sd_byte_valid),.image_reads(image_reads),.audio_reads(audio_reads));
endmodule
