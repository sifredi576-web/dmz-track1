// End-of-track is based on consumed PCM, never on the decoder reaching EOF.
// A new ticket must observe its flush cycle before playback can become ready.
module dmz_audio_completion(input clk,reset,input [41:0] params,input flushing,pop,
 output wire [8:0] finished,output wire done);
reg [7:0] ticket;reg [31:0] consumed;reg [2:0] state;
localparam DISABLED=0,WAIT_FLUSH=1,FLUSH=2,PLAY=3,END=4;
assign done=state!=PLAY;
assign finished={state==END,ticket};
always @(posedge clk)begin
 if(reset)begin ticket<=0;consumed<=0;state<=DISABLED;end
 else if(params[41:34]!=ticket)begin
  ticket<=params[41:34];consumed<=0;state<=params[33]?(flushing?FLUSH:WAIT_FLUSH):DISABLED;
 end else case(state)
  WAIT_FLUSH:if(flushing)state<=FLUSH;
  FLUSH:if(!flushing)state<=params[31:0]==0?END:PLAY;
  PLAY:if(pop)begin
   if(consumed==params[31:0]-1'b1)begin consumed<=0;if(!params[32])state<=END;end
   else consumed<=consumed+1'b1;
  end
  default:begin end
 endcase
end
endmodule
