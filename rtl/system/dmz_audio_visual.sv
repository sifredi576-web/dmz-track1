// Input is the exact post-volume/mute stereo pair presented to HDMI.
// A completed 128-point page swaps only at vertical blank; capture never stalls audio.
module dmz_audio_visual #(parameter EXTERNAL_COORDS=0,PIPELINED=0,TRIGGER_SUPPORT=0)(input clk,reset,sample_ce,frame_tick,enabled,input trigger_enabled,input [15:0] left,right,input [9:0] x,y,
 output reg ink,shade,output reg [23:0] color,output reg [4:0] level_l,level_r,peak_l,peak_r);
reg [23:0] wave[0:255]; /* fehdl force_ram=1, ram_style="bram" */
function automatic [7:0] physical_wave(input [7:0] a);
 reg [7:0] g;begin g=(a>>1)^a;g[7]=g[7]^g[0];physical_wave=g;end
endfunction
reg front,page_ready;reg [6:0] wp;reg [2:0] decimate;reg [23:0] wave_q;reg [11:0] previous_sample;
reg capturing,negative_seen;reg [11:0] trigger_wait;reg trigger_mode_q;
wire trig=TRIGGER_SUPPORT&&trigger_enabled;
// Arm below -128, then acquire on the next rising zero crossing.
// Timeout after 4096 samples (85 ms) provides an AUTO fallback for silence/DC.
wire trigger_start=trig&&!capturing&&!page_ready&&sample_ce&&((negative_seen&&!left[15])||trigger_wait==4095);
wire take_sample=sample_ce&&!page_ready&&(trigger_start||((!trig||capturing)&&decimate==7));
reg [15:0] maximum_l,maximum_r;
wire [15:0] mag_l=left[15]?(~left+16'd1):left;
wire [15:0] mag_r=right[15]?(~right+16'd1):right;
wire [4:0] live_l=maximum_l[15]?5'd31:maximum_l[14:10];
wire [4:0] live_r=maximum_r[15]?5'd31:maximum_r[14:10];
wire [9:0] ax=EXTERNAL_COORDS?x:(x>=798?x-798:x+2);
wire [9:0] ay=EXTERNAL_COORDS?y:(x>=798?(y==524?10'd0:y+1'b1):y);
wire [9:0] local_x=ax-64;
always @(posedge clk) begin
 wave_q<=wave[physical_wave({front,local_x[8:2]})];
 if(!reset&&take_sample) wave[physical_wave({~front,wp})]<={left[15:4],wp==0?left[15:4]:previous_sample};
end
always @(posedge clk) begin
 if(reset) begin capturing<=0;negative_seen<=0;trigger_wait<=0;trigger_mode_q<=0;previous_sample<=0;front<=0;page_ready<=0;wp<=0;decimate<=0;maximum_l<=0;maximum_r<=0;level_l<=0;level_r<=0;peak_l<=0;peak_r<=0;end
 else begin
  trigger_mode_q<=trig;
  if(sample_ce) begin
   if(trig&&!capturing&&!page_ready)begin
    decimate<=0;
    if($signed(left)<-16'sd128)negative_seen<=1;
    if(trigger_wait!=4095)trigger_wait<=trigger_wait+1'b1;
   end else decimate<=decimate+1'b1;
   if(trigger_start)begin capturing<=1;negative_seen<=0;trigger_wait<=0;decimate<=0;end
   if(mag_l>maximum_l) maximum_l<=mag_l;
   if(mag_r>maximum_r) maximum_r<=mag_r;
   if(take_sample) begin previous_sample<=left[15:4];if(wp==127) page_ready<=1;else wp<=wp+1'b1;end
  end
  if(frame_tick) begin
   level_l<=live_l;level_r<=live_r;
   maximum_l<=sample_ce?mag_l:16'd0;maximum_r<=sample_ce?mag_r:16'd0;
   peak_l<=live_l>=peak_l?live_l:(peak_l==0?5'd0:peak_l-1'b1);
   peak_r<=live_r>=peak_r?live_r:(peak_r==0?5'd0:peak_r-1'b1);
   if(page_ready) begin front<=~front;page_ready<=0;wp<=0;capturing<=0;negative_seen<=0;trigger_wait<=0;decimate<=0;end
  end
  if(trig!=trigger_mode_q)begin capturing<=0;negative_seen<=0;trigger_wait<=0;wp<=0;page_ready<=0;decimate<=0;end
 end
end
reg [9:0] px,py;reg en,valid_page;
reg has_page;
always @(posedge clk) if(reset) has_page<=0;else if(frame_tick&&page_ready) has_page<=1;
// Store neighbouring samples together: one BRAM read supplies both endpoints.
// Positive screen coordinates avoid signed-shift ambiguity in the raster path.
// Preserve subpixel amplitude until the last division: no endpoint rounding.
// Offset-binary amplitudes keep all interpolation arithmetic unsigned.
function automatic [8:0] interpolate(input [11:0] a,b,input [2:0] t);
 reg [13:0] aa,bb,n;begin
  aa={2'd0,(a^12'h800)};bb={2'd0,(b^12'h800)};
  case(t)
   0:n=aa<<2;
   1:n=(aa<<1)+aa+bb;
   2:n=(aa+bb)<<1;
   3:n=aa+(bb<<1)+bb;
   default:n=bb<<2;
  endcase
  interpolate=9'd264-{2'd0,n[13:7]};
 end
