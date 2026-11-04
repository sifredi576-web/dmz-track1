`timescale 1ns/1ps
module tb_scaler;
reg clk=0;always #5 clk=~clk;reg reset=1,start=0;
integer w=321,h=241,bpp=24,top=0,bytes,stride,pos=0,cycle=0,bursts=0,delay_ack=0,dw,dh,lx,py0;
reg [31:0] filebytes;wire ready,lv,last,done;wire [7:0] error;wire [17:0] addr;wire [255:0] data;wire [31:0] pixels;
reg lr=1,ack=0;wire valid=(pos<bytes)&&(cycle%13!=0);
function automatic [7:0] content(input integer p);
 integer off,row,col,ch;reg [31:0] n;begin content=0;
 case(p)
  0:content="B";1:content="M";10:content=70;14:content=40;26:content=1;28:content=8'(bpp);
 endcase
 if(p>=2&&p<6) content=8'(bytes>>((p-2)*8));
 if(p>=18&&p<22) content=8'(w>>((p-18)*8));
 n=top?-h:h;if(p>=22&&p<26) content=8'(n>>((p-22)*8));
 if(p>=70) begin off=p-70;row=off/stride;col=(off%stride)/(bpp/8);ch=(off%stride)%(bpp/8);
  if(col<w) case(ch) 0:content=8'(col);1:content=8'(top?row:h-1-row);2:content=8'(col^(top?row:h-1-row));3:content=8'hab;endcase
 end
 end endfunction
function automatic [15:0] expected(input integer wordaddr,odd);
 integer x,y,ord,fx,fy;reg [7:0] r,g,b;begin
 x=(wordaddr%320)*2+odd;y=wordaddr/320;ord=top?y:479-y;expected=0;
 if(x>=lx&&x<lx+dw&&ord>=py0&&ord<py0+dh) begin
  fx=(x-lx)*w/dw;fy=(ord-py0)*h/dh;if(!top) fy=h-1-fy;
  b=8'(fx);g=8'(fy);r=8'(fx^fy);expected={r[7:3],g[7:2],b[7:3]};
 end end endfunction
wire [7:0] bd=content(pos);
dmz_bmp_decoder dut(.clk(clk),.reset(reset),.start(start),.file_bytes(filebytes),.stream_error(8'd0),.byte_valid(valid),.byte_ready(ready),.byte_data(bd),
 .load_valid(lv),.load_addr(addr),.load_data(data),.load_last(last),.load_ready(lr),.load_ack(ack),.done(done),.error(error),.status(),.pixels_loaded(pixels));
always @(posedge clk) begin
 cycle<=cycle+1;ack<=0;if(!reset&&ready&&valid) pos<=pos+1;
 if(lv&&lr) begin
  for(integer j=0;j<8;j=j+1) if(data[j*32+:32]!=={expected(addr+j,1),expected(addr+j,0)}) $fatal(1,"Scaled pixel mismatch %0d got %h",addr+j,data[j*32+:32]);
  bursts<=bursts+1;lr<=0;delay_ack<=3;
 end
 if(delay_ack>0) begin delay_ack<=delay_ack-1;if(delay_ack==1) begin ack<=1;lr<=1;end end
 if(error!=0&&!$test$plusargs("short")) $fatal(1,"Decoder error %0d",error);
end
initial begin
 if($value$plusargs("w=%d",w)) begin end;if($value$plusargs("h=%d",h)) begin end;
 if($test$plusargs("rgba")) bpp=32;if($test$plusargs("top")) top=1;
 stride=(w*(bpp/8)+3)&~3;bytes=70+stride*h;filebytes=32'(bytes-($test$plusargs("short")?7:0));
 if(w*480>=h*640) begin dw=640;dh=h*640/w;if(dh==0) dh=1;end
 else begin dh=480;dw=w*480/h;if(dw==0) dw=1;end
 lx=(640-dw)/2;py0=top?(480-dh)/2:480-dh-(480-dh)/2;
 repeat(4) @(negedge clk);reset=0;start=1;@(negedge clk);start=0;
 if($test$plusargs("short")) begin wait(error!=0);if(error!=10||bursts!=0) $fatal(1,"Short file accepted");end
 else begin wait(done);if(pixels!=307200||bursts!=19200||pos!=bytes) $fatal(1,"Output/source incomplete pixels=%0d bursts=%0d pos=%0d/%0d",pixels,bursts,pos,bytes);end
 $display("PASS aspect-fit BMP %0dx%0d/%0d top=%0d padding, offset, black bars, 307200 exact pixels, backpressure",w,h,bpp,top);$finish;
end
initial begin #300000000;$fatal(1,"Scaler timeout state=%0d pos=%0d/%0d source=%0d dest=%0d",dut.state,pos,bytes,dut.source_y,dut.dest_row);end
endmodule
