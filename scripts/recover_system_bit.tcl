import_device eagle_s20.db -package EG4S20BG256
open_project dmz_track1.prj -noanalyze
import_db dmz_track1_pr.db
update_timing -mode final
report_timing_summary -file recovered_timing.rpt
report_area -file recovered_area.rpt
bitgen -bit dmz_track1.bit
close_project
exit
