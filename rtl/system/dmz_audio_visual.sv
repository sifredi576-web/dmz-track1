// Input is the exact post-volume/mute stereo pair presented to HDMI.
// A completed 128-point page swaps only at vertical blank; capture never stalls audio.
module dmz_audio_visual(input clk,reset,sample_ce,frame_tick,enabled,input [15:0] left,right,input [9:0] x,y,
 output reg ink,shade,output reg [23:0] color,output reg [4:0] level_l,level_r,peak_l,peak_r);
reg [7:0] wave[0:255]; /* fehdl force_ram=1, ram_style="bram" */
function automatic [7:0] physical_wave(input [7:0] a);
 reg [7:0] g;begin g=(a>>1)^a;g[7]=g[7]^g[0];physical_wave=g;end
endfunction
reg front,page_ready;reg [6:0] wp;reg [3:0] decimate;reg [7:0] wave_q;
reg [15:0] maximum_l,maximum_r;
wire [15:0] mag_l=left[15]?(~left+16'd1):left;
wire [15:0] mag_r=right[15]?(~right+16'd1):right;
wire [4:0] live_l=maximum_l[15]?5'd31:maximum_l[14:10];
wire [4:0] live_r=maximum_r[15]?5'd31:maximum_r[14:10];
wire [9:0] ax=x>=798?x-798:x+2;
wire [9:0] ay=x>=798?(y==524?10'd0:y+1'b1):y;
wire [9:0] local_x=ax-64;
always @(posedge clk) begin
 wave_q<=wave[physical_wave({front,local_x[8:2]})];
 if(!reset&&sample_ce&&!page_ready&&decimate==15) wave[physical_wave({~front,wp})]<=left[15:8];
end
always @(posedge clk) begin
 if(reset) begin front<=0;page_ready<=0;wp<=0;decimate<=0;maximum_l<=0;maximum_r<=0;level_l<=0;level_r<=0;peak_l<=0;peak_r<=0;end
 else begin
  if(sample_ce) begin
   decimate<=decimate+1'b1;
   if(mag_l>maximum_l) maximum_l<=mag_l;
   if(mag_r>maximum_r) maximum_r<=mag_r;
   if(!page_ready&&decimate==15) begin if(wp==127) page_ready<=1;else wp<=wp+1'b1;end
  end
  if(frame_tick) begin
   level_l<=live_l;level_r<=live_r;
   maximum_l<=sample_ce?mag_l:16'd0;maximum_r<=sample_ce?mag_r:16'd0;
   peak_l<=live_l>=peak_l?live_l:(peak_l==0?5'd0:peak_l-1'b1);
   peak_r<=live_r>=peak_r?live_r:(peak_r==0?5'd0:peak_r-1'b1);
   if(page_ready) begin front<=~front;page_ready<=0;wp<=0;end
  end
 end
end
reg [9:0] px,py;reg en,valid_page;
reg has_page;
always @(posedge clk) if(reset) has_page<=0;else if(frame_tick&&page_ready) has_page<=1;
wire signed [10:0] amplitude=$signed({{3{wave_q[7]}},wave_q})>>>3;
wire signed [10:0] wave_y=11'sd376-amplitude;
always @(posedge clk) begin
 if(reset) begin px<=0;py<=0;en<=0;valid_page<=0;ink<=0;shade<=0;color<=0;end
 else begin
  px<=ax;py<=ay;en<=enabled;valid_page<=has_page;
  shade<=en&&px>=64&&px<576&&py>=352&&py<416;
  ink<=0;color<=24'h304050;
  if(en&&px>=64&&px<576&&py>=352&&py<416) begin
   if(py==376) begin ink<=1;color<=24'h405060;end
   if(valid_page&&py<400&&($signed({1'b0,py})==wave_y||$signed({1'b0,py})==wave_y+1)) begin ink<=1;color<=24'h50ffff;end
   if(py>=404&&py<412) begin
    if(px>=64&&px<312&&px<64+{level_l,3'b000}) begin ink<=1;color<=24'h40df70;end
    if(px>=328&&px<576&&px<328+{level_r,3'b000}) begin ink<=1;color<=24'hffb050;end
    if((px>=64&&px<312&&px==63+{peak_l,3'b000})||(px>=328&&px<576&&px==327+{peak_r,3'b000})) begin ink<=1;color<=24'hffffff;end
   end
  end
 end
end
endmodule
