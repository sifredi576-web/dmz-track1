`timescale 1ns/1ps
module tb_osd_menu;
reg clk=0;always #5 clk=~clk;
reg reset=1,rv=0;reg [7:0] rb=0;reg [5:0] images=4,tag=0;reg [4:0] wavs=2;
reg valid=1,ready=1;wire opened,cv;wire [5:0] query;wire [7:0] cb;
wire select_request,autoplay;wire [4:0] selected;reg [31:0] swaps=0;
integer selections=0;reg [4:0] chosen;
dmz_gallery_control gallery(.clk(clk),.reset(reset),.command_valid(cv),.command_byte(cb),
 .catalog_ready(ready),.file_count(images),.selected_index(5'd0),.loader_busy(1'b0),.loader_error(8'd0),.swaps(swaps),
 .select_request(select_request),.requested_index(selected),.autoplay(autoplay),.loading(),.displayed_index());
always @(posedge clk) if(select_request) begin selections=selections+1;chosen=selected;end
dmz_file_menu menu(.clk(clk),.reset(reset),.raw_valid(rv),.raw_byte(rb),.catalog_ready(ready),
 .image_count(images),.wav_count(wavs),.browse_valid(valid),.browse_tag(tag),.menu_open(opened),.query(query),.command_valid(cv),.command_byte(cb));
task send(input [7:0] b);begin @(negedge clk);rv=1;rb=b;@(negedge clk);rv=0;end endtask
reg [9:0] x=0,y=0;wire ink,shade;wire [23:0] color;
reg show_menu=1,show_alert=0;
dmz_osd osd(.emergency(show_alert),.visual_enabled(1'b1),.time_bcd(24'h012345),.brightness(4'd4),.contrast(4'd4),.clk(clk),.reset(reset),.x(x),.y(y),.menu_open(show_menu),.query(6'd1),.browse_tag(6'd1),
 .browse_name(64'h202020324f4d4544),.browse_valid(1'b1),.catalog_ready(1'b1),
 .image_count(6'd4),.displayed_image(5'd1),.wav_count(5'd2),.wav_index(4'd0),.volume(4'd8),
 .audio_paused(1'b0),.tone_muted(1'b0),.wav_source(1'b1),.autoplay(1'b0),.sd_error(8'd0),.image_error(8'd0),.wav_error(8'd0),
 .text_on(ink),.shade_on(shade),.color(color));
task pixel(input integer px,py);begin @(negedge clk);x=10'(px);y=10'(py);@(posedge clk);end endtask
integer fd,px,py;reg [23:0] rgb;
initial begin
 repeat(4) @(negedge clk);reset=0;swaps=1;repeat(3) @(negedge clk);
 send("F");if(!opened||cb!="F") $fatal(1,"Open menu");
 send("I");if(query!=3) $fatal(1,"Previous wrap");
 send("E");if(!opened||cb!="E") $fatal(1,"Stale metadata committed");
 tag=3;send("E");if(opened||cb!=8'h83) $fatal(1,"Indexed image commit");
 repeat(5) @(negedge clk);if(autoplay||selections!=1||chosen!=3) $fatal(1,"Menu selection did not reach gallery controller");
 send("F");send("V");if(query!=32) $fatal(1,"WAV category");
 send("O");if(query!=33) $fatal(1,"Next WAV");
 send("O");if(query!=32) $fatal(1,"WAV wrap");
 send("I");tag=33;send("E");if(opened||cb!=8'hc1) $fatal(1,"Indexed WAV commit");
 send("F");wavs=0;send("E");if(!opened) $fatal(1,"Empty category accepted");
 send("R");if(opened||query!=0) $fatal(1,"Reload menu reset");
 send("I");if(cb!="[") $fatal(1,"Brightness down mapping");
 send("O");if(cb!="]") $fatal(1,"Brightness up mapping");
 send("V");if(cb!="C") $fatal(1,"Contrast mapping");
 send("E");if(cb!="D") $fatal(1,"Default mapping");
 // Latch visual state during vertical blank and warm look-ahead at frame wrap.
 pixel(0,480);pixel(798,524);pixel(799,524);
 fd=$fopen("build/reports/osd_menu_preview.ppm","w");$fwrite(fd,"P3\n640 480\n255\n");
 for(py=0;py<525;py=py+1) for(px=0;px<800;px=px+1) begin
  pixel(px,py);
  if(px==2&&py==0&&(!ink||!shade)) $fatal(1,"First glyph/alignment");
  if(px==100&&py==70&&(ink||shade)) $fatal(1,"OSD changed image outside panels");
  if(px==64&&py==96&&!shade) $fatal(1,"Menu left edge alignment");
  if(px==63&&py==96&&shade) $fatal(1,"Menu leaked left edge");
  if(px==575&&py==96&&!shade) $fatal(1,"Menu right edge alignment");
  if(px==576&&py==96&&shade) $fatal(1,"Menu leaked right edge");
  if(px>=640&&ink) $fatal(1,"Text in blanking");
  if(px<640&&py<480) begin
   rgb=ink?color:shade?24'h182838:24'h305070;
   $fwrite(fd,"%0d %0d %0d\n",rgb[23:16],rgb[15:8],rgb[7:0]);
  end
 end
 $fclose(fd);
 show_menu=0;pixel(0,480);pixel(798,524);pixel(799,524);
 for(px=0;px<=65;px=px+1) pixel(px,96);
 if(osd.scroll!=3||osd.tm!=24'h012345) $fatal(1,"Scroll/time frame snapshot");
 if(shade||ink) $fatal(1,"Closed menu remains visible");
 show_alert=1;pixel(0,480);pixel(798,524);pixel(799,524);
 fd=$fopen("build/reports/emergency_preview.ppm","w");$fwrite(fd,"P3\n640 480\n255\n");
 for(py=0;py<525;py=py+1) for(px=0;px<800;px=px+1) begin
  pixel(px,py);
  if(px<640&&py<480) begin
   rgb=ink?color:24'h600808;
   $fwrite(fd,"%0d %0d %0d\n",rgb[23:16],rgb[15:8],rgb[7:0]);
  end
 end
 $fclose(fd);if(!osd.alert) $fatal(1,"Emergency text state");
 $display("PASS menu indexed BMP/WAV, wrap, empty/stale guards, OSD raster/font/borders/blanking and closed transparency");$finish;
end
initial begin #20000000;$fatal(1,"OSD timeout");end
endmodule

