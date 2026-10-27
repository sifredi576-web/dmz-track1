`timescale 1ns/1ps
module tb_wav;
reg clk=0,reset=1,start=0;always #10 clk=~clk;
reg [7:0] file_data[0:255];integer used=0,sent=0,received=0,cycle=0,data_size_at=0;
reg [31:0] length;wire ready,pcm_valid,done;wire [31:0] pair,pairs,total;wire [7:0] error;wire [3:0] state;
wire valid=(sent<used)&&(cycle%5!=0);
wire pcm_ready=(cycle%7>=3);
wire [7:0] source_error=((test_case=="readerror")&&sent>=46)?8'd5:8'd0;
dmz_wav_decoder dut(.clk(clk),.reset(reset),.start(start),.file_bytes(length),.stream_error(source_error),
 .byte_valid(valid),.byte_ready(ready),.byte_data(file_data[sent]),.pcm_valid(pcm_valid),.pcm_ready(pcm_ready),.pcm_pair(pair),
 .done(done),.error(error),.status(state),.sample_pairs(pairs),.declared_pairs(total));
task u16(input [15:0] value);begin file_data[used]=value[7:0];file_data[used+1]=value[15:8];used=used+2;end endtask
task u32(input [31:0] value);begin for(integer k=0;k<4;k=k+1) file_data[used+k]=value[k*8+:8];used=used+4;end endtask
function automatic [31:0] expected(input integer i);
 reg [15:0] left;
 begin left=16'(i*1234-32768);expected={~left,left};end
endfunction
reg held=0;reg [31:0] held_pair;
always @(posedge clk) begin
 cycle<=cycle+1;
 if(reset||start) begin sent<=0;received<=0;held<=0;end
 else begin
  if(valid&&ready) sent<=sent+1;
  if(held&&source_error==0&&(!pcm_valid||pair!==held_pair)) $fatal(1,"PCM changed under FIFO backpressure");
  held<=pcm_valid&&!pcm_ready;held_pair<=pair;
  if(pcm_valid&&pcm_ready) begin
   if(pair!==expected(received)) $fatal(1,"PCM pair/order/sign corruption index=%0d actual=%h",received,pair);
   received<=received+1;
  end
 end
end
task begin_file;
 begin @(negedge clk);start=1;@(negedge clk);start=0;end
endtask
integer expected_error=0;string test_case="normal";
initial begin
 if(!$value$plusargs("case=%s",test_case)) test_case="normal";
 case(test_case)
  "normal","junkodd","fmt18","trailing","restart","magic","short","headershort","overflow","chunkoverflow","shortfmt","float","mono","rate","align","bits","missingdata","nofmt","zerodata","unaligned","readerror":begin end
  default:$fatal(1,"unknown WAV test case %s",test_case);
 endcase
 u32(32'h46464952);u32(0);u32(32'h45564157);
 if((test_case=="junkodd")) begin u32(32'h4b4e554a);u32(3);file_data[used]=8'haa;file_data[used+1]=8'h55;file_data[used+2]=8'h11;file_data[used+3]=0;used=used+4;end
 if(!(test_case=="nofmt")) begin
  u32(32'h20746d66);u32($test$plusargs("fmt18")?18:(test_case=="shortfmt")?15:16);
  u16((test_case=="float")?3:1);u16((test_case=="mono")?1:2);
  u32((test_case=="rate")?44100:48000);u32(192000);u16((test_case=="align")?2:4);u16((test_case=="bits")?24:16);
  if($test$plusargs("fmt18")) u16(0);
 end
 if(!(test_case=="missingdata")) begin
  u32(32'h61746164);data_size_at=used;u32((test_case=="zerodata")?0:(test_case=="unaligned")?47:48);
  for(integer i=0;i<12;i=i+1) u32(expected(i));
 end
 for(integer j=0;j<4;j=j+1) file_data[4+j]=8'((used-8)>>(j*8));
 if((test_case=="trailing")) u32(32'hcafef00d);
 length=32'(used);
 if((test_case=="magic")) begin file_data[0]=0;expected_error=1;end
 if((test_case=="short")) begin length=length-1;expected_error=2;end
 if((test_case=="headershort")) begin length=8;expected_error=2;end
 if((test_case=="overflow")) begin for(integer j=0;j<4;j=j+1) file_data[4+j]=255;expected_error=2;end
 if((test_case=="chunkoverflow")) begin for(integer j=0;j<4;j=j+1) file_data[data_size_at+j]=255;expected_error=4;end
 if((test_case=="shortfmt")||(test_case=="float")||(test_case=="mono")||(test_case=="rate")||(test_case=="align")||(test_case=="bits")) expected_error=3;
 if((test_case=="missingdata")) expected_error=4;
 if((test_case=="nofmt")) expected_error=6;
 if((test_case=="zerodata")||(test_case=="unaligned")) expected_error=7;
 if((test_case=="readerror")) expected_error=133;
 #100;@(negedge clk);reset=0;begin_file;
 if((test_case=="restart")) begin wait(received==3);begin_file;end
 wait(done||error!=0);@(negedge clk);
 if(expected_error!=0) begin
  if(error!=expected_error||done||received!=0) $fatal(1,"WAV rejection code=%0d expected=%0d received=%0d",error,expected_error,received);
  $display("PASS WAV case=%s invalid stream rejected, code=%0d",test_case,error);
 end else begin
  if(error||!done||received!=12||pairs!=12||total!=12) $fatal(1,"WAV decode failed received=%0d generated=%0d total=%0d error=%0d",received,pairs,total,error);
  $display("PASS WAV case=%s 48kHz/stereo/16bit: 12 signed PCM pairs, source/FIFO backpressure",test_case);
 end
 $finish;
end
initial begin #1000000;$fatal(1,"WAV parser timeout state=%0d sent=%0d",state,sent);end
endmodule
