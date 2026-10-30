// Browse without loading. E commits the indexed file only after metadata returns
// with a matching tag. F stops automatic slides; WAV continues during browsing.
module dmz_file_menu(
 input clk,reset,input raw_valid,input [7:0] raw_byte,
 input catalog_ready,input [5:0] image_count,input [4:0] wav_count,
 input browse_valid,input [5:0] browse_tag,
 output reg menu_open,output reg [5:0] query,
 output reg command_valid,output reg [7:0] command_byte);
import dmz_contract_pkg::*;
wire [5:0] total=query[5]?{1'b0,wav_count}:image_count;
always @(posedge clk) begin
 if(reset) begin menu_open<=0;query<=0;command_valid<=0;command_byte<=0;end
 else begin
  command_valid<=0;
  if(raw_valid) begin
   command_valid<=1;command_byte<=raw_byte;
   case(raw_byte)
    CMD_RELOAD,CMD_RELOAD_LOWER:begin menu_open<=0;query<=0;end
    CMD_MENU,CMD_MENU_LOWER:menu_open<=~menu_open;
    CMD_CATEGORY,CMD_CATEGORY_LOWER:if(menu_open) query<={~query[5],5'd0};else command_byte<=CMD_CONTRAST;
    CMD_MENU_PREVIOUS,CMD_MENU_PREVIOUS_LOWER:if(!menu_open) command_byte<=CMD_BRIGHTNESS_DOWN;else if(catalog_ready&&total!=0) query[4:0]<=query[4:0]==0?5'(total-1'b1):query[4:0]-1'b1;
    CMD_MENU_NEXT,CMD_MENU_NEXT_LOWER:if(!menu_open) command_byte<=CMD_BRIGHTNESS_UP;else if(catalog_ready&&total!=0) query[4:0]<=({1'b0,query[4:0]}+1'b1>=total)?5'd0:query[4:0]+1'b1;
    CMD_CONFIRM,CMD_CONFIRM_LOWER:if(!menu_open) command_byte<=CMD_PICTURE_DEFAULT;else if(catalog_ready&&total!=0&&browse_valid&&browse_tag==query) begin
     command_byte<=query[5]?{AUDIO_COMMAND_PREFIX,query[3:0]}:{IMAGE_COMMAND_PREFIX,query[4:0]};menu_open<=0;
    end
    default:begin end
   endcase
  end
 end
end
endmodule
