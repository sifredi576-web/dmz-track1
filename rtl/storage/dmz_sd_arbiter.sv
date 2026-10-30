// Two queued clients, audio priority at low FIFO water mark. An entire CMD17
// including CRC stays with its owner. Clients may issue while the other is active.
module dmz_sd_arbiter(input clk,reset,input audio_urgent,
 input image_start,input [31:0] image_lba,output wire image_ready,output wire image_done,image_byte_valid,
 input audio_start,input [31:0] audio_lba,output wire audio_ready,output wire audio_done,audio_byte_valid,
 output reg sd_start,output reg [31:0] sd_lba,input sd_ready,sd_done,sd_byte_valid,
 output reg [31:0] image_reads,audio_reads);
reg image_pending,audio_pending,active,owner;
reg [31:0] held_image,held_audio;
assign image_ready=!image_pending&&!(active&&!owner);
assign audio_ready=!audio_pending&&!(active&&owner);
assign image_done=sd_done&&active&&!owner;assign audio_done=sd_done&&active&&owner;
assign image_byte_valid=sd_byte_valid&&active&&!owner;assign audio_byte_valid=sd_byte_valid&&active&&owner;
always @(posedge clk) begin
 if(reset) begin image_pending<=0;audio_pending<=0;active<=0;owner<=0;held_image<=0;held_audio<=0;sd_start<=0;sd_lba<=0;image_reads<=0;audio_reads<=0;end
 else begin
  sd_start<=0;
  if(image_start) begin image_pending<=1;held_image<=image_lba;end
  if(audio_start) begin audio_pending<=1;held_audio<=audio_lba;end
  if(active&&sd_done) active<=0;
  if(!active&&sd_ready&&!sd_start) begin
   if(audio_pending&&(audio_urgent||!image_pending)) begin
    owner<=1;active<=1;sd_start<=1;sd_lba<=held_audio;audio_pending<=0;audio_reads<=audio_reads+1'b1;
   end else if(image_pending) begin
    owner<=0;active<=1;sd_start<=1;sd_lba<=held_image;image_pending<=0;image_reads<=image_reads+1'b1;
   end
  end
 end
end
endmodule
