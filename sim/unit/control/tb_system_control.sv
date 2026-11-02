`timescale 1ns/1ps
module tb_system_control;
reg clk=0,memclk=0,reset=1,rx=1,ms=1,cs=1;
always #20 clk=~clk;always #7 memclk=~memclk;
wire wav_source,audio_paused;wire [3:0] volume;
wire valid,muted,restart,phase,sm,sc;wire [7:0] byte_rx,last;wire [1:0] mode;wire [15:0] count;
dmz_uart_rx uart(.clk(clk),.reset(reset),.rx(rx),.valid(valid),.data(byte_rx));
dmz_media_control #(.SECOND_CYCLES(6000),.RESTART_CYCLES(1000)) control(
 .clk(clk),.reset(reset),.command_valid(valid),.command_byte(byte_rx),.mute_switch(ms),.continuous_switch(cs),
 .tone_muted(muted),.mode(mode),.command_count(count),.last_command(last),.restart(restart),.beep_phase(phase),.switch_mute(sm),.switch_continuous(sc),.wav_source(wav_source),.audio_paused(audio_paused),.volume(volume));
reg [31:0] seq=0;wire [127:0] captured;
always @(posedge memclk) if(reset) seq<=0;else seq<=seq+1;
dmz_status_cdc #(.WIDTH(128),.INTERVAL(5)) cdc(.src_clk(memclk),.src_reset(reset),.src_data({seq,~seq,seq^32'h55aa55aa,seq+32'd1}),.dst_clk(clk),.dst_reset(reset),.dst_data(captured));
integer snapshots=0;
always @(negedge clk) if(!reset&&captured!=0) begin
 if(captured[95:64]!==~captured[127:96]||captured[63:32]!==(captured[127:96]^32'h55aa55aa)||captured[31:0]!==captured[127:96]+1) $fatal(1,"torn CDC status");
 snapshots=snapshots+1;
end
task send(input [7:0] b);
 begin @(negedge clk);rx=0;repeat(217) @(negedge clk);for(integer j=0;j<8;j=j+1) begin rx=b[j];repeat(217) @(negedge clk);end rx=1;repeat(230) @(negedge clk);end
endtask
initial begin
 #200;@(negedge clk);reset=0;repeat(8) @(negedge clk);
 if(!muted||mode!=2) $fatal(1,"must boot muted");
 send("U");if(muted||mode!=1||last!="U"||count!=1) $fatal(1,"unmute command");
 send("M");if(!muted||mode!=2||count!=2) $fatal(1,"mute command");
 send("?");if(!muted||count!=2) $fatal(1,"unknown command changed state");
 send("B");if(mode!=3) $fatal(1,"beep command");wait(!phase);@(negedge clk);if(!muted) $fatal(1,"beep silent half");
 send("S");if(mode!=0||!muted) $fatal(1,"switch mute");ms=0;repeat(5) @(negedge clk);if(muted) $fatal(1,"switch unmute");
 send("R");wait(restart);if(!muted||mode!=2) $fatal(1,"restart must mute");wait(!restart);repeat(5) @(negedge clk);
 if(count!=5||last!="R"||!muted||snapshots<100) $fatal(1,"restart acknowledgement/CDC count");
 send("W");if(!wav_source||muted||audio_paused) $fatal(1,"WAV source/play command");
 send("K");if(!audio_paused) $fatal(1,"audio pause");send("L");if(audio_paused) $fatal(1,"audio resume");
 send("-");if(volume!=7) $fatal(1,"volume decrease");send("+");if(volume!=8) $fatal(1,"volume increase");
 send("H");if(!audio_paused) $fatal(1,"linked pause");send("A");if(audio_paused) $fatal(1,"linked resume");
 send("T");if(wav_source||muted||count!=13) $fatal(1,"tone selection/ack count");
 send("M");send("K");send("J");if(!muted||audio_paused||!wav_source||last!="J"||count!=16)$fatal(1,"Replay must resume without unmuting");
 $display("PASS replay preserves mute; serial control/CDC, WAV/tone selection, volume, independent and linked pause/resume, registered restart");$finish;
end
initial begin #5000000;$fatal(1,"control test timeout");end
endmodule
