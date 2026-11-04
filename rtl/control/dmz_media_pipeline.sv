// One shared mounted volume, two reusable file-stream contexts, one SD host.
module dmz_media_pipeline #(parameter RT_PLATFORM=0)(input clk,reset,enable,audio_urgent,
 input pair_enable,input [31:0] frame_swaps,
 input audio_select_request,input [3:0] audio_requested_index,output reg [3:0] audio_selected_index,
 output wire platform_found,platform_ready,output wire [7:0] platform_error,
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
 output wire [31:0] image_reads,audio_reads,
 input ui_event_valid,input [3:0] ui_event_action,input ui_menu_open,ui_paused,ui_muted,physical_alert,
 output wire platform_mode,output wire [159:0] ui_status,
 output wire [41:0] audio_params,input [7:0] audio_params_ack,input [8:0] audio_finished,
 output wire ui_control_valid,output wire [7:0] ui_control_byte,
 output wire aux_valid,aux_write,output wire [20:0] aux_addr,output wire [255:0] aux_data,
 input aux_ready,aux_response,input [255:0] aux_rdata);
wire [6:0] config_resources;wire [5:0] config_pages;wire [7:0] config_widgets;
wire [159:0] runtime_status;
assign ui_status={runtime_status[159:144],(platform_error!=0?platform_error:runtime_status[143:136]),runtime_status[135:0]};
wire raw_catalog_ready;wire [31:0] config_cluster,config_bytes;
wire config_start,config_sd_ready,config_sd_done,config_bv;wire [31:0] config_lba;
wire boot_finished;wire [7:0] boot_error,rt_error;wire rt_active;
wire [1:0] config_version;wire [20:0] config_length;wire [4:0] config_entry;
wire [2:0] aux_requests,aux_writes,aux_ready_bus,aux_responses;
wire [62:0] aux_addresses;wire [767:0] aux_writes_data;
wire lookup_enable;wire [5:0] lookup_query;wire [31:0] browse_bytes;
wire rt_image_select,rt_audio_select,rt_audio_stop,page_begin;wire [4:0] rt_image_index,rt_displayed;wire [3:0] rt_audio_index;
wire [3:0] widget_count;wire [2:0] widget_index;wire [98:0] widget_data;wire compositor_busy;
wire raw_load_valid,raw_load_ready,raw_load_ack,raw_load_last;wire [17:0] raw_load_addr;wire [255:0] raw_load_data;
assign platform_error=boot_error!=0?boot_error:rt_error;
assign platform_mode=RT_PLATFORM&&platform_ready&&config_version==2&&rt_error==0;
assign aux_writes=3'b001;
assign aux_writes_data[767:256]=0;
dmz_mem_mux #(.N(3)) auxiliary(.clk(clk),.reset(reset),.valid(aux_requests),.write(aux_writes),.addr(aux_addresses),.wdata(aux_writes_data),
 .ready(aux_ready_bus),.response(aux_responses),.req_valid(aux_valid),.req_write(aux_write),.req_addr(aux_addr),.req_wdata(aux_data),
 .req_ready(aux_ready),.rsp_valid(aux_response));
generate if(RT_PLATFORM)begin:configured_ui
 dmz_scene_runtime #(.AUTOPLAY_ON_RESET(1)) runtime(.clk(clk),.reset(reset),.start(boot_finished&&platform_mode),.version(config_version),.payload_length(config_length),
 .resource_count(config_resources),.page_count(config_pages),.widget_total(config_widgets),.entry_page(config_entry),.active(rt_active),.error(rt_error),
 .mem_valid(aux_requests[2]),.mem_write(),.mem_addr(aux_addresses[62:42]),.mem_wdata(),.mem_ready(aux_ready_bus[2]),.mem_response(aux_responses[2]),.mem_data(aux_rdata),
 .lookup_enable(lookup_enable),.lookup_query(lookup_query),.browse_tag(browse_tag),.browse_valid(browse_valid),.browse_name(browse_name),.browse_bytes(browse_bytes),.image_count(image_count),.wav_count(wav_count),
 .event_valid(ui_event_valid),.event_action(ui_event_action),.menu_open(ui_menu_open),.paused(ui_paused),.muted(ui_muted),.physical_alert(physical_alert),
 .swaps(frame_swaps),.image_busy(image_busy),.image_error(image_error),.image_select(rt_image_select),.image_index(rt_image_index),.page_begin(page_begin),
 .audio_select(rt_audio_select),.audio_stop(rt_audio_stop),.audio_index(rt_audio_index),.audio_params(audio_params),.audio_params_ack(audio_params_ack),.audio_finished(audio_finished),
 .control_valid(ui_control_valid),.control_byte(ui_control_byte),.control_count(widget_count),.compositor_busy(compositor_busy),.compositor_index(widget_index),.compositor_widget(widget_data),
 .displayed_image(rt_displayed),.status(runtime_status));
