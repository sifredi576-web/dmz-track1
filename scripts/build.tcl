# Re-entrant TD project build. Run from dmz_track1/build.
import_device eagle_s20.db -package EG4S20BG256
if {[file exists ./dmz_p0.al]} {
    open_project ./dmz_p0.al
    reset_runs syn_1
} else {
    create_project dmz_p0 ./ -family EG4 -device EG4S20BG256
    open_project ./dmz_p0.al
    top_module dmz_p0_top
    add_files ../rtl/dmz_p0_top.v
    add_files ../constraints/dmz_p0.adc
    add_files ../constraints/dmz_p0.sdc
}
launch_runs {syn_1 phy_1}
wait_run syn_1 -quiet
wait_run phy_1 -quiet
close_project
exit
