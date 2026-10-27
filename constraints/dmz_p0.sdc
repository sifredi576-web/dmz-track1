create_clock -name clk_50m -period 20.000 [get_ports {clk_50m}]
# External switches/UART are asynchronous; constrain only their first stages.
set_false_path -from [get_ports {run_n switches[*] uart_rx}]
# LEDs and asynchronous serial output have no external synchronous receiver clock.
set_false_path -to [get_ports {leds[*] uart_tx}]
