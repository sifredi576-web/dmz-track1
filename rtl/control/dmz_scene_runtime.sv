// Runtime scene validator, name resolver, page adapter and configured UI host.
// SCENE payload is immutable in SDRAM at byte 0x200000 after boot CRC commits.
module dmz_scene_runtime #(parameter MS_CYCLES=50000,parameter AUTOPLAY_ON_RESET=0)(input clk,reset,start,
 input [1:0] version,input [20:0] payload_length,input [6:0] resource_count,
 input [5:0] page_count,input [7:0] widget_total,input [4:0] entry_page,
 output reg active,output reg [7:0] error,
 output reg mem_valid,mem_write,output reg [20:0] mem_addr,output reg [255:0] mem_wdata,
 input mem_ready,mem_response,input [255:0] mem_data,
 output wire lookup_enable,output reg [5:0] lookup_query,
 input [5:0] browse_tag,input browse_valid,input [63:0] browse_name,input [31:0] browse_bytes,
 input [5:0] image_count,input [4:0] wav_count,
 input event_valid,input [3:0] event_action,input menu_open,paused,muted,physical_alert,
 input [31:0] swaps,input image_busy,input [7:0] image_error,
 output reg image_select,output reg [4:0] image_index,output reg page_begin,
 output reg audio_select,audio_stop,output reg [3:0] audio_index,
 output reg [41:0] audio_params,input [7:0] audio_params_ack,
 input [8:0] audio_finished,
 output reg control_valid,output reg [7:0] control_byte,
 output wire [3:0] control_count,input compositor_busy,input [2:0] compositor_index,
 output wire [98:0] compositor_widget,
 output reg [4:0] displayed_image,output reg [159:0] status);
localparam WAIT=0,RESOURCE_GET=1,RESOURCE_CHECK=2,LOOKUP=3,PAGE_GET=4,PAGE_CHECK=5,
 WIDGET_GET=6,WIDGET_CHECK=7,OWNER_CHECK=8,LABEL_CHECK=9,BASE_CHECK=10,IDLE=11,
 LOAD_PAGE=12,LOAD_PAGE_CHECK=13,LOAD_WIDGET=14,LOAD_WIDGET_CHECK=15,LOAD_LABEL=16,LOAD_BASE=17,
 LOAD_NEXT=18,IMAGE_START=19,IMAGE_WAIT=20,AUDIO_GET=21,AUDIO_CHECK=22,AUDIO_ACK=23,
 DRAIN_ACK=24,IMAGE_LOOKUP=25,PAGE_BG_TYPE=26,PAGE_AUDIO_TYPE=27,WIDGET_AUDIO_TYPE=28,RESOURCE_SIZE=29,ACCEPT=60,RESPONSE=61,FAILED=63;
reg [5:0] state,return_state;
reg [255:0] record,held,page;
reg [6:0] ri;reg [5:0] pi;reg [7:0] wi;
reg [4:0] resolved[0:63]; /* fehdl force_ram=1, ram_style="bram" */
reg [7:0] requested_resource;
reg [4:0] resolved_q;
function automatic [4:0] encode_index(input [4:0] value);
 begin encode_index={^value,value[3]^value[4],value[2]^value[3],value[1]^value[2],value[0]^value[1]};end
endfunction
function automatic [4:0] decode_index(input [4:0] value);
 reg t;begin
  t=value[4]^value[0]^value[2];
  decode_index[4]=t;decode_index[3]=value[3]^t;
  decode_index[2]=value[2]^value[3]^t;
  decode_index[1]=value[1]^value[2]^value[3]^t;
  decode_index[0]=value[0]^value[1]^value[2]^value[3]^t;
 end
endfunction
wire [4:0] image_resolved_q=decode_index(resolved_q),audio_resolved_q=decode_index(resolved_q);
// Image launch and audio descriptor handling are mutually exclusive FSM phases.
// Share one synchronous read port instead of duplicating the index BRAM.
wire [5:0] resolved_address=(state==IMAGE_LOOKUP||state==IMAGE_START)?page[13:8]:requested_resource[5:0];
reg [3:0] settle;reg [4:0] target_page;

