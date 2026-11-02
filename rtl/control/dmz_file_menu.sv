// Browse without loading. E commits the indexed file only after metadata returns
// with a matching tag. F stops automatic slides; WAV continues during browsing.
module dmz_file_menu(
 input clk,reset,course_mode,force_close,input raw_valid,input [7:0] raw_byte,
 input catalog_ready,input [5:0] image_count,input [4:0] wav_count,
 input browse_valid,input [5:0] browse_tag,
 output reg menu_open,output reg [5:0] query,output reg [1:0] section,setting_cursor,
 output reg command_valid,output reg [7:0] command_byte);
wire [5:0] total=query[5]?{1'b0,wav_count}:image_count;
always @(posedge clk) begin
 if(reset) begin section<=0;setting_cursor<=0;menu_open<=0;query<=0;command_valid<=0;command_byte<=0;end
 else begin
  command_valid<=0;
  if(raw_valid) begin
   command_valid<=1;command_byte<=raw_byte;
   case(raw_byte)
    "Q","q","J","j":menu_open<=0;
    "R","r":begin menu_open<=0;query<=0;section<=0;setting_cursor<=0;end
    "F","f":begin menu_open<=~menu_open;if(course_mode)begin section<=2;setting_cursor<=0;end end
    "V","v":if(menu_open) begin
     section<=course_mode?(section==2?2'd3:2'd2):section+1'b1;setting_cursor<=0;query<=section==0?6'd32:6'd0;
    end else command_byte<="C";
    "{","}":if(menu_open) begin
     command_valid<=0;
     if(section<2)begin
      section<=raw_byte=="}"?section+1'b1:section-1'b1;
      setting_cursor<=0;
      query<=((raw_byte=="}"&&section==0)||(raw_byte=="{"&&section==2))?6'd32:6'd0;
     end else if(section==2)begin
      command_valid<=1;
      case(setting_cursor)
       0:command_byte<=raw_byte=="}"?"]":"[";
       1:command_byte<=raw_byte=="}"?"C":"c";
       default:command_byte<="D";
      endcase
     end
    end else command_valid<=0;
    "I","i":if(!menu_open) command_byte<="[";else if(section>=2)setting_cursor<=setting_cursor==0?2:setting_cursor-1'b1;else if(catalog_ready&&total!=0) query[4:0]<=query[4:0]==0?5'(total-1'b1):query[4:0]-1'b1;
    "O","o":if(!menu_open) command_byte<="]";else if(section>=2)setting_cursor<=setting_cursor==2?0:setting_cursor+1'b1;else if(catalog_ready&&total!=0) query[4:0]<=({1'b0,query[4:0]}+1'b1>=total)?5'd0:query[4:0]+1'b1;
    "E","e":if(!menu_open) command_byte<="D";
     else if(section==2)case(setting_cursor)
      0:command_byte<="]";1:command_byte<="C";default:command_byte<="D";
     endcase
     else if(section==3)begin
      menu_open<=0;
      case(setting_cursor)
       0:command_byte<=course_mode?"J":"W";
       1:begin command_byte<="R";query<=0;section<=0;setting_cursor<=0;end
       default:command_byte<="A";
      endcase
     end else if(catalog_ready&&total!=0&&browse_valid&&browse_tag==query) begin
     command_byte<=query[5]?{4'hc,query[3:0]}:{3'b100,query[4:0]};menu_open<=0;
    end
    default:if(raw_byte[7:5]==3'b100)menu_open<=0;
   endcase
  end
  if(force_close)menu_open<=0;
 end
end
endmodule
