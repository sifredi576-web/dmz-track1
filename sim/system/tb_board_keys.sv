`timescale 1ns/1ps
module tb_board_keys;
reg clk=0;always #5 clk=~clk;
reg reset=1;reg [15:0] pressed=0;
wire [3:0] row_low;reg [3:0] col_in;
reg [3:0] low_rows,low_cols;integer it,r,c;
// Switch-network model, including three-corner ghost paths through floating rows.
always @* begin
 low_rows=row_low;low_cols=0;
 for(it=0;it<8;it=it+1)
  for(r=0;r<4;r=r+1) for(c=0;c<4;c=c+1) if(pressed[r*4+c]) begin
   if(low_rows[r]) low_cols[c]=1;
   if(low_cols[c]) low_rows[r]=1;
  end
 col_in=~low_cols;
end
wire kv;wire [3:0] code;
dmz_matrix_keys #(.SLOT_CYCLES(12),.DEBOUNCE_FRAMES(4)) dut(
 .clk(clk),.reset(reset),.col_in(col_in),.row_low(row_low),.key_valid(kv),.key_code(code));
reg uv=0;reg [7:0] ub=0;wire cv;wire [7:0] cb;
wire paused,muted;wire [3:0] volume;wire [15:0] count;
dmz_board_commands merge(.clk(clk),.reset(reset),.key_valid(kv),.key_code(code),
 .audio_paused(paused),.tone_muted(muted),.uart_valid(uv),.uart_byte(ub),.command_valid(cv),.command_byte(cb));
dmz_media_control #(.DEFAULT_MODE(1),.DEFAULT_WAV(1),.RESTART_CYCLES(20)) controls(
 .clk(clk),.reset(reset),.command_valid(cv),.command_byte(cb),.mute_switch(1'b0),.continuous_switch(1'b1),
 .tone_muted(muted),.mode(),.command_count(count),.last_command(),.restart(),.beep_phase(),
 .switch_mute(),.switch_continuous(),.wav_source(),.audio_paused(paused),.volume(volume));
integer events=0,commands=0,last_key=-1;reg [7:0] previous_command,last_command;
always @(posedge clk) if(!reset) begin
 if(kv) begin events=events+1;last_key=int'(code);end
 if(cv) begin commands=commands+1;previous_command=last_command;last_command=cb;end
 if((row_low&(row_low-1'b1))!=0) $fatal(1,"More than one row driven");
end
task cycles(input integer n);repeat(n) @(negedge clk);endtask
task release_keys;begin pressed=0;cycles(350);end endtask
task press_key(input integer key);begin pressed=16'b1<<key;cycles(350);end endtask
integer before_events,before_commands,i;
initial begin
 cycles(5);reset=0;release_keys();
 // All physical key coordinates, long hold single event, stable release re-arms.
 for(i=0;i<16;i=i+1) begin
  before_events=events;press_key(i);
  if(events!=before_events+1||last_key!=i) $fatal(1,"Coordinate %0d failed",i);
  cycles(600);if(events!=before_events+1) $fatal(1,"Held key repeated");release_keys();
 end
 // Bounce too short to qualify.
 before_events=events;
 repeat(8) begin pressed=1;cycles(13);pressed=0;cycles(13);end
 release_keys();if(events!=before_events) $fatal(1,"Bounce generated event");
 press_key(2);if(!paused) $fatal(1,"Pause toggle failed");release_keys();
 press_key(2);if(paused) $fatal(1,"Resume toggle failed");release_keys();
 press_key(3);if(!muted) $fatal(1,"Mute toggle failed");release_keys();
 press_key(3);if(muted) $fatal(1,"Unmute toggle failed");release_keys();
 press_key(4);if(volume!=7) $fatal(1,"Volume down failed");release_keys();
 press_key(5);if(volume!=8) $fatal(1,"Volume up failed");release_keys();
 // Ghost/multiple keys must not generate commands, including partial release.
 before_events=events;pressed=16'h0013;cycles(400);pressed=1;cycles(400);
 if(events!=before_events) $fatal(1,"Multi-key/partial release generated event");
 release_keys();press_key(0);if(events!=before_events+1) $fatal(1,"Did not rearm");release_keys();
 // UART collision: UART byte first, queued key next, exactly once each.
 before_commands=commands;pressed=16'h0002;
 wait(kv);@(negedge clk);uv=1;ub="+";@(negedge clk);uv=0;cycles(10);
 if(commands!=before_commands+2||previous_command!="+"||last_command!="P") $fatal(1,"UART/key arbitration failed");
 release_keys();
 // A held key across reset cannot issue destructive R without full release.
 pressed=16'h0080;reset=1;cycles(10);reset=0;before_events=events;cycles(450);
 if(events!=before_events) $fatal(1,"Held key on reset generated event");
 release_keys();press_key(7);if(last_command!="R") $fatal(1,"Reload key failed");
 $display("PASS 16-key coordinates, debounce, no repeat, ghost lockout, reset-held lockout, media toggles, volume and UART collision");$finish;
end
initial begin #2000000;$fatal(1,"Timeout");end
endmodule