reg [2:0] slot;reg [19:0] label_offset;
reg [98:0] cache[0:7]; /* fehdl force_ram=1, ram_style="bram" */
wire [2:0] focus;
wire [98:0] cache_q;reg [98:0] cache_encoded_q,cache_data;reg cache_write;reg [2:0] cache_write_index,cache_tag;
wire [2:0] cache_index=compositor_busy?compositor_index:focus;
reg [127:0] neighbors;reg [7:0] visible,enabled;
reg [34:0] answer_rect[0:3];
reg loading,first_image;reg [31:0] last_swaps;
reg [7:0] audio_resource;reg [31:0] audio_frames;reg audio_loop;
reg [7:0] ticket;
reg [15:0] ms_clock,elapsed_ms;
reg auto_fired;reg autoplay_mode,autoplay_hold;

reg force_valid;reg [7:0] force_target;
reg [1:0] notice,pending_notice;reg [4:0] notice_page,alert_page,context_page;
reg [2:0] context_focus;
reg context_valid,returning,exit_pending,exit_home,suppress_audio,restore_flag,track_switching;
reg notice_found,alert_found;
reg last_physical,notice_soft;
wire [3:0] nwidgets=page[75:72];
wire [7:0] page_audio=page[23:16];
wire page_quiz=page[95:88]!=255;
wire [2:0] quiz_id=page[90:88];
wire [7:0] answered,correct;wire [3:0] score;
wire choice_valid;wire [1:0] choice;
wire core_page_request,core_audio_request,core_control_request,core_busy;
wire [4:0] core_page,core_current_page;wire [5:0] core_audio;wire [1:0] core_control;
wire [7:0] core_arg,core_error;
reg page_accept,page_loaded,audio_accept,control_accept;
wire notice_request,notice_exit;wire [1:0] notice_priority;
wire [7:0] qaction={4'd0,cache_q[42:39]};
wire autoplay_event=active&&event_valid&&event_action==9&&!menu_open&&notice==0&&!physical_alert;
wire exit_key=notice!=0&&(event_action==6||event_action==7||
 (event_action==5&&qaction==4));
wire [3:0] adapted_event=exit_key?4'd12:event_action;
wire core_event=active&&(force_valid||(event_valid&&event_action!=9&&
 (event_action>=10||exit_key||(state==IDLE&&!menu_open&&cache_tag==focus))));
wire [3:0] core_event_action=force_valid?4'd13:adapted_event;
wire [1:0] requested_notice=physical_alert?2'd2:
 (notice_request&&notice_priority>pending_notice?notice_priority:pending_notice);
wire [20:0] table_bytes=({14'd0,resource_count}+{15'd0,page_count}+{13'd0,widget_total})<<5;
wire [15:0] rw=record[111:96],rh=record[127:112];
wire [31:0] rlength=record[175:144],roffset=record[239:208];
wire [15:0] hx=held[47:32],hy=held[63:48],hw=held[79:64],hh=held[95:80];
wire [7:0] haction=held[103:96],htarget=held[111:104],harg=held[119:112],hflags=held[127:120],hlayer=held[15:8];
wire [15:0] sprite_pixels=rw[8:0]*rh[6:0];
wire [31:0] sprite_length={15'd0,sprite_pixels,1'b0};
reg [31:0] sprite_length_q;
always @(posedge clk)sprite_length_q<=sprite_length;
function automatic [7:0] rb(input integer n);rb=record[n*8+:8];endfunction
function automatic [7:0] hb(input integer n);hb=held[n*8+:8];endfunction
function automatic [7:0] pb(input integer n);pb=page[n*8+:8];endfunction
function automatic [15:0] p16(input integer n);p16=page[n*8+:16];endfunction
function automatic [20:0] resource_addr(input [7:0] index);resource_addr=21'h080000+{10'd0,index,3'd0};endfunction
function automatic [20:0] page_addr(input [7:0] index);page_addr=21'h080000+(({14'd0,resource_count}+{13'd0,index})<<3);endfunction
function automatic [20:0] widget_addr(input [7:0] index);widget_addr=21'h080000+(({14'd0,resource_count}+{15'd0,page_count}+{13'd0,index})<<3);endfunction
task read_word(input [20:0] address,input [5:0] next_state);
 begin mem_valid<=1;mem_write<=0;mem_addr<=address;return_state<=next_state;state<=ACCEPT;end
