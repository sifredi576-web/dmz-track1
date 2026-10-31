`timescale 1ns/1ps
`default_nettype none
module tb_telemetry;
reg catalog_ready;
reg gallery_loading;
reg autoplay;
reg display_valid;
reg fb_fault;
reg front_bank;
reg bist_passed;
reg bist_done;
reg init_done;
reg sd_initialized;
reg wav_found;
reg pixel_clk;
reg base_pixel_reset;
reg switch_continuous;
reg beep_phase;
reg switch_mute;
reg tone_muted;
reg locked;
reg emergency;
reg visual_enabled;
reg menu_ready;
reg menu_open;
reg audio_paused;
reg wav_source;
reg audio_active;
reg [31:0] wav_bytes;
reg [31:0] audio_reads;
reg [31:0] image_reads;
reg [31:0] wav_loops;
reg [31:0] decoded_pairs;
reg [31:0] swaps;
reg [31:0] checked;
reg [31:0] image_pixels;
reg [31:0] errors;
reg [31:0] refreshes;
reg [31:0] sd_sectors;
reg [31:0] underflow_mem;
reg [31:0] declared_pairs;
reg [31:0] dbg_samples;
reg [31:0] dbg_pcm_packets;
reg [31:0] dbg_nonzero_packets;
reg [31:0] dbg_acr_packets;
reg [31:0] underflow;
reg [31:0] audio_underflows;
reg [31:0] played_pairs;
reg [7:0] sd_error;
reg [7:0] image_error;
reg [7:0] sd_status;
reg [7:0] image_status;
reg [7:0] wav_error;
reg [7:0] wav_status;
reg [7:0] last_command;
reg [4:0] displayed_image;
reg [4:0] selected_image;
reg [4:0] menu_wavs;
reg [4:0] level_l;
reg [4:0] level_r;
reg [5:0] image_count;
reg [5:0] menu_query;
reg [3:0] volume;
reg [3:0] menu_wav_index;
reg [12:0] audio_fifo_used;
reg [19:0] dbg_cts;
reg [15:0] command_count;
reg [1:0] audio_mode;
reg [dmz_contract_pkg::MEM_BITS-1:0] mem_snapshot;
reg [dmz_contract_pkg::AUDIO_BITS-1:0] audio_snapshot;
wire [447:0] mem_status;
wire [63:0] audio_status;
wire uart_tx;
dmz_telemetry dut(
    .catalog_ready(catalog_ready),
    .gallery_loading(gallery_loading),
    .autoplay(autoplay),
    .display_valid(display_valid),
    .fb_fault(fb_fault),
    .front_bank(front_bank),
    .bist_passed(bist_passed),
    .bist_done(bist_done),
    .init_done(init_done),
    .sd_initialized(sd_initialized),
    .wav_found(wav_found),
    .pixel_clk(pixel_clk),
    .base_pixel_reset(base_pixel_reset),
    .switch_continuous(switch_continuous),
    .beep_phase(beep_phase),
    .switch_mute(switch_mute),
    .tone_muted(tone_muted),
    .locked(locked),
    .emergency(emergency),
    .visual_enabled(visual_enabled),
    .menu_ready(menu_ready),
    .menu_open(menu_open),
    .audio_paused(audio_paused),
    .wav_source(wav_source),
    .audio_active(audio_active),
    .wav_bytes(wav_bytes),
    .audio_reads(audio_reads),
    .image_reads(image_reads),
    .wav_loops(wav_loops),
    .decoded_pairs(decoded_pairs),
    .swaps(swaps),
    .checked(checked),
    .image_pixels(image_pixels),
    .errors(errors),
    .refreshes(refreshes),
    .sd_sectors(sd_sectors),
    .underflow_mem(underflow_mem),
    .declared_pairs(declared_pairs),
    .dbg_samples(dbg_samples),
    .dbg_pcm_packets(dbg_pcm_packets),
    .dbg_nonzero_packets(dbg_nonzero_packets),
    .dbg_acr_packets(dbg_acr_packets),
    .underflow(underflow),
    .audio_underflows(audio_underflows),
    .played_pairs(played_pairs),
    .sd_error(sd_error),
    .image_error(image_error),
    .sd_status(sd_status),
    .image_status(image_status),
    .wav_error(wav_error),
    .wav_status(wav_status),
    .last_command(last_command),
    .displayed_image(displayed_image),
    .selected_image(selected_image),
    .menu_wavs(menu_wavs),
    .level_l(level_l),
    .level_r(level_r),
    .image_count(image_count),
    .menu_query(menu_query),
    .volume(volume),
    .menu_wav_index(menu_wav_index),
    .audio_fifo_used(audio_fifo_used),
    .dbg_cts(dbg_cts),
    .command_count(command_count),
    .audio_mode(audio_mode),
    .mem_snapshot(mem_snapshot),
    .audio_snapshot(audio_snapshot),
    .mem_status(mem_status), .audio_status(audio_status), .uart_tx(uart_tx)
);
reg [447:0] expected_mem;
reg [63:0] expected_audio;
reg [31:0] expected[0:23];
reg [7:0] flags;
integer trial, k;
integer seed=32'h45ab67cd;
initial begin
    catalog_ready=0;
    gallery_loading=0;
    autoplay=0;
    display_valid=0;
    fb_fault=0;
    front_bank=0;
    bist_passed=0;
    bist_done=0;
    init_done=0;
    sd_initialized=0;
    wav_found=0;
    pixel_clk=0;
    base_pixel_reset=0;
    switch_continuous=0;
    beep_phase=0;
    switch_mute=0;
    tone_muted=0;
    locked=0;
    emergency=0;
    visual_enabled=0;
    menu_ready=0;
    menu_open=0;
    audio_paused=0;
    wav_source=0;
    audio_active=0;
    wav_bytes=0;
    audio_reads=0;
    image_reads=0;
    wav_loops=0;
    decoded_pairs=0;
    swaps=0;
    checked=0;
    image_pixels=0;
    errors=0;
    refreshes=0;
    sd_sectors=0;
    underflow_mem=0;
    declared_pairs=0;
    dbg_samples=0;
    dbg_pcm_packets=0;
    dbg_nonzero_packets=0;
    dbg_acr_packets=0;
    underflow=0;
    audio_underflows=0;
    played_pairs=0;
    sd_error=0;
    image_error=0;
    sd_status=0;
    image_status=0;
    wav_error=0;
    wav_status=0;
    last_command=0;
    displayed_image=0;
    selected_image=0;
    menu_wavs=0;
    level_l=0;
    level_r=0;
    image_count=0;
    menu_query=0;
    volume=0;
    menu_wav_index=0;
    audio_fifo_used=0;
    dbg_cts=0;
    command_count=0;
    audio_mode=0;
    mem_snapshot=0;
    audio_snapshot=0;
    for(trial=0; trial<128; trial=trial+1) begin
        catalog_ready=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        gallery_loading=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        autoplay=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        display_valid=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        fb_fault=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        front_bank=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        bist_passed=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        bist_done=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        init_done=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        sd_initialized=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        wav_found=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        switch_continuous=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        beep_phase=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        switch_mute=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        tone_muted=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        locked=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        emergency=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        visual_enabled=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        menu_ready=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        menu_open=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        audio_paused=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        wav_source=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        audio_active=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        wav_bytes=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        audio_reads=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        image_reads=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        wav_loops=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        decoded_pairs=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        swaps=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        checked=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        image_pixels=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        errors=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        refreshes=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        sd_sectors=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        underflow_mem=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        declared_pairs=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        dbg_samples=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        dbg_pcm_packets=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        dbg_nonzero_packets=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        dbg_acr_packets=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        underflow=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        audio_underflows=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        played_pairs=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        sd_error=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        image_error=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        sd_status=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        image_status=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        wav_error=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        wav_status=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        last_command=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        displayed_image=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        selected_image=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        menu_wavs=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        level_l=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        level_r=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        image_count=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        menu_query=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        volume=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        menu_wav_index=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        audio_fifo_used=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        dbg_cts=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        command_count=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        audio_mode=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        for(k=0;k<14;k=k+1) mem_snapshot[32*k+:32]=trial==0 ? 0 : trial==1 ? '1 : $random(seed);
        audio_snapshot=trial==0 ? 0 : trial==1 ? '1 : {$random(seed),$random(seed)};
        #1;
        expected_mem={wav_bytes,audio_reads,image_reads,wav_loops,decoded_pairs,
            swaps[12:0],catalog_ready,gallery_loading,autoplay,displayed_image,selected_image,image_count,
            refreshes,sd_sectors,swaps,checked,{sd_error,image_error,sd_status,image_status},
            (display_valid?32'd307200:image_pixels),errors,
            24'd0,fb_fault,(underflow_mem!=0),front_bank,display_valid,bist_passed,bist_done,init_done,sd_initialized};
        expected_audio={declared_pairs,2'd0,wav_found,wav_error,wav_status,audio_fifo_used};
        if(mem_status!==expected_mem) $fatal(1,"Memory snapshot layout trial %0d",trial);
        if(audio_status!==expected_audio) $fatal(1,"Audio snapshot layout trial %0d",trial);
        flags=mem_snapshot[7:0];
        expected[0]=32'h54533154;
        expected[1]={10'd0,audio_mode,switch_continuous,beep_phase,switch_mute,tone_muted,
            locked,flags[7],(underflow!=0),flags[5],flags[4],flags[3],flags[2],flags[1],8'd4};
        expected[2]=dbg_samples; expected[3]=dbg_pcm_packets; expected[4]=dbg_nonzero_packets;
        expected[5]=dbg_acr_packets; expected[6]={12'd0,dbg_cts}; expected[7]={16'd6144,16'd48000};
        expected[8]=mem_snapshot[63:32]; expected[9]=mem_snapshot[95:64]; expected[10]=underflow;
        expected[11]=mem_snapshot[127:96]; expected[12]=mem_snapshot[159:128]; expected[13]=mem_snapshot[287:256];
        expected[14]={command_count,last_command,level_l[4:1],level_r[4:1]};
        expected[15]=audio_underflows; expected[16]=played_pairs; expected[17]=mem_snapshot[319:288];
        expected[18]=mem_snapshot[351:320]; expected[19]=audio_snapshot[31:0];
        expected[20]=mem_snapshot[415:384]; expected[21]=mem_snapshot[447:416];
        expected[22]={menu_wav_index,emergency,visual_enabled,2'd0,menu_ready,menu_open,
            menu_query,menu_wavs,3'd0,volume,audio_paused,wav_source,audio_active,1'b0};
        expected[23]=0;
        for(k=0;k<23;k=k+1) expected[23]=expected[23]^expected[k];
        for(k=0;k<24;k=k+1)
            if(dut.status[32*k+:32]!==expected[k]) $fatal(1,"v4 packet trial %0d word %0d",trial,k);
    end
    $display("PASS telemetry: 128 seeded vectors, complete memory/audio snapshots and all 24 v4 packet words");
    $finish;
end
endmodule
`default_nettype wire
