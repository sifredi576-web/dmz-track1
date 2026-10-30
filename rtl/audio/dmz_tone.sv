module dmz_tone(input wire clk, input wire reset, input wire mute,
 output reg sample_ce, output reg signed [15:0] sample);
reg [24:0] accumulator;
reg [5:0] phase;
function automatic signed [15:0] sine(input [5:0] index);
begin
 case(index)
 6'd0: sine = 16'sd0;
 6'd1: sine = 16'sd535;
 6'd2: sine = 16'sd1060;
 6'd3: sine = 16'sd1567;
 6'd4: sine = 16'sd2047;
 6'd5: sine = 16'sd2493;
 6'd6: sine = 16'sd2896;
 6'd7: sine = 16'sd3249;
 6'd8: sine = 16'sd3546;
 6'd9: sine = 16'sd3783;
 6'd10: sine = 16'sd3955;
 6'd11: sine = 16'sd4060;
 6'd12: sine = 16'sd4095;
 6'd13: sine = 16'sd4060;
 6'd14: sine = 16'sd3955;
 6'd15: sine = 16'sd3783;
 6'd16: sine = 16'sd3546;
 6'd17: sine = 16'sd3249;
 6'd18: sine = 16'sd2896;
 6'd19: sine = 16'sd2493;
 6'd20: sine = 16'sd2047;
 6'd21: sine = 16'sd1567;
 6'd22: sine = 16'sd1060;
 6'd23: sine = 16'sd535;
 6'd24: sine = 16'sd0;
 6'd25: sine = -16'sd535;
 6'd26: sine = -16'sd1060;
 6'd27: sine = -16'sd1567;
 6'd28: sine = -16'sd2047;
 6'd29: sine = -16'sd2493;
 6'd30: sine = -16'sd2896;
 6'd31: sine = -16'sd3249;
 6'd32: sine = -16'sd3546;
 6'd33: sine = -16'sd3783;
 6'd34: sine = -16'sd3955;
 6'd35: sine = -16'sd4060;
 6'd36: sine = -16'sd4095;
 6'd37: sine = -16'sd4060;
 6'd38: sine = -16'sd3955;
 6'd39: sine = -16'sd3783;
 6'd40: sine = -16'sd3546;
 6'd41: sine = -16'sd3249;
 6'd42: sine = -16'sd2896;
 6'd43: sine = -16'sd2493;
 6'd44: sine = -16'sd2048;
 6'd45: sine = -16'sd1567;
 6'd46: sine = -16'sd1060;
 6'd47: sine = -16'sd535;
 default: sine = 0;
 endcase
end
endfunction
always @(posedge clk) begin
 if(reset) begin accumulator<=0; phase<=0; sample_ce<=0; sample<=0; end
 else begin
  sample_ce<=0;
  if(accumulator >= 25'd24952000) begin
   accumulator <= accumulator - 25'd24952000;
   sample_ce<=1;
   sample<=mute ? 16'sd0 : sine(phase);
   phase <= phase==47 ? 0 : phase+1'b1;
  end else accumulator <= accumulator+25'd48000;
 end
end
endmodule
