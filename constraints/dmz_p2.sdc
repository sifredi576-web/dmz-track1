create_clock -name clk_50m -period 20.000 [get_ports {clk_50m}]
derive_clocks
set_cross_domain_timing all
set_false_path -from [get_ports {run_n mute_switch pattern_switch uart_rx}]
set_false_path -to [get_ports {leds[*] uart_tx}]
