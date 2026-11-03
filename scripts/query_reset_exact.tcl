import_device eagle_s20.db -package EG4S20BG256
import_db build_system/dmz_track1_Runs/phy_1/dmz_track1_pr.db
puts "DIRECT=[get_regs {pr[3]}]"
foreach r [get_regs -hier *pr*] {if {[string match {pr*} $r]} {puts "MATCH=$r"}}
puts "TARGET=[get_regs -hier *serial_reset_sync*]"
exit