end else begin
 assign rt_active=0;assign rt_error=0;assign lookup_enable=0;assign lookup_query=0;
 assign aux_requests[2]=0;assign aux_addresses[62:42]=0;assign rt_image_select=0;assign rt_image_index=0;assign page_begin=0;
 assign rt_audio_select=0;assign rt_audio_stop=0;assign rt_audio_index=0;assign audio_params=0;assign ui_control_valid=0;assign ui_control_byte=0;
 assign widget_count=0;assign widget_data=0;assign rt_displayed=0;assign runtime_status=0;
end endgenerate
dmz_page_compositor compositor(.clk(clk),.reset(reset),.enabled(platform_mode&&rt_active),.page_begin(page_begin),.widget_count(widget_count),.widget_index(widget_index),.widget(widget_data),
 .in_valid(raw_load_valid),.in_addr(raw_load_addr),.in_data(raw_load_data),.in_last(raw_load_last),.in_ready(raw_load_ready),.in_ack(raw_load_ack),
 .out_valid(load_valid),.out_addr(load_addr),.out_data(load_data),.out_last(load_last),.out_ready(load_ready),.out_ack(load_ack),
 .mem_valid(aux_requests[1]),.mem_addr(aux_addresses[41:21]),.mem_ready(aux_ready_bus[1]),.mem_response(aux_responses[1]),.mem_data(aux_rdata),.busy(compositor_busy));
wire media_access=raw_catalog_ready&&(!platform_found||boot_finished);
assign catalog_ready=media_access;

wire fat16;wire [7:0] spc;wire [31:0] fat_base,data_base,image_cluster,image_bytes,wav_cluster;
dmz_platform_boot #(.STORE_CONFIG(RT_PLATFORM)) platform_boot(.clk(clk),.reset(reset),.catalog_ready(raw_catalog_ready),.found(platform_found),
 .fat16(fat16),.spc(spc),.fat_base(fat_base),.data_base(data_base),.first_cluster(config_cluster),.file_bytes(config_bytes),
 .sd_start(config_start),.sd_lba(config_lba),.sd_ready(config_sd_ready),.sd_done(config_sd_done),.sd_byte_valid(config_bv),
 .sd_byte_index(sd_byte_index),.sd_byte_data(sd_byte_data),.sd_error(sd_error),.finished(boot_finished),
 .valid(platform_ready),.error(boot_error),.resources(config_resources),.pages(config_pages),.widgets(config_widgets),.entry_page(config_entry),.format_version(config_version),.payload_length(config_length),
 .mem_valid(aux_requests[0]),.mem_addr(aux_addresses[20:0]),.mem_data(aux_writes_data[255:0]),.mem_ready(aux_ready_bus[0]),.mem_response(aux_responses[0]));
wire cat_start,img_start,aud_start,img_ready,aud_ready,img_done,aud_done,img_bv,aud_bv;
wire [31:0] cat_lba,img_lba,aud_lba;wire [7:0] cat_error,cat_status,decode_error,decode_status;
wire pair_found;wire [3:0] pair_index;
wire pair_request;wire [3:0] paired_index;
dmz_pair_control pairing(.clk(clk),.reset(reset),.enable(pair_enable&&!platform_mode),.swaps(frame_swaps),
 .pair_found(pair_found),.pair_index(pair_index),.request(pair_request),.index(paired_index));
