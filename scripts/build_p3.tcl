import_device eagle_s20.db -package EG4S20BG256
if {[file exists dmz_p3.al]} {
 open_project dmz_p3.al
 reset_runs syn_1
} else {
 create_project dmz_p3 ./ -family EG4 -device EG4S20BG256
 open_project dmz_p3.al
}
top_module dmz_p3_top
add_files ../rtl/p2/dmz_p2_pll.v
add_files ../rtl/p2/dmz_sdram_ctrl.sv
add_files ../rtl/p2/dmz_sdram_bist.sv
add_files ../rtl/p2/dmz_pixel_fifo.sv
add_files ../rtl/p2/dmz_status_uart.sv
add_files ../rtl/p3/dmz_bmp_loader.sv
add_files ../rtl/p3/dmz_image_framebuffer.sv
add_files ../rtl/p3/dmz_p3_top.sv
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
launch_runs {syn_1 phy_1}
wait_run syn_1 -quiet
wait_run phy_1 -quiet
close_project
exit
