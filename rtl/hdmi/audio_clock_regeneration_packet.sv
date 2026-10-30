// Implementation of HDMI audio clock regeneration packet
// By Sameer Puri https://github.com/sameer

// See HDMI 1.4b Section 5.3.3
module audio_clock_regeneration_packet
#(
    parameter real VIDEO_RATE = 25.2E6,
    parameter int AUDIO_RATE = 48e3
)
(
    input logic clk_pixel,
    input logic reset,
    input logic clk_audio,
    output logic clk_audio_counter_wrap = 0,
    output logic [23:0] header,
    output logic [55:0] sub [3:0]
);

// See Section 7.2.3, values derived from "Other" row in Tables 7-1, 7-2, 7-3.
localparam bit [19:0] N = AUDIO_RATE % 125 == 0 ? 20'(16 * AUDIO_RATE / 125) : AUDIO_RATE % 225 == 0 ? 20'(32 * AUDIO_RATE / 225) : 20'(AUDIO_RATE * 16 / 125);

// DMZ adaptation: sample-enable input and deterministic reset in one domain.
localparam int CLK_AUDIO_COUNTER_WIDTH = $clog2(N / 128) > 0 ? $clog2(N / 128) : 1;
logic [CLK_AUDIO_COUNTER_WIDTH-1:0] clk_audio_counter;
logic [19:0] cycle_time_stamp, cycle_time_stamp_counter;
// Full HDMI CTS width avoids tool-specific real-to-integer constant casts.
always_ff @(posedge clk_pixel) begin
    if (reset) begin
        clk_audio_counter <= 0;
        cycle_time_stamp <= 0;
        cycle_time_stamp_counter <= 0;
        clk_audio_counter_wrap <= 0;
    end else begin
        cycle_time_stamp_counter <= cycle_time_stamp_counter + 20'd1;
        if (clk_audio) begin
            if (clk_audio_counter == (N / 128 - 1)) begin
                clk_audio_counter <= 0;
                cycle_time_stamp_counter <= 0;
                cycle_time_stamp <= cycle_time_stamp_counter + 20'd1;
                clk_audio_counter_wrap <= !clk_audio_counter_wrap;
            end else clk_audio_counter <= clk_audio_counter + 1'b1;
        end
    end
end

// "An HDMI Sink shall ignore bytes HB1 and HB2 of the Audio Clock Regeneration Packet header."
`ifdef MODEL_TECH
assign header = {8'd0, 8'd0, 8'd1};
`else
assign header = {8'd0, 8'd0, 8'd1};
`endif

// "The four Subpackets each contain the same Audio Clock regeneration Subpacket."
genvar i;
generate
    for (i = 0; i < 4; i++)
    begin: same_packet
        assign sub[i] = {N[7:0], N[15:8], {4'd0, N[19:16]}, cycle_time_stamp[7:0], cycle_time_stamp[15:8], {4'd0, cycle_time_stamp[19:16]}, 8'd0};
    end
endgenerate

endmodule