wire legacy_audio_change=catalog_ready&&!platform_mode&&(pair_request || (audio_select_request&&({1'b0,audio_requested_index}<wav_count)));
wire audio_change=legacy_audio_change||rt_audio_select;
always @(posedge clk) if(reset) audio_selected_index<=0;else if(audio_change) audio_selected_index<=rt_audio_select?rt_audio_index:pair_request?paired_index:audio_requested_index;
assign image_error=cat_error!=0?cat_error:decode_error;
assign image_status=catalog_ready?decode_status:cat_status;
dmz_fat_catalog catalog(.clk(clk),.reset(reset),.enable(enable),.sd_start(cat_start),.sd_lba(cat_lba),
 .sd_ready(img_ready&&!raw_catalog_ready),.sd_done(img_done&&!raw_catalog_ready),.sd_byte_valid(img_bv&&!raw_catalog_ready),
 .sd_byte_index(sd_byte_index),.sd_byte_data(sd_byte_data),.sd_error(sd_error),
 .ready(raw_catalog_ready),.config_found(platform_found),.config_cluster(config_cluster),.config_bytes(config_bytes),.error(cat_error),.status(cat_status),.fat16(fat16),.spc(spc),.fat_base(fat_base),.data_base(data_base),
 .image_index(selected_index),.image_count(image_count),.image_cluster(image_cluster),.image_bytes(image_bytes),.image_name(image_name),
 .wav_index(audio_selected_index),.wav_count(wav_count),.browse_query(lookup_enable?lookup_query:browse_query),.browse_tag(browse_tag),.browse_name(browse_name),.browse_valid(browse_valid),.browse_bytes(browse_bytes),
 .pair_found(pair_found),.pair_index(pair_index),.wav_found(wav_found),.wav_cluster(wav_cluster),.wav_bytes(wav_bytes));
dmz_image_player #(.MANUAL_START(RT_PLATFORM)) images(.clk(clk),.reset(reset),.catalog_ready(catalog_ready),.image_count(image_count),
 .manual_mode(platform_mode),.select_request(platform_mode?rt_image_select:select_request),.requested_index(platform_mode?rt_image_index:requested_index),.selected_index(selected_index),
 .fat16(fat16),.spc(spc),.fat_base(fat_base),.data_base(data_base),.image_cluster(image_cluster),.image_bytes(image_bytes),
 .sd_start(img_start),.sd_lba(img_lba),.sd_ready(img_ready&&catalog_ready),.sd_done(img_done&&catalog_ready),.sd_byte_valid(img_bv&&catalog_ready),
 .sd_byte_index(sd_byte_index),.sd_byte_data(sd_byte_data),.sd_error(sd_error),
 .load_valid(raw_load_valid),.load_addr(raw_load_addr),.load_data(raw_load_data),.load_last(raw_load_last),.load_ready(raw_load_ready),.load_ack(raw_load_ack),
 .busy(image_busy),.done(image_done),.error(decode_error),.status(decode_status),.pixels_loaded(image_pixels));
dmz_wav_player #(.MANUAL_START(RT_PLATFORM)) audio(.clk(clk),.reset(reset),.catalog_ready(catalog_ready),.wav_found(wav_found),.select_restart(audio_change),.manual_mode(platform_mode),.loop_enable(audio_params[32]),.stop(rt_audio_stop),.flushing(audio_flushing),
 .fat16(fat16),.spc(spc),.fat_base(fat_base),.data_base(data_base),.wav_cluster(wav_cluster),.wav_bytes(wav_bytes),
 .sd_start(aud_start),.sd_lba(aud_lba),.sd_ready(aud_ready),.sd_done(aud_done),.sd_byte_valid(aud_bv),
 .sd_byte_index(sd_byte_index),.sd_byte_data(sd_byte_data),.sd_error(sd_error),
 .pcm_valid(pcm_valid),.pcm_ready(pcm_ready),.pcm_pair(pcm_pair),.decoded_pairs(decoded_pairs),.loop_count(loop_count),.declared_pairs(declared_pairs),
 .error(wav_error),.status(wav_status),.decode_done(wav_done));
assign config_sd_ready=img_ready&&raw_catalog_ready&&!media_access;
assign config_sd_done=img_done&&raw_catalog_ready&&!media_access;
assign config_bv=img_bv&&raw_catalog_ready&&!media_access;
dmz_sd_arbiter arbiter(.clk(clk),.reset(reset),.audio_urgent(audio_urgent),
 .image_start(!raw_catalog_ready?cat_start:!media_access?config_start:img_start),.image_lba(!raw_catalog_ready?cat_lba:!media_access?config_lba:img_lba),.image_ready(img_ready),.image_done(img_done),.image_byte_valid(img_bv),
 .audio_start(aud_start),.audio_lba(aud_lba),.audio_ready(aud_ready),.audio_done(aud_done),.audio_byte_valid(aud_bv),
 .sd_start(sd_start),.sd_lba(sd_lba),.sd_ready(sd_ready),.sd_done(sd_done),.sd_byte_valid(sd_byte_valid),.image_reads(image_reads),.audio_reads(audio_reads));
endmodule
