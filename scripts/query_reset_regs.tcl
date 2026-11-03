import_device eagle_s20.db -package EG4S20BG256
import_db build_system/dmz_track1_Runs/phy_1/dmz_track1_pr.db
puts [get_regs -hier *serial_reset_sync*]
puts [get_regs -hier *restart*]
puts [get_regs -hier pr*]
exit