endfunction
wire [1:0] phase=(px-10'd64)&10'd3;
wire [8:0] line_start=interpolate(wave_q[11:0],wave_q[23:12],{1'b0,phase});
wire [8:0] line_end=interpolate(wave_q[11:0],wave_q[23:12],{1'b0,phase}+3'd1);
reg [8:0] start_q,end_q;reg [9:0] px_q,py_q;reg en_q,valid_q;
always @(posedge clk)begin start_q<=line_start;end_q<=line_end;px_q<=px;py_q<=py;en_q<=en;valid_q<=valid_page;end
wire [8:0] ls=PIPELINED?start_q:line_start,le=PIPELINED?end_q:line_end;
wire [9:0] rx=PIPELINED?px_q:px,ry=PIPELINED?py_q:py;
wire re=PIPELINED?en_q:en,rv=PIPELINED?valid_q:valid_page;
// Calculate level/border hits alongside interpolation, rather than chaining
// threshold addition, coordinate comparisons and colour priority in one cycle.
wire level_row=py>=276&&py<284;
wire left_hit=level_row&&px>=64&&px<312&&px<64+{level_l,3'b000};
wire right_hit=level_row&&px>=328&&px<576&&px<328+{level_r,3'b000};
wire peak_hit=level_row&&((px>=64&&px<312&&px==63+{peak_l,3'b000})||(px>=328&&px<576&&px==327+{peak_r,3'b000}));
wire region_hit=en&&px>=64&&px<576&&py>=128&&py<288;
reg left_q,right_q,peak_q,region_q,center_q;
always @(posedge clk)begin
 left_q<=left_hit;right_q<=right_hit;peak_q<=peak_hit;
 region_q<=region_hit;center_q<=py==200;
end
wire region=PIPELINED?region_q:region_hit;
wire lh=PIPELINED?left_q:left_hit,rh=PIPELINED?right_q:right_hit,ph=PIPELINED?peak_q:peak_hit;
wire center=PIPELINED?center_q:py==200;
wire wh=rv&&ry<272&&((ls==le&&ry=={1'b0,ls})||(ls<le&&ry>={1'b0,ls}&&ry<{1'b0,le})||(ls>le&&ry<={1'b0,ls}&&ry>{1'b0,le}));
always @(posedge clk) begin
 if(reset) begin px<=0;py<=0;en<=0;valid_page<=0;ink<=0;shade<=0;color<=0;end
 else begin
  px<=ax;py<=ay;en<=enabled;valid_page<=has_page;
  shade<=region;
  ink<=region&&(center||wh||lh||rh||ph);
  color<=!region?24'h304050:ph?24'hffffff:rh?24'hffb050:lh?24'h40df70:wh?24'h50ffff:center?24'h405060:24'h304050;
 end
end
endmodule
