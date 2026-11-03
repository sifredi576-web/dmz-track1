import_device eagle_s20.db -package EG4S20BG256
import_db build_system/dmz_track1_Runs/phy_1/dmz_track1_pr.db
puts "BASE=[get_regs base_pixel_reset*]"
puts "RESET=[get_regs -hier *reset*]"
puts "PIX=[get_regs -hier *pr_reg*]"
puts "PINS=[get_pins -hier *serial_reset_sync*]"
exit
