import_device eagle_s20.db -package EG4S20BG256
if {[file exists dmz_track1.al]} {
 open_project dmz_track1.al
 reset_runs phy_1
} else {
 create_project dmz_track1 ./ -family EG4 -device EG4S20BG256
 open_project dmz_track1.al
}
top_module dmz_track1_top
add_files ../rtl/platform/dmz_mem_mux.sv
add_files ../rtl/platform/dmz_cfg_writer.sv
add_files ../rtl/platform/dmz_scene_runtime.sv
add_files ../rtl/platform/dmz_page_compositor.sv
add_files ../rtl/platform/dmz_ui_overlay.sv
add_files ../rtl/platform/dmz_audio_completion.sv
add_files ../rtl/platform/dmz_ui_keys.sv
add_files ../rtl/platform/dmz_ui_controller.sv
add_files ../rtl/platform/dmz_scene_loader.sv
add_files ../rtl/platform/dmz_platform_boot.sv
add_files ../rtl/media/dmz_pair_control.sv
add_files ../rtl/media/dmz_fat_catalog.sv
add_files ../rtl/media/dmz_fat_stream.sv
add_files ../rtl/media/dmz_sd_arbiter.sv
add_files ../rtl/media/dmz_udiv32.sv
add_files ../rtl/media/dmz_bmp_decoder.sv
add_files ../rtl/media/dmz_image_player.sv
add_files ../rtl/media/dmz_wav_decoder.sv
add_files ../rtl/media/dmz_wav_player.sv
add_files ../rtl/media/dmz_media_storage.sv
add_files ../rtl/p2/dmz_p2_pll.v
add_files ../rtl/p2/dmz_wide_pll.v
add_files ../rtl/system/dmz_wide_mapper.sv
add_files ../rtl/p2/dmz_sdram_ctrl.sv
add_files ../rtl/p2/dmz_sdram_bist.sv
add_files ../rtl/p2/dmz_pixel_fifo.sv
add_files ../rtl/p2/dmz_status_uart.sv
add_files ../rtl/p3/dmz_image_framebuffer.sv
add_files ../rtl/system/dmz_track1_top.sv
add_files ../rtl/system/dmz_matrix_keys.sv
add_files ../rtl/system/dmz_board_commands.sv
add_files ../rtl/system/dmz_file_menu.sv
add_files ../rtl/system/dmz_osd.sv
add_files ../rtl/system/dmz_top_ticker.sv
add_files ../rtl/system/dmz_trigger_button.sv
add_files ../rtl/system/dmz_status_panel.sv
add_files ../rtl/system/dmz_scene_control.sv
add_files ../rtl/system/dmz_audio_visual.sv
add_files ../rtl/system/dmz_display_control.sv
add_files ../rtl/system/dmz_picture_adjust.sv
add_files ../rtl/system/dmz_picture_pipe.sv
add_files ../rtl/audio_test/dmz_uart_rx.sv
add_files ../rtl/system/dmz_media_control.sv
add_files ../rtl/system/dmz_gallery_control.sv
add_files ../rtl/system/dmz_status_cdc.sv
add_files ../rtl/p3/dmz_sd_reader.sv
add_files ../rtl/p3/dmz_spi_byte.sv
add_files ../rtl/p1/serializer.sv
add_files ../rtl/p1/dmz_tone.sv
add_files ../rtl/p1/hdmi_core/audio_clock_regeneration_packet.sv
add_files ../rtl/p1/hdmi_core/audio_info_frame.sv
add_files ../rtl/p1/hdmi_core/audio_sample_packet.sv
add_files ../rtl/p1/hdmi_core/auxiliary_video_information_info_frame.sv
add_files ../rtl/p1/hdmi_core/hdmi.sv
add_files ../rtl/p1/hdmi_core/packet_assembler.sv
add_files ../rtl/p1/hdmi_core/packet_picker.sv
add_files ../rtl/p1/hdmi_core/source_product_description_info_frame.sv
add_files ../rtl/p1/hdmi_core/tmds_channel.sv
add_files ../constraints/dmz_p3.adc
add_files ../constraints/dmz_p3.sdc
# Compact neighbour table reduces pressure; use default physical parameters.
# Revert prior experimental congestion knobs for reproducible normal routing.
non_default_params -revert -run phy_1
set_param place seed 11 -run phy_1
set_param flow thread 1 -run phy_1
set_param route effort routability -run phy_1
set_param place fix_hold on -run phy_1
set_param place effort high -run phy_1
set_param route swap_pin off -run phy_1
launch_runs {phy_1}

wait_run phy_1 -quiet
close_project
exit











