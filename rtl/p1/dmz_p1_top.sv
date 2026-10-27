module dmz_p1_top(
 input wire clk_50m, run_n, mute_switch, pattern_switch,
 input wire uart_rx, output wire uart_tx,
 output wire [3:0] leds,
 output wire HDMI_CLK_P,HDMI_D0_P,HDMI_D1_P,HDMI_D2_P);
wire pixel_clk, serial_clk, locked;
dmz_video_pll pll(.refclk(clk_50m),.reset(~run_n),.clk0_out(pixel_clk),.clk1_out(serial_clk),.locked(locked));
reg [3:0] reset_pipe;
wire reset_async=~run_n | ~locked;
always @(posedge pixel_clk or posedge reset_async)
 if(reset_async) reset_pipe<=4'b1111;
 else reset_pipe<={reset_pipe[2:0],1'b0};
wire reset=reset_pipe[3];
reg [1:0] mute_sync,pattern_sync;
reg [23:0] heartbeat;
reg [1:0] rx_sync;
always @(posedge pixel_clk) begin
 if(reset) begin mute_sync<=0;pattern_sync<=0;heartbeat<=0;rx_sync<=3;end
 else begin
  mute_sync<={mute_sync[0],mute_switch};
  pattern_sync<={pattern_sync[0],pattern_switch};
  rx_sync<={rx_sync[0],uart_rx};
  heartbeat<=heartbeat+1'b1;
 end
end
assign uart_tx=rx_sync[1];
assign leds={mute_sync[1],~reset,locked,heartbeat[23]};
wire [9:0] x,y;
reg [23:0] rgb;
wire [15:0] gray_scaled = {6'b0,x} * 16'd51;
wire [7:0] gray = (x >= 639) ? 8'd255 : gray_scaled[14:7];
// One registered pixel matches the core's registered data-period pipeline.
always @(posedge pixel_clk) begin
 if(reset) rgb<=0;
 else if(pattern_sync[1]) rgb<={x[7:0],y[7:0],x[7:0]^y[7:0]};
 else if(y>=400) rgb<={3{gray}};
 else if(x<80) rgb<=24'hffffff;
 else if(x<160) rgb<=24'hffff00;
 else if(x<240) rgb<=24'h00ffff;
 else if(x<320) rgb<=24'h00ff00;
 else if(x<400) rgb<=24'hff00ff;
 else if(x<480) rgb<=24'hff0000;
 else if(x<560) rgb<=24'h0000ff;
 else rgb<=0;
end
wire sample_ce;
wire signed [15:0] sample;
wire [15:0] audio_words [1:0];
assign audio_words[0]=sample;
assign audio_words[1]=sample;
dmz_tone tone(.clk(pixel_clk),.reset(reset),.mute(mute_sync[1]),.sample_ce(sample_ce),.sample(sample));
wire [2:0] tmds;
hdmi #(.VIDEO_ID_CODE(1),.VIDEO_REFRESH_RATE(59.5238095238),.AUDIO_RATE(48000),
 .AUDIO_BIT_WIDTH(16),.VENDOR_NAME("DMZ     "),.PRODUCT_DESCRIPTION("Track1 P1       ")) tx(
 .clk_pixel_x5(serial_clk),.clk_pixel(pixel_clk),.clk_audio(sample_ce),.reset(reset),
 .rgb(rgb),.audio_sample_word(audio_words),.tmds(tmds),.tmds_clock(HDMI_CLK_P),
 .cx(x),.cy(y),.frame_width(),.frame_height(),.screen_width(),.screen_height());
assign {HDMI_D2_P,HDMI_D1_P,HDMI_D0_P}=tmds;
endmodule
