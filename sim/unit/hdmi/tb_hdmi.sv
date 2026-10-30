`timescale 1ns/1ps
module tb_hdmi;
reg run_n=0,mute=0;
reg pixel_clk=0,serial_clk=0;
always #20 pixel_clk=~pixel_clk;
always #4 serial_clk=~serial_clk;
wire reset=~run_n;
wire [9:0] x,y;
wire [2:0] lanes;
wire tclk,sample_ce;
wire signed [15:0] sample;
wire [15:0] audio_words[1:0];
assign audio_words[0]=sample;assign audio_words[1]=sample;
dmz_tone tone(.clk(pixel_clk),.reset(reset),.mute(mute),.sample_ce(sample_ce),.sample(sample));
hdmi #(.VIDEO_ID_CODE(1),.VIDEO_REFRESH_RATE(59.5238095238),.AUDIO_RATE(48000),.AUDIO_BIT_WIDTH(16)) tx(
 .clk_pixel_x5(serial_clk),.clk_pixel(pixel_clk),.clk_audio(sample_ce),.reset(reset),
 .rgb({x[7:0],y[7:0],x[7:0]^y[7:0]}),.audio_sample_word(audio_words),.tmds(lanes),.tmds_clock(tclk),
 .cx(x),.cy(y),.frame_width(),.frame_height(),.screen_width(),.screen_height());
`define P tx.true_hdmi_output
integer cycles=0,samples=0,frames=0,active=0;
integer packets[256];
integer last_sample=0,delta;
reg sample_seen=0;
reg signed [15:0] previous_samples[48];
integer checksum;
integer pcm_samples=0,nonzero_pcm=0;
reg [31:0] received_header;
reg [63:0] received_sub[4];
function automatic [7:0] ecc(input [55:0] body,input integer bits);
 reg [7:0] e;
 begin
  e=0;
  for(integer n=0;n<bits;n=n+1) e=(e>>1)^((e[0]^body[n])?8'h83:8'h00);
  ecc=e;
 end
endfunction
integer symbol_count=0,bit_index=0;
reg [9:0] expected[4];
reg capturing=0;
reg pending_load=0;
reg [9:0] pending[4];
integer i;
// Capture words when the PHY loads, then compare all ten outgoing bits after ODDR latency.
always @(posedge serial_clk) begin
 if(reset) begin capturing=0;pending_load=0;bit_index=0;end
 else begin
  if(pending_load) begin
   for(i=0;i<4;i=i+1) expected[i]=pending[i];
   capturing=1;bit_index=0;symbol_count=symbol_count+1;
  end
  pending_load=tx.serializer.meta ^ tx.serializer.sync;
  if(pending_load) begin
   for(i=0;i<3;i=i+1) pending[i]=tx.tmds_internal[i];
   pending[3]=10'b0000011111;
  end
 end
 #1;
 if(capturing) begin
  for(i=0;i<3;i=i+1) if(lanes[i]!==expected[i][bit_index]) $fatal(1,"serializer rise lane=%0d bit=%0d",i,bit_index);
  if(tclk!==expected[3][bit_index]) $fatal(1,"clock rise");
  bit_index=bit_index+1;
 end
end
always @(negedge serial_clk) begin
 #1;
 if(capturing && !reset) begin
  for(integer j=0;j<3;j=j+1) if(lanes[j]!==expected[j][bit_index]) $fatal(1,"serializer fall");
  if(tclk!==expected[3][bit_index]) $fatal(1,"clock fall");
  bit_index=bit_index+1;
  if(bit_index==10) capturing=0;
 end
