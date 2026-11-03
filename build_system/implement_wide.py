from pathlib import Path
r=Path(__file__).resolve().parent.parent
def edit(p,a,b):
 p=r/p;s=p.read_text(encoding='utf-8');assert a in s,(p,a);p.write_text(s.replace(a,b),encoding='utf-8')
def put(p,s): (r/p).write_text(s,encoding='utf-8')
s=(r/'rtl/p2/dmz_p2_pll.v').read_text(encoding='utf-8')
s=s[s.index('`timescale'):].replace('dmz_p2_pll','dmz_wide_pll').replace('  mem_clk,\n  sdram_clk','  unused_mem,\n  unused_sdram').replace('output mem_clk,sdram_clk;','output unused_mem,unused_sdram;')
s=s.replace('.FBCLK_DIV(1)','.FBCLK_DIV(3)').replace('.CLKC0_DIV(40)','.CLKC0_DIV(10)').replace('.CLKC0_CPHASE(39)','.CLKC0_CPHASE(9)').replace('.CLKC1_DIV(8)','.CLKC1_DIV(2)').replace('.CLKC1_CPHASE(7)','.CLKC1_CPHASE(1)')
s=s.replace('.CLKC2_ENABLE("ENABLE")','.CLKC2_ENABLE("DISABLE")').replace('.CLKC3_ENABLE("ENABLE")','.CLKC3_ENABLE("DISABLE")').replace('sdram_clk, mem_clk','unused_sdram, unused_mem')
put('rtl/p2/dmz_wide_pll.v','// 50 MHz input, 750 MHz VCO: 75 MHz pixel / 375 MHz DDR serializer.\n'+s)
edit('rtl/system/dmz_track1_top.sv','dmz_p2_pll pll(.refclk(clk_50m),.reset(~run_n),.clk0_out(pixel_clk),.clk1_out(serial_clk),.mem_clk(mem_clk),.sdram_clk(sdram_clk),.locked(locked));', '''wire memory_locked,video_locked,legacy_pixel,legacy_serial;
dmz_p2_pll pll(.refclk(clk_50m),.reset(~run_n),.clk0_out(legacy_pixel),.clk1_out(legacy_serial),.mem_clk(mem_clk),.sdram_clk(sdram_clk),.locked(memory_locked));
dmz_wide_pll video_pll(.refclk(clk_50m),.reset(~run_n),.clk0_out(pixel_clk),.clk1_out(serial_clk),.unused_mem(),.unused_sdram(),.locked(video_locked));
assign locked=memory_locked&&video_locked;''')
edit('rtl/system/dmz_track1_top.sv','wire [9:0] x,y;', '''wire [10:0] x;wire [9:0] y;
wire [9:0] scene_x,scene_y,scene_ahead2,scene_ahead3;wire course_area,wide_pop;
dmz_wide_mapper canvas(.clk(pixel_clk),.reset(pixel_reset),.x(x),.y(y),.inside_course(course_area),.pair_pop(wide_pop),.sx(scene_x),.sy(scene_y),.ahead2_x(scene_ahead2),.ahead3_x(scene_ahead3));''')
edit('rtl/system/dmz_track1_top.sv','y==480','y==720')
edit('rtl/system/dmz_track1_top.sv','dmz_image_framebuffer fb','dmz_image_framebuffer #(.WIDE_MODE(1)) fb')
edit('rtl/system/dmz_track1_top.sv','wire active=x<640&&y<480;','wire active=course_area;')
edit('rtl/system/dmz_track1_top.sv','wire pop=active&&x[0]','wire pop=wide_pop')
edit('rtl/system/dmz_track1_top.sv',"p565=x[0]?","p565=scene_x[0]?")
edit('rtl/system/dmz_track1_top.sv','dmz_display_control display_controls','dmz_display_control #(.SECOND_CYCLES(75000000)) display_controls')
edit('rtl/system/dmz_track1_top.sv','.blocked(menu_open||emergency_screen),.x(x),.y(y)','.blocked(menu_open||emergency_screen),.x(scene_x),.y(scene_y)')
edit('rtl/system/dmz_track1_top.sv','dmz_osd osd','dmz_osd #(.EXTERNAL_COORDS(1)) osd')
edit('rtl/system/dmz_track1_top.sv','.contrast(contrast),.x(x),.y(y),.menu_open','.contrast(contrast),.x(scene_ahead3),.y(y>=720?10\'d480:scene_y),.menu_open')
edit('rtl/system/dmz_track1_top.sv',"else if(osd_text&&legacy_osd)","else if(!course_area)rgb<=24'h000000;\n else if(osd_text&&legacy_osd)")
edit('rtl/system/dmz_track1_top.sv','dmz_matrix_keys keys','dmz_matrix_keys #(.SLOT_CYCLES(37500)) keys')
edit('rtl/system/dmz_track1_top.sv','dmz_uart_rx command_rx','dmz_uart_rx #(.DIVISOR(651)) command_rx')
edit('rtl/system/dmz_track1_top.sv','.DEFAULT_MODE(1),.DEFAULT_WAV(1)','.DEFAULT_MODE(1),.DEFAULT_WAV(1),.SECOND_CYCLES(75000000),.RESTART_CYCLES(75000)')
edit('rtl/system/dmz_track1_top.sv','dmz_scene_control scene','dmz_scene_control #(.HALF_SECOND(37500000)) scene')
edit('rtl/system/dmz_track1_top.sv','dmz_tone tone','dmz_tone #(.CLOCK_HZ(75000000)) tone')
edit('rtl/system/dmz_track1_top.sv','dmz_status_panel status_panel','dmz_status_panel #(.CANVAS_W(1650),.CANVAS_H(750),.ORIGIN_X(1136),.ORIGIN_Y(192),.SCALE_SHIFT(1)) status_panel')
edit('rtl/system/dmz_track1_top.sv','dmz_audio_visual visualizer','dmz_audio_visual #(.EXTERNAL_COORDS(1)) visualizer')
edit('rtl/system/dmz_track1_top.sv','.left(aw[0]),.right(aw[1]),.x(x),.y(y)','.left(aw[0]),.right(aw[1]),.x(scene_ahead2),.y(scene_y)')
edit('rtl/system/dmz_track1_top.sv','.VIDEO_ID_CODE(1),.VIDEO_REFRESH_RATE(59.5238095238)','.VIDEO_ID_CODE(4),.VIDEO_REFRESH_RATE(60.6060606061),.PIXEL_RATE_OVERRIDE(75000000.0)')
edit('rtl/system/dmz_track1_top.sv','.DIVISOR(217),.PERIOD(12500000)','.DIVISOR(651),.PERIOD(37500000)')
edit('rtl/p1/hdmi_core/hdmi.sv','parameter real VIDEO_REFRESH_RATE = 59.94,','parameter real VIDEO_REFRESH_RATE = 59.94,\n    parameter real PIXEL_RATE_OVERRIDE = 0,')
edit('rtl/p1/hdmi_core/hdmi.sv','localparam real VIDEO_RATE = (VIDEO_ID_CODE','localparam real VIDEO_RATE = PIXEL_RATE_OVERRIDE > 0 ? PIXEL_RATE_OVERRIDE : (VIDEO_ID_CODE')
edit('rtl/p1/dmz_tone.sv','module dmz_tone(','module dmz_tone #(parameter integer CLOCK_HZ=25000000)(')
edit('rtl/p1/dmz_tone.sv','reg [24:0] accumulator;','localparam CW=$clog2(CLOCK_HZ);\nreg [CW-1:0] accumulator;')
edit('rtl/p1/dmz_tone.sv',"25'd24952000",'(CLOCK_HZ-48000)')
edit('rtl/system/dmz_display_control.sv','reg [24:0] ticks;','reg [$clog2(SECOND_CYCLES)-1:0] ticks;')
edit('rtl/system/dmz_media_control.sv','reg [24:0] second_count;','reg [$clog2(SECOND_CYCLES)-1:0] second_count;')
edit('rtl/system/dmz_media_control.sv','reg [15:0] restart_count;','reg [$clog2(RESTART_CYCLES+1)-1:0] restart_count;')
edit('rtl/system/dmz_scene_control.sv','reg [24:0] tick;','reg [$clog2(HALF_SECOND*2)-1:0] tick;')
for p in ['rtl/system/dmz_audio_visual.sv','rtl/system/dmz_osd.sv']:
 name=Path(p).stem
 edit(p,'module '+name+'(','module '+name+' #(parameter EXTERNAL_COORDS=0)(')
 if name.endswith('visual'):
  edit(p,'ax=x>=798?x-798:x+2;','ax=EXTERNAL_COORDS?x:(x>=798?x-798:x+2);')
  edit(p,"ay=x>=798?(y==524?10'd0:y+1'b1):y;","ay=EXTERNAL_COORDS?y:(x>=798?(y==524?10'd0:y+1'b1):y);")
 else:
  # One snapshot per physical vertical blank, independent of mapped source x.
  edit(p,'else if(x==0&&y==480)','else if(EXTERNAL_COORDS?(x==2&&y==480):(x==0&&y==480))')
  # Mapped x=0 outside the course, ahead3=2. Restrict snapshot to one blank row.
  edit(p,'ahead_x=x>=797?x-797:x+3;','ahead_x=EXTERNAL_COORDS?x:(x>=797?x-797:x+3);')
  edit(p,"ahead_y=x>=797?(y==524?10'd0:y+1'b1):y;","ahead_y=EXTERNAL_COORDS?y:(x>=797?(y==524?10'd0:y+1'b1):y);")
