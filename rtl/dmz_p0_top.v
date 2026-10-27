module dmz_p0_top #(
    parameter integer HALF_PERIOD = 25000000
)(
    input wire clk_50m,
    input wire run_n,
    input wire [6:0] switches,
    input wire uart_rx,
    output wire uart_tx,
    output wire [7:0] leds
);
// SW0 low asserts reset; release is synchronized to the 50 MHz clock.
reg [1:0] reset_sync;
always @(posedge clk_50m or negedge run_n)
    if (!run_n) reset_sync <= 2'b00;
    else reset_sync <= {reset_sync[0],1'b1};
wire reset_n = reset_sync[1];
reg [24:0] counter;
reg heartbeat;
reg [6:0] sw_meta, sw_sync;
reg rx_meta, rx_sync;
always @(posedge clk_50m or negedge reset_n) begin
    if (!reset_n) begin
        counter <= 0;
        heartbeat <= 0;
        sw_meta <= 0;
        sw_sync <= 0;
        rx_meta <= 1;
        rx_sync <= 1;
    end else begin
        sw_meta <= switches;
        sw_sync <= sw_meta;
        rx_meta <= uart_rx;
        rx_sync <= rx_meta;
        if (counter == HALF_PERIOD-1) begin
            counter <= 0;
            heartbeat <= ~heartbeat;
        end else counter <= counter + 1'b1;
    end
end
assign leds = {sw_sync, heartbeat};
// P0 bit-level loopback only, not a UART command parser.
assign uart_tx = rx_sync;
endmodule