end
always @(negedge pixel_clk) if(reset) begin sample_seen=0; end else begin
 cycles=cycles+1;
 if(x>=800 || y>=525) $fatal(1,"raster bounds");
 if(x<640 && y<480) active=active+1;
 if(x==799 && y==524) begin
  frames=frames+1;
  if(frames>1 && active!=307200) $fatal(1,"active pixels %0d",active);
  active=0;
 end
 if(sample_ce) begin
  samples=samples+1;delta=cycles-last_sample;
  if(sample_seen && delta!=520 && delta!=521) $fatal(1,"audio interval %0d",delta);
  last_sample=cycles; sample_seen=1;
  if(samples>48 && !mute && sample!==previous_samples[(samples-1)%48]) $fatal(1,"tone period");
  previous_samples[(samples-1)%48]=sample;
  if(sample>4095 || sample < -4095) $fatal(1,"amplitude");
  if(mute && cycles>900000 && sample!=0) $fatal(1,"mute");
 end
 if(`P.data_island_period) begin
  received_header[`P.packet_pixel_counter]=`P.packet_data[0];
  for(integer k=0;k<4;k=k+1) begin
   received_sub[k][2*`P.packet_pixel_counter]=`P.packet_data[k+1];
   received_sub[k][2*`P.packet_pixel_counter+1]=`P.packet_data[k+5];
  end
  if(`P.packet_pixel_counter==31) begin
   if(received_header[31:24]!=ecc({32'd0,received_header[23:0]},24)) $fatal(1,"header BCH");
   for(integer k=0;k<4;k=k+1)
    if(received_sub[k][63:56]!=ecc(received_sub[k][55:0],56)) $fatal(1,"body BCH packet=%0h sub=%0d",received_header[7:0],k);
  end
 end
 if(`P.data_island_period && `P.packet_pixel_counter==0) begin
  packets[`P.header[7:0]]=packets[`P.header[7:0]]+1;
  if(`P.header[7:0]==2) begin
   if(`P.header[11:8]!=15) $fatal(1,"sample present");
   for(integer k=0;k<4;k=k+1) begin
    pcm_samples=pcm_samples+1;
    if(`P.sub[k][23:0]!=`P.sub[k][47:24]) $fatal(1,"stereo mismatch");
    if(`P.sub[k][7:0]!=0 || `P.sub[k][31:24]!=0) $fatal(1,"PCM alignment");
    if((^`P.sub[k][23:0])^(^`P.sub[k][51:48])) $fatal(1,"left parity");
    if((^`P.sub[k][47:24])^(^`P.sub[k][55:52])) $fatal(1,"right parity");
    if(`P.sub[k][48] || `P.sub[k][52]) $fatal(1,"invalid audio sample");
    if(`P.sub[k][23:0]!=0) nonzero_pcm=nonzero_pcm+1;
   end
  end
  if(`P.header[7]) begin
   checksum=int'(`P.header[7:0])+int'(`P.header[15:8])+int'(`P.header[23:16]);
   for(integer k=0;k<28;k=k+1) checksum=checksum+int'(`P.sub[k/7][(k%7)*8+:8]);
   if((checksum & 255)!=0) $fatal(1,"InfoFrame checksum type %0h",`P.header[7:0]);
  end
  if(`P.header[7:0]==1 && cycles>100000) begin
   if({`P.sub[0][35:32],`P.sub[0][47:40],`P.sub[0][55:48]}!=6144) $fatal(1,"ACR N");
   if({`P.sub[0][11:8],`P.sub[0][23:16],`P.sub[0][31:24]}!=25000) $fatal(1,"ACR CTS packing");
   if(`P.packet_picker.audio_clock_regeneration_packet.cycle_time_stamp!=25000) $fatal(1,"CTS %0d",`P.packet_picker.audio_clock_regeneration_packet.cycle_time_stamp);
  end
 end
end
initial begin
 for(integer j=0;j<256;j=j+1) packets[j]=0;
 #200 run_n=1;
 wait(cycles==840000); mute=1;
 wait(frames==3); // Count completed frames, not a simulator-dependent endpoint cycle.
 @(negedge pixel_clk);
 if(frames<3 || samples<2418 || samples>2420) $fatal(1,"counts frames=%0d samples=%0d",frames,samples);
 if(packets[1]<40 || packets[2]<590 || packets[130]<2 || packets[131]<2 || packets[132]<2) $fatal(1,"missing packets");
 if(nonzero_pcm<1000) $fatal(1,"PCM unexpectedly silent");
 $display("PASS BCH parity, PCM format/nonzero=%0d of %0d, InfoFrame checksums, ACR N/CTS",nonzero_pcm,pcm_samples);
 $display("PASS frames=%0d samples=%0d serializer_symbols=%0d ACR=%0d PCM=%0d AVI=%0d SPD=%0d AUDIO_INFO=%0d",frames,samples,symbol_count,packets[1],packets[2],packets[130],packets[131],packets[132]);
 run_n=0;#400;run_n=1;#100000;
 if(reset || x>=800 || y>=525) $fatal(1,"reset recovery");
 $display("PASS reset recovery and mute");$finish;
end
initial begin #60000000; $fatal(1,"timeout"); end
endmodule