edit('rtl/system/dmz_status_panel.sv','module dmz_status_panel(','module dmz_status_panel #(parameter CANVAS_W=800,CANVAS_H=525,ORIGIN_X=576,ORIGIN_Y=128,SCALE_SHIFT=0)(')
edit('rtl/system/dmz_status_panel.sv','input [9:0] x,y,','input [10:0] x,input [9:0] y,')
edit('rtl/system/dmz_status_panel.sv',"wire [9:0] ax=x>=798?x-798:x+2;\nwire [9:0] ay=x>=798?(y==524?10'd0:y+1'b1):y;",'''wire [10:0] physical_x=x>=CANVAS_W-2?11'(x-(CANVAS_W-2)):x+11'd2;
wire [9:0] physical_y=x>=CANVAS_W-2?(y==CANVAS_H-1?10'd0:y+1'b1):y;
wire in_panel=physical_x>=ORIGIN_X&&physical_x<ORIGIN_X+(64<<SCALE_SHIFT)&&physical_y>=ORIGIN_Y&&physical_y<ORIGIN_Y+(160<<SCALE_SHIFT);
wire [9:0] ax=10'(576+((physical_x-ORIGIN_X)>>SCALE_SHIFT));
wire [9:0] ay=10'(128+((physical_y-ORIGIN_Y)>>SCALE_SHIFT));''')
edit('rtl/system/dmz_status_panel.sv','area<=enabled&&ax>=576&&ax<640&&ay>=128&&ay<288;','area<=enabled&&in_panel;')
edit('rtl/p3/dmz_image_framebuffer.sv','module dmz_image_framebuffer(','module dmz_image_framebuffer #(parameter WIDE_MODE=0)(')
edit('rtl/p3/dmz_image_framebuffer.sv','reg [17:0] rd_addr,wr_addr;','reg [17:0] rd_addr,wr_addr,row_base;reg [9:0] out_row;reg [1:0] row_phase;reg read_finished;')
edit('rtl/p3/dmz_image_framebuffer.sv','display_valid && rd_addr<153600','display_valid && (WIDE_MODE?!read_finished:rd_addr<153600)')
edit('rtl/p3/dmz_image_framebuffer.sv','transition_active<=0;wipe_words<=0;rd_x<=0;state<=IDLE;','row_base<=0;out_row<=0;row_phase<=0;read_finished<=1;transition_active<=0;wipe_words<=0;rd_x<=0;state<=IDLE;')
edit('rtl/p3/dmz_image_framebuffer.sv','flush<=31;rd_addr<=0;rd_x<=0;','flush<=31;rd_addr<=0;rd_x<=0;row_base<=0;out_row<=0;row_phase<=0;read_finished<=0;')
edit('rtl/p3/dmz_image_framebuffer.sv',"rd_addr<=rd_addr+8;rd_x<=rd_x==312?0:rd_x+8;dma_reads<=dma_reads+1'b1;",'''rd_x<=rd_x==312?0:rd_x+8;dma_reads<=dma_reads+1'b1;
   if(WIDE_MODE&&rd_x==312)begin
    if(out_row==719)read_finished<=1;
    else begin
     out_row<=out_row+1'b1;
     if(row_phase==0)begin row_phase<=1;rd_addr<=row_base;end
     else begin row_phase<=row_phase==1?2:0;row_base<=row_base+320;rd_addr<=row_base+320;end
    end
   end else rd_addr<=rd_addr+8;''')
