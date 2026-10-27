import_device eagle_s20.db -package EG4S20BG256
import_db build_p1/dmz_p1_Runs/phy_1/dmz_p1_pr.db
update_timing
report_timing_path -from [get_clocks {pixel_clk}] -to [get_clocks {serial_clk}] -ep_num 100 -file docs/p1_cross.timing
report_timing_ignored -file docs/p1_ignored.timing
exit
