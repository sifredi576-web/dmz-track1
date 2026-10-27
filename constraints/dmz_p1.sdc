create_clock -name clk_50m -period 20.000 [get_ports {clk_50m}]
create_generated_clock -name pixel_clk -source [get_ports {clk_50m}] -divide_by 2 [get_pins {pll/pll_inst.clkc[0]}]
create_generated_clock -name serial_clk -source [get_ports {clk_50m}] -multiply_by 2.5 [get_pins {pll/pll_inst.clkc[1]}]
set_cross_domain_timing all


set_false_path -from [get_ports {run_n mute_switch pattern_switch uart_rx}]
set_false_path -to [get_ports {leds[*] uart_tx}]