edit('scripts/build_system.tcl','add_files ../rtl/p2/dmz_p2_pll.v','add_files ../rtl/p2/dmz_p2_pll.v\nadd_files ../rtl/p2/dmz_wide_pll.v\nadd_files ../rtl/system/dmz_wide_mapper.sv')
for p in ['scripts/build_system.ps1','scripts/recover_system_bit.ps1']:
 edit(p,"'125.000'","'375.000'")
edit('scripts/build_system.ps1',"dmz_p2_pll\\.v", "dmz_(p2|wide)_pll\\.v")
goals='''
## 2026-11-02 用户追加的显示与课件目标

- 当前实施：1280×720宽屏画布，中间960×720等比显示640×480课件，右侧160像素区域容纳状态/参数面板。此项取代上述首版640×480输出限制；原课件配置坐标与素材保持640×480。
- 待后续逐项实施验收：可选择自动连续播放，按课件顺序等待当前播报结束后推进；遇到答题页停止，不自动作答。无声页面的停留规则由配置定义。
- KEY2后续用于连播运行/暂停控制；当前版本原暂停功能暂保留，完成连播任务时再统一修改并说明。
- 前几页的讲解音频增加中文字幕，跟随播报进度；重播、跳页与暂停时字幕应协调恢复。
- 答题解析页增加对应解析播报，资源由配置绑定，并支持重播。
- 波形起点触发稳定及左侧操作区仍待实施。每项完成后先验收，再询问下一项；本轮不同时修改连播、字幕与解析播报。
'''
with (r/'docs/PROJECT_GOALS_LOCKED.md').open('a',encoding='utf-8') as f:f.write(goals)
with (r/'README_AI_HANDOFF.md').open('a',encoding='utf-8') as f:f.write(goals+'\n宽屏实现/时序/上板状态以 docs/WIDESCREEN.md 为准，不得把已写目标当作完成。\n')