endtask
task fail(input [7:0] code);
 begin error<=code;active<=0;loading<=0;state<=FAILED;mem_valid<=0;end
endtask
assign lookup_enable=state==LOOKUP;
// Invertible three-bit coding inserts actual logic on direct BRAM data paths.
// Every output depends on multiple payload bits; decoded descriptors are identical.
function automatic [98:0] encode_widget(input [98:0] value);
 integer n;begin
  for(n=0;n<99;n=n+3)begin
   encode_widget[n]=value[n]^value[n+1];
   encode_widget[n+1]=value[n+1]^value[n+2];
   encode_widget[n+2]=value[n]^value[n+1]^value[n+2];
  end
 end
endfunction
function automatic [98:0] decode_widget(input [98:0] value);
 integer n;begin
  for(n=0;n<99;n=n+3)begin
   decode_widget[n]=value[n+1]^value[n+2];
   decode_widget[n+1]=value[n]^value[n+1]^value[n+2];
   decode_widget[n+2]=value[n]^value[n+2];
  end
 end
endfunction
assign cache_q=decode_widget(cache_encoded_q);
assign control_count=nwidgets;
assign compositor_widget=cache_q;
always @(posedge clk)begin
 resolved_q<=resolved[resolved_address];
end
always @(posedge clk)begin
 cache_encoded_q<=cache[cache_index];cache_tag<=cache_index;
 if(cache_write)cache[cache_write_index]<=encode_widget(cache_data);
