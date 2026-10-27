`timescale 1ns/1ps
module tb_bmp;
reg clk=0,reset=1;always #10 clk=~clk;
wire start,valid,last,done;wire [31:0] lba,pixels;wire [17:0] address;wire [255:0] data;wire [7:0] error,status;wire [63:0] name;
reg sd_ready=1,sd_done=0,bvalid=0;reg [8:0] bindex=0;reg [7:0] bdata=0;
reg load_ready=1,ack=0;reg reading=0;reg [31:0] current_lba;integer index=0,ack_delay=0,bursts=0,sectors=0;
dmz_bmp_loader dut(.clk(clk),.reset(reset),.enable(1'b1),.sd_start(start),.sd_lba(lba),.sd_ready(sd_ready),.sd_done(sd_done),.sd_byte_valid(bvalid),.sd_byte_index(bindex),.sd_byte_data(bdata),.sd_error(8'd0),.load_valid(valid),.load_addr(address),.load_data(data),.load_last(last),.load_ready(load_ready),.load_ack(ack),.done(done),.error(error),.status(status),.pixels_loaded(pixels),.filename(name));
function automatic [7:0] disk(input integer l,input integer i);
 integer c,entry,ofs,pix,x,y,channel;reg [31:0] value;
 begin
 disk=0;
 if(l==0) begin
  case(i)
  0:disk=8'heb;11:disk=0;12:disk=2;13:disk=8;14:disk=1;16:disk=1;36:disk=16;44:disk=2;510:disk=8'h55;511:disk=8'haa;
  default:begin end
  endcase
 end else if(l>=1&&l<=16) begin
  entry=(l-1)*128+i/4;
  if(entry==2) value=32'h0fffffff;
  else if(entry>=3&&entry[0]) value=(entry>=453)?32'h0fffffff:32'(entry+2);
  else value=0;
  disk=value[(i%4)*8+:8];
 end else if(l==17) begin
  if(i==0) disk=8'h41;
  if(i==11) disk=15;
  if(i>=32&&i<=39) disk="PICDEMO ">>((i-32)*8);
  case(i) 40:disk="B";41:disk="M";42:disk="P";43:disk=32;58:disk=3;60:disk=8'h36;61:disk=8'h10;62:disk=8'h0e;default:begin end endcase
 end else if(l>=25) begin
  c=(l-25)/8;
  if(c%2==0) begin
   ofs=(c/2)*4096+((l-25)%8)*512+i;
   if(ofs<54) begin
    case(ofs)
    0:disk="B";1:disk="M";2:disk=8'h36;3:disk=8'h10;4:disk=8'h0e;10:disk=54;14:disk=40;18:disk=8'h80;19:disk=2;22:disk=8'he0;23:disk=1;26:disk=1;28:disk=24;
    default:begin end
    endcase
    if($test$plusargs("bad")&&ofs==30) disk=1;
   end else begin
    pix=(ofs-54)/3;x=pix%640;y=479-pix/640;channel=(ofs-54)%3;
    case(channel) 0:disk=8'(x);1:disk=8'(y);2:disk=8'(x^y);endcase
   end
  end
 end
 end
endfunction
function automatic [15:0] expected(input integer a,input integer odd);
 integer x,y;reg [7:0] r,g,b;
 begin x=(a%320)*2+odd;y=a/320;b=8'(x);g=8'(y);r=8'(x^y);expected={r[7:3],g[7:2],b[7:3]};end
endfunction
always @(posedge clk) begin
 sd_done<=0;bvalid<=0;ack<=0;
 if(start&&sd_ready) begin reading<=1;sd_ready<=0;current_lba<=lba;index<=0;sectors<=sectors+1;end
 else if(reading) begin
  bvalid<=1;bindex<=9'(index);bdata<=disk(current_lba,index);
  if(index==511) begin reading<=0;end else index<=index+1;
 end else if(!sd_ready) begin sd_done<=1;sd_ready<=1;end
 if(valid&&load_ready) begin
  for(integer j=0;j<8;j=j+1) if(data[j*32+:32]!=={expected(address+j,1),expected(address+j,0)}) $fatal(1,"BMP pixel a=%0d j=%0d actual=%h",address,j,data[j*32+:32]);
  bursts<=bursts+1;ack_delay<=7;load_ready<=0;
 end
 if(ack_delay>0) begin ack_delay<=ack_delay-1;if(ack_delay==1) begin ack<=1;load_ready<=1;end end
end
initial begin
 #100;reset=0;
 wait(done||error!=0);
 if($test$plusargs("bad")) begin if(error!=8||bursts!=0) $fatal(1,"bad BMP not rejected");$display("PASS unsupported compressed BMP rejected");end
 else begin
  if(error!=0||pixels!=307200||bursts!=19200) $fatal(1,"loader error=%0d pixels=%0d bursts=%0d status=%0d",error,pixels,bursts,status);
  $display("PASS FAT32 fragmented cluster chain, directory skip, BMP bottom-up, 307200 pixels, %0d bursts %0d sectors",bursts,sectors);
 end
 $finish;
end
initial begin #200000000;$fatal(1,"timeout state=%0d lba=%0d",status,lba);end
endmodule
