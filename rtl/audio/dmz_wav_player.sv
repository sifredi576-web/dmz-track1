// Decode the first WAV continuously into the FIFO; loop at data end without
// flushing pending PCM. Its separate file context shares only the SD block host.
module dmz_wav_player #(parameter MANUAL_START=0)(input clk,reset,input catalog_ready,wav_found,select_restart,output wire flushing,
 input manual_mode,loop_enable,stop,
 input fat16,input [7:0] spc,input [31:0] fat_base,data_base,wav_cluster,wav_bytes,
 output wire sd_start,output wire [31:0] sd_lba,input sd_ready,sd_done,
 input sd_byte_valid,input [8:0] sd_byte_index,input [7:0] sd_byte_data,sd_error,
 output wire pcm_valid,input pcm_ready,output wire [31:0] pcm_pair,
 output reg [31:0] decoded_pairs,loop_count,output wire [31:0] declared_pairs,
 output wire [7:0] error,status,output wire decode_done);
reg armed;reg [2:0] state;wire file_busy,file_done,byte_valid,byte_ready,byte_last;
wire [7:0] byte_data,file_error,decode_error;wire [3:0] decode_state;wire [31:0] bytes_read,sample_pairs;
reg [3:0] flush_wait;
wire launch=state==1;wire cancel=decode_done||decode_error!=0||flushing;
assign flushing=select_restart||(MANUAL_START&&stop)||state==5||state==6;
wire decoder_pcm_valid;
assign pcm_valid=decoder_pcm_valid&&!flushing;
assign error=decode_error;assign status={4'd0,decode_state};
dmz_fat_stream file_stream(.clk(clk),.reset(reset),.start(launch),.cancel(cancel),.fat16(fat16),.spc(spc),.fat_base(fat_base),.data_base(data_base),
 .first_cluster(wav_cluster),.file_bytes(wav_bytes),.sd_start(sd_start),.sd_lba(sd_lba),.sd_ready(sd_ready),.sd_done(sd_done),
 .sd_byte_valid(sd_byte_valid),.sd_byte_index(sd_byte_index),.sd_byte_data(sd_byte_data),.sd_error(sd_error),
 .byte_valid(byte_valid),.byte_ready(byte_ready),.byte_data(byte_data),.byte_last(byte_last),.busy(file_busy),.done(file_done),.error(file_error),.bytes_read(bytes_read));
dmz_wav_decoder decoder(.clk(clk),.reset(reset||flushing),.start(launch),.file_bytes(wav_bytes),.stream_error(file_error),.byte_valid(byte_valid),.byte_ready(byte_ready),.byte_data(byte_data),
 .pcm_valid(decoder_pcm_valid),.pcm_ready(pcm_ready&&!flushing),.pcm_pair(pcm_pair),.done(decode_done),.error(decode_error),.status(decode_state),.sample_pairs(sample_pairs),.declared_pairs(declared_pairs));
always @(posedge clk) begin
 if(reset) begin armed<=0;state<=0;decoded_pairs<=0;loop_count<=0;flush_wait<=0;end
 else if(select_restart||(MANUAL_START&&stop)) begin armed<=select_restart;state<=5;flush_wait<=0;decoded_pairs<=0;loop_count<=0;end
 else begin
  if(pcm_valid&&pcm_ready) decoded_pairs<=decoded_pairs+1'b1;
  case(state)
   0:if(catalog_ready&&wav_found&&(!MANUAL_START||!manual_mode||armed))state<=1;
   1:state<=2;
   2:if(decode_error!=0) state<=4;else if(decode_done) begin loop_count<=loop_count+1'b1;state<=3;end
   3:if(!file_busy)state<=(!MANUAL_START||!manual_mode||loop_enable)?1:4;
   4:begin end
   5:if(!file_busy) begin state<=6;flush_wait<=0;end
   6:if(flush_wait==15) state<=0;else flush_wait<=flush_wait+1'b1;
  endcase
 end
end
endmodule