end
dmz_ui_controller #(.COMPACT_NEIGHBORS(1)) ui(.clk(clk),.reset(reset),.config_ready(active),.entry_page(entry_page),.page_count(page_count),.resource_count(resource_count),
 .event_valid(core_event),.event_action(core_event_action),.external_page(force_target),
 .restore_focus_valid(restore_flag),.restore_focus(context_focus),
 .widget_count(nwidgets),.visible(visible),.enabled(enabled),.neighbors({128'd0,neighbors}),
 .widget_action(cache_q[42:39]),.widget_target(cache_q[50:43]),.widget_arg(cache_q[58:51]),
 .back_page(pb(10)),.page_audio(page_audio),.quiz_valid(page_quiz),.quiz_id(quiz_id),.correct_option(page[97:96]),
 .page_request(core_page_request),.requested_page(core_page),.page_accept(page_accept),.page_loaded(page_loaded),
 .audio_request(core_audio_request),.requested_audio(core_audio),.audio_accept(audio_accept),
 .control_request(core_control_request),.control_action(core_control),.control_arg(core_arg),.control_accept(control_accept),
 .current_page(core_current_page),.focus(focus),.answered(answered),.correct(correct),.score(score),.choice_valid(choice_valid),.selected_choice(choice),
 .notice_request(notice_request),.notice_priority(notice_priority),.notice_exit(notice_exit),.error(core_error),.busy(core_busy));
always @(posedge clk)if(!reset)begin
 if(state==RESPONSE&&mem_response)record<=mem_data;
 if(state==PAGE_CHECK||state==WIDGET_CHECK||state==LOAD_WIDGET_CHECK)held<=record;
 if(state==LOAD_PAGE_CHECK)page<=record;
end
integer k;
always @*begin
 status=0;status[0]=active;status[1]=loading;status[2]=1'(pb(3) >> 1);status[3]=1'(pb(3) >> 2);
 status[4]=choice_valid;status[5]=page_quiz;status[6]=page_quiz&&answered[quiz_id];status[7]=page_quiz&&correct[quiz_id];
 status[10:8]=focus;status[15:11]=core_current_page;status[21:16]=page_count;status[25:22]=score;status[29:26]=4'(pb(22) >> 0);
 if(nwidgets!=0&&cache_tag==focus)status[64:30]=cache_q[34:0];
 if(choice_valid)status[99:65]=answer_rect[choice];
 status[107:100]=8'(p16(14) >> 0);status[116:108]=9'(p16(16) >> 0);
 status[126:117]=10'(p16(18) >> 0);status[135:127]=9'(p16(20) >> 0);
 status[143:136]=error!=0?error:core_error;status[145:144]=notice;
 status[146]=active&&(notice==2||pending_notice==2||physical_alert);
 status[147]=notice==2&&!loading&&target_page==alert_page&&pending_notice==0;
 status[148]=notice!=0||pending_notice!=0||track_switching;
 status[149]=core_busy;status[150]=autoplay_mode;status[151]=autoplay_hold;status[152]=pb(4)!=255;
end
always @(posedge clk)begin
 if(reset)begin
  state<=WAIT;return_state<=WAIT;ri<=0;pi<=0;wi<=0;settle<=0;
  active<=0;error<=0;mem_valid<=0;mem_write<=0;mem_addr<=0;mem_wdata<=0;
  lookup_query<=0;target_page<=0;requested_resource<=0;slot<=0;label_offset<=0;
  cache_write<=0;cache_data<=0;cache_write_index<=0;neighbors<=0;visible<=0;enabled<=0;
  loading<=1;first_image<=1;last_swaps<=0;image_select<=0;image_index<=0;page_begin<=0;displayed_image<=0;
  audio_select<=0;audio_stop<=0;audio_index<=0;audio_params<=0;audio_resource<=255;audio_frames<=0;audio_loop<=0;ticket<=0;
  control_valid<=0;control_byte<=0;page_accept<=0;page_loaded<=0;audio_accept<=0;control_accept<=0;
  autoplay_mode<=AUTOPLAY_ON_RESET;autoplay_hold<=0;ms_clock<=0;elapsed_ms<=0;auto_fired<=0;force_valid<=0;force_target<=0;
  notice<=0;pending_notice<=0;notice_page<=31;alert_page<=31;context_page<=0;context_focus<=0;
  context_valid<=0;returning<=0;exit_pending<=0;exit_home<=0;suppress_audio<=0;last_physical<=0;notice_soft<=0;restore_flag<=0;track_switching<=0;notice_found<=0;alert_found<=0;
  for(k=0;k<4;k=k+1)answer_rect[k]<=0;
 end else begin
  image_select<=0;page_begin<=0;audio_select<=0;audio_stop<=0;control_valid<=0;
  page_accept<=0;page_loaded<=0;audio_accept<=0;control_accept<=0;cache_write<=0;force_valid<=0;
  if(state==IDLE&&!loading&&!core_busy&&!page_loaded&&!core_page_request)restore_flag<=0;
  if(active)begin
   // KEY2 starts, pauses, or resumes optional course autoplay only.
   // Keep this event out of the widget controller; it is not a quiz answer.
   if(autoplay_event)begin
    autoplay_mode<=1;autoplay_hold<=autoplay_mode&&!autoplay_hold;
    if(!autoplay_mode)begin elapsed_ms<=0;auto_fired<=0;end
   end
   if(event_valid&&event_action==7&&notice==0&&!physical_alert)begin
    autoplay_mode<=AUTOPLAY_ON_RESET;autoplay_hold<=0;
   end
   last_physical<=physical_alert;
   if(notice_request&&notice_priority>notice)pending_notice<=notice_priority;
   if(notice_request&&notice_priority==2)notice_soft<=1;
   if(notice_exit)exit_pending<=1;
   if(event_valid&&event_action==7&&notice!=0)exit_home<=1;
   if(last_physical&&!physical_alert&&notice==2&&!notice_soft)exit_pending<=1;
   if(ms_clock==MS_CYCLES-1)begin ms_clock<=0;
    if(state==IDLE&&!paused&&!autoplay_event&&!(page[27]&&autoplay_hold)&&notice==0&&elapsed_ms!=65535)elapsed_ms<=elapsed_ms+1'b1;
   end else ms_clock<=ms_clock+1'b1;
  end else last_physical<=0;
  case(state)
   WAIT:if(start)begin
    if(version!=2)fail(8'h10);
    else if(payload_length[4:0]!=0||payload_length<table_bytes)fail(8'h11);
    else begin ri<=0;state<=RESOURCE_GET;end
   end
   RESOURCE_GET:if(ri==resource_count)begin pi<=0;state<=PAGE_GET;end
    else read_word(resource_addr({1'b0,ri}),RESOURCE_CHECK);
   RESOURCE_CHECK:state<=RESOURCE_SIZE;
   RESOURCE_SIZE:begin
    if(rb(11)<1||rb(11)>3||record[255:240]!=0||record[143:128]!=0)fail(8'h12);
    else begin
     if(rb(11)==3)begin
      if(rw==0||rw>272||rh==0||rh>64||rlength!=sprite_length_q||roffset<table_bytes||roffset[4:0]!=0||
         {1'b0,roffset}+{1'b0,((rlength+32'd31)&32'hffffffe0)}>{12'd0,payload_length})fail(8'h13);
      else begin ri<=ri+1'b1;state<=RESOURCE_GET;end
     end else if((rb(11)==1&&record[87:64]!=24'h504d42)||(rb(11)==2&&record[87:64]!=24'h564157))fail(8'h12);
     else if((rb(11)==1&&image_count==0)||(rb(11)==2&&wav_count==0))fail(8'h14);
     else begin lookup_query<=rb(11)==2?6'd32:6'd0;settle<=8;state<=LOOKUP;end
    end
   end
   LOOKUP:if(settle!=0)settle<=settle-1'b1;
    else if(browse_valid&&browse_tag==lookup_query)begin
     if(browse_name==record[63:0])begin
      if(browse_bytes!=rlength)fail(8'h15);
      else begin resolved[ri[5:0]]<=encode_index(lookup_query[4:0]);ri<=ri+1'b1;state<=RESOURCE_GET;end
     end else if(({1'b0,lookup_query[4:0]}+1)>=(lookup_query[5]?{1'b0,wav_count}:image_count))fail(8'h14);
     else begin lookup_query[4:0]<=lookup_query[4:0]+1'b1;settle<=8;end
    end
   PAGE_GET:if(pi==page_count)begin wi<=0;state<=WIDGET_GET;end else read_word(page_addr({2'd0,pi}),PAGE_CHECK);
   PAGE_CHECK:begin
    if(rb(0)!=pi||rb(1)>=resource_count||
      (rb(2)!=255&&(rb(2)>=resource_count))||
      (rb(3)&8'hf0)!=0||(rb(4)!=255&&rb(4)>=page_count)||rb(5)!=0||rb(9)>8||
      {1'b0,rb(8)}+{1'b0,rb(9)}>{1'b0,widget_total}||(rb(10)!=255&&rb(10)>=page_count)||
      (rb(11)!=255&&(rb(11)>7||rb(12)>3||rb(4)!=255))||(rb(11)==255&&rb(12)!=255)||rb(13)>2||
      record[127:112]>128||record[143:128]>420||record[159:144]>480||record[175:160]>448||rb(22)==0||rb(22)>8||
      record[255:184]!=0||(rb(13)!=0&&rb(2)!=255))fail(8'h16);
    else begin
     if(rb(13)==1)begin notice_page<=pi[4:0];notice_found<=1;end
     if(rb(13)==2)begin alert_page<=pi[4:0];alert_found<=1;end
     read_word(resource_addr(rb(1)),PAGE_BG_TYPE);
    end
   end
   PAGE_BG_TYPE:if(rb(11)!=1)fail(8'h16);
    else if(hb(2)!=255)read_word(resource_addr(hb(2)),PAGE_AUDIO_TYPE);
    else begin pi<=pi+1'b1;state<=PAGE_GET;end
   PAGE_AUDIO_TYPE:if(rb(11)!=2)fail(8'h16);else begin pi<=pi+1'b1;state<=PAGE_GET;end
   WIDGET_GET:if(wi==widget_total)begin active<=1;state<=IDLE;end else read_word(widget_addr(wi),WIDGET_CHECK);
   WIDGET_CHECK:begin
    
    if(rb(0)>=page_count||rb(1)>3||rb(2)>=resource_count||rb(3)>=resource_count||
       record[47:32]>=640||record[63:48]>=480||record[79:64]==0||record[95:80]==0||
       {1'b0,record[47:32]}+{1'b0,record[79:64]}>640||{1'b0,record[63:48]}+{1'b0,record[95:80]}>480||
       rb(12)<1||rb(12)>9||(rb(15)&8'hfc)!=0||record[255:160]!=0||
       ((rb(12)==1||rb(12)==9)&&rb(13)>=page_count)||
       (rb(12)==2&&(rb(13)>=resource_count))||
       ((rb(12)>=3&&rb(12)<=8)&&rb(13)!=255)|| (rb(12)==3&&rb(14)>3))fail(8'h17);
    else read_word(page_addr(rb(0)),OWNER_CHECK);
   end
   OWNER_CHECK:if(wi<rb(8)||{1'b0,wi}>={1'b0,rb(8)}+{1'b0,rb(9)}||
     (hb(16)!=255&&hb(16)>=rb(9))||(hb(17)!=255&&hb(17)>=rb(9))||
     (hb(18)!=255&&hb(18)>=rb(9))||(hb(19)!=255&&hb(19)>=rb(9))||
     ((haction==3||haction==9)&&rb(11)==255)||
     (rb(13)!=0&&haction!=4&&haction!=6&&haction!=7&&haction!=8))fail(8'h18);
    else read_word(resource_addr(hb(2)),LABEL_CHECK);
   LABEL_CHECK:if(rb(11)!=3||rw!=hw||rh!=hh)fail(8'h19);else read_word(resource_addr(hb(3)),BASE_CHECK);
   BASE_CHECK:if(rb(11)!=3||rw!=hw||rh!=hh)fail(8'h19);
    else if(haction==2)read_word(resource_addr(htarget),WIDGET_AUDIO_TYPE);
    else begin wi<=wi+1'b1;state<=WIDGET_GET;end
   WIDGET_AUDIO_TYPE:if(rb(11)!=2)fail(8'h17);else begin wi<=wi+1'b1;state<=WIDGET_GET;end
   IDLE:begin
    if(requested_notice>notice&&requested_notice!=0&&!core_busy)begin
     if(!(requested_notice==2?alert_found:notice_found))begin pending_notice<=0;end
     else begin
      if(!context_valid)begin context_valid<=1;context_page<=target_page;context_focus<=focus;end
      notice<=requested_notice;pending_notice<=0;force_target<={3'd0,(requested_notice==2?alert_page:notice_page)};
      force_valid<=1;loading<=1;returning<=0;suppress_audio<=0;exit_pending<=0;exit_home<=0;
     end
    end else if(exit_pending&&context_valid&&!core_busy)begin
     exit_pending<=0;
     if(physical_alert)exit_home<=0;
     else begin force_target<=exit_home?{3'd0,entry_page}:{3'd0,context_page};force_valid<=1;returning<=1;
      suppress_audio<=!exit_home;restore_flag<=!exit_home;loading<=1;end
    end else if(core_page_request)begin
     target_page<=core_page;page_accept<=1;loading<=1;elapsed_ms<=0;auto_fired<=0;
     read_word(page_addr({3'd0,core_page}),LOAD_PAGE_CHECK);
    end else if(core_audio_request)begin
     if(notice!=0||suppress_audio)begin audio_accept<=1;suppress_audio<=0;state<=DRAIN_ACK;end
     else begin requested_resource<={2'd0,core_audio};read_word(resource_addr({2'd0,core_audio}),AUDIO_CHECK);end
    end else if(core_control_request)begin
     control_accept<=1;control_valid<=1;state<=DRAIN_ACK;
     control_byte<=core_control==0?(paused?"A":"H"):core_control==1?(muted?"U":"M"):(core_arg[7]?"-":"+");
    end else if(!core_busy&&!paused&&!event_valid&&!autoplay_event&&!menu_open&&!track_switching&&!page_quiz&&notice==0&&!auto_fired&&pb(4)!=255&&
      (!page[27]||(autoplay_mode&&!autoplay_hold))&&
      ((p16(6)!=0&&elapsed_ms>=p16(6))||(p16(6)==0&&audio_finished[8]&&audio_finished[7:0]==ticket)))begin
     force_target<=pb(4);force_valid<=1;loading<=1;auto_fired<=1;
    end
   end
   LOAD_PAGE_CHECK:begin slot<=0;visible<=0;enabled<=0;neighbors<=0;
    for(k=0;k<4;k=k+1)answer_rect[k]<=0;
    if(rb(9)==0)state<=IMAGE_LOOKUP;else begin wi<=rb(8);state<=LOAD_WIDGET;end
   end
   LOAD_WIDGET:read_word(widget_addr(wi),LOAD_WIDGET_CHECK);
   LOAD_WIDGET_CHECK:begin read_word(resource_addr(rb(2)),LOAD_LABEL);end
   LOAD_LABEL:begin label_offset<=roffset[19:0];read_word(resource_addr(hb(3)),LOAD_BASE);end
   LOAD_BASE:begin
    cache_write<=1;cache_write_index<=slot;
    cache_data<={label_offset,roffset[19:0],harg,htarget,haction[3:0],hflags[1],hflags[0],hlayer[1:0],hh[6:0],hw[8:0],hy[8:0],hx[9:0]};
    visible[slot]<=hflags[1];enabled[slot]<=hflags[0];
    // At most eight slots: 0..7 are valid; all other byte values mean no edge.
    for(k=0;k<4;k=k+1)neighbors[slot*16+k*4+:4]<=held[128+k*8+:8]<8?{1'b0,held[128+k*8+:3]}:4'hf;
    if(haction==3)answer_rect[harg[1:0]]<={hh[6:0],hw[8:0],hy[8:0],hx[9:0]};
    state<=LOAD_NEXT;
   end
   LOAD_NEXT:if({1'b0,slot}+1<nwidgets)begin slot<=slot+1'b1;wi<=wi+1'b1;state<=LOAD_WIDGET;end else state<=IMAGE_LOOKUP;
   IMAGE_LOOKUP:state<=IMAGE_START;
   IMAGE_START:if(first_image||!image_busy)begin
    image_index<=image_resolved_q;image_select<=1;page_begin<=1;last_swaps<=swaps;first_image<=0;state<=IMAGE_WAIT;
   end
   IMAGE_WAIT:if(image_error!=0)fail(8'h21);
    else if(swaps!=last_swaps)begin
     displayed_image<=image_index;page_loaded<=1;loading<=0;elapsed_ms<=0;ms_clock<=0;auto_fired<=0;
     if(returning)begin notice<=0;pending_notice<=0;notice_soft<=0;context_valid<=0;returning<=0;exit_home<=0;if(page_audio==255)suppress_audio<=0;end
     if(notice==0&&!returning)track_switching<=1;
     if(page_audio==255&&notice==0&&!returning)begin
      requested_resource<=255;audio_frames<=0;audio_loop<=0;ticket<=ticket+1'b1;
      audio_params<={ticket+8'd1,1'b0,1'b0,32'd0};state<=AUDIO_ACK;
     end else state<=IDLE;
    end
   AUDIO_CHECK:if(rb(11)!=2||record[239:208]==0)begin audio_accept<=1;error<=8'h22;state<=IDLE;end
    else begin
     audio_resource<=requested_resource;audio_index<=audio_resolved_q[3:0];audio_frames<=record[239:208];
     track_switching<=1;audio_loop<=page_audio==requested_resource&&1'(pb(3) >> 0);ticket<=ticket+1'b1;
     audio_params<={ticket+8'd1,1'b1,(page_audio==requested_resource&&1'(pb(3) >> 0)),record[239:208]};state<=AUDIO_ACK;
    end
   AUDIO_ACK:if(audio_params_ack==ticket)begin
    audio_accept<=core_audio_request;track_switching<=0;
    if(requested_resource==255)begin audio_stop<=1;audio_resource<=255;end else audio_select<=1;
    state<=core_audio_request?DRAIN_ACK:IDLE;
   end
   DRAIN_ACK:if(!core_audio_request&&!core_control_request)state<=IDLE;
   ACCEPT:if(mem_ready)begin mem_valid<=0;state<=RESPONSE;end
   RESPONSE:if(mem_response)begin state<=return_state;end
   FAILED:begin end
   default:fail(8'hff);
  endcase
 end
end
endmodule
