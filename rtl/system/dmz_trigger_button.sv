module dmz_trigger_button(input [10:0] x,input [9:0] y,input enabled,locked,platform_enabled,auto_enabled,auto_paused,auto_wait,output reg ink,output reg [23:0] color);
function automatic [63:0] font(input [7:0] c);
begin case(c)
 "A":font=64'h3844447c44444400;
 "B":font=64'h7844447844447800;
 "C":font=64'h3844404040443800;
 "D":font=64'h7844444444447800;
 "E":font=64'h7c40407840407c00;
 "F":font=64'h7c40407840404000;
 "G":font=64'h3844405c44443c00;
 "H":font=64'h4444447c44444400;
 "I":font=64'h3810101010103800;
 "J":font=64'h1c08080848483000;
 "K":font=64'h4448506050484400;
 "L":font=64'h4040404040407c00;
 "M":font=64'h446c545444444400;
 "N":font=64'h4464544c44444400;
 "O":font=64'h3844444444443800;
 "P":font=64'h7844447840404000;
 "Q":font=64'h3844444454483400;
 "R":font=64'h7844447850484400;
 "S":font=64'h3c40403804047800;
 "T":font=64'h7c10101010101000;
 "U":font=64'h4444444444443800;
 "V":font=64'h4444444444281000;
 "W":font=64'h44444454546c4400;
 "X":font=64'h4444281028444400;
 "Y":font=64'h4444281010101000;
 "Z":font=64'h7c04081020407c00;
 "0":font=64'h38444c5464443800;
 "1":font=64'h1030101010103800;
 "2":font=64'h3844040810207c00;
 "3":font=64'h7804043804047800;
 "4":font=64'h081828487c080800;
 "5":font=64'h7c40407804047800;
 "6":font=64'h3840407844443800;
 "7":font=64'h7c04081020202000;
 "8":font=64'h3844443844443800;
 "9":font=64'h3844443c04043800;
 ".":font=64'h0000000000303000;
 ":":font=64'h0030300030300000;
 "/":font=64'h0404081020404000;
 "-":font=64'h0000007c00000000;
 "+":font=64'h0010107c10100000;
 ">":font=64'h4020100810204000;
 "_":font=64'h0000000000007c00;
 "?":font=64'h3844040810001000;
 "=":font=64'h00007c007c000000;
 " ":font=0;default:font=64'h3844040810001000;
endcase end endfunction
wire trigger_area=enabled&&y>=192&&y<288;
wire auto_area=platform_enabled&&y>=320&&y<416;
wire area=x>=16&&x<144&&(trigger_area||auto_area);
wire [2:0] col=x[6:4]-3'd1;
// All text rows are aligned 16-pixel bands; equality avoids carry-chain comparators.
wire title_row=y[9:4]==6'd13,key_row=y[9:4]==6'd15;
wire auto_title=y[9:4]==6'd21,auto_key=y[9:4]==6'd23;
reg [63:0] glyph;
always @*begin
 glyph=0;
 if(title_row)case(col)
 0:glyph=font("T");1:glyph=font("R");2:glyph=font("I");3:glyph=font("G");
 5:glyph=font("O");6:glyph=locked?font("N"):font("F");7:if(!locked)glyph=font("F");
 default:glyph=0;endcase
 else if(auto_title)case(col)
 0:glyph=font("A");1:glyph=font("U");2:glyph=font("T");3:glyph=font("O");
 5:glyph=!auto_enabled?font("O"):auto_paused?font("P"):auto_wait?font("A"):font("R");
 6:glyph=!auto_enabled?font("F"):auto_paused?font("A"):auto_wait?font("S"):font("U");
 7:glyph=!auto_enabled?font("F"):auto_paused?font("U"):auto_wait?font("K"):font("N");
 default:glyph=0;endcase
 else if(auto_key)case(col)
 0:glyph=font("K");1:glyph=font("E");2:glyph=font("Y");3:glyph=font("2");default:glyph=0;endcase
 else if(key_row)case(col)
 0:glyph=font("K");1:glyph=font("E");2:glyph=font("Y");3:glyph=font("4");default:glyph=0;endcase
end
wire dot=(title_row||key_row||auto_title||auto_key)&&glyph[63-{y[3:1],x[3:1]}];
always @*begin
 ink=area;color=24'h08182c;
 if(area&&(x==16||x==143||y==192||y==287||y==320||y==415))color=(auto_area?(auto_enabled&&!auto_paused):locked)?24'h50ffb0:24'hffcf70;
 else if(area&&dot)color=24'hc0eaff;
end
endmodule
