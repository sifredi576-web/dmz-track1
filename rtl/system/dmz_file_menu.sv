// Browse without loading. E commits the indexed file only after metadata returns
// with a matching tag. F stops automatic slides; WAV continues during browsing.
module dmz_file_menu(
 input clk,reset,input raw_valid,input [7:0] raw_byte,
 input catalog_ready,input [5:0] image_count,input [4:0] wav_count,
 input browse_valid,input [5:0] browse_tag,
 output reg menu_open,output reg [5:0] query,
 output reg command_valid,output reg [7:0] command_byte);
wire [5:0] total=query[5]?{1'b0,wav_count}:image_count;
always @(posedge clk) begin
 if(reset) begin menu_open<=0;query<=0;command_valid<=0;command_byte<=0;end
 else begin
  command_valid<=0;
  if(raw_valid) begin
   command_valid<=1;command_byte<=raw_byte;
   case(raw_byte)
    "R","r":begin menu_open<=0;query<=0;end
    "F","f":menu_open<=~menu_open;
    "V","v":if(menu_open) query<={~query[5],5'd0};else command_byte<="C";
    "I","i":if(!menu_open) command_byte<="[";else if(catalog_ready&&total!=0) query[4:0]<=query[4:0]==0?5'(total-1'b1):query[4:0]-1'b1;
    "O","o":if(!menu_open) command_byte<="]";else if(catalog_ready&&total!=0) query[4:0]<=({1'b0,query[4:0]}+1'b1>=total)?5'd0:query[4:0]+1'b1;
    "E","e":if(!menu_open) command_byte<="D";else if(catalog_ready&&total!=0&&browse_valid&&browse_tag==query) begin
     command_byte<=query[5]?{4'hc,query[3:0]}:{3'b100,query[4:0]};menu_open<=0;
    end
    default:begin end
   endcase
  end
 end
end
endmodule
