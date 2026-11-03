param()
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 $sources=@(Get-Content scripts/build_system.tcl | Where-Object {$_ -match '^add_files '} | ForEach-Object {$_ -replace '^add_files ../',''})
 $ui_paths=@('scripts/test_ui.ps1','scripts/test_osd_menu.ps1','scripts/test_system_control.ps1','scripts/test_display.ps1','sim/platform/tb_ui_keys.sv','sim/platform/tb_ui_controller.sv','sim/platform/tb_fifo_recode.sv','sim/platform/tb_ui_keys_main.cpp','sim/platform/tb_ui_controller_main.cpp','sim/platform/tb_fifo_recode_main.cpp')
 $runtime_paths=@(Get-ChildItem rtl/platform,sim/platform -Recurse -File | ForEach-Object {$_.FullName.Substring($root.Length+1).Replace('\','/')})+@('scripts/test_runtime.ps1','scripts/platform_console.ps1','scripts/test_board_course.ps1','scripts/download_system.ps1','scripts/recover_system_bit.ps1','scripts/recover_system_bit.tcl','scripts/generate_osd_text_rom.py','assets/osd_text_lines.json','tests/test_console_parser.ps1','assets/platform/tf_course_v2/SCENE.BIN','assets/platform/tf_notice_v2/SCENE.BIN')
 $ui_paths+=@('scripts/test_scene_visual.ps1','sim/system/tb_scene_visual.sv','sim/system/scene_main.cpp','sim/system/tone_wave_6khz.hex')
 $ui_paths+=@('scripts/test_status_panel.ps1','sim/system/tb_status_panel.sv','sim/system/status_panel_main.cpp','sim/system/status_panel_font.hex','assets/status_panel_font.json')
 $paths=$sources+$ui_paths+$runtime_paths+@('scripts/build_system.tcl','scripts/build_system.ps1','scripts/project.ps1','scripts/system_console.ps1','scripts/pack_platform.py','scripts/preview_platform.py','scripts/test_platform.ps1','scripts/test_media.ps1','tests/test_platform_pack.py','assets/platform/sound_course.json','assets/platform/exhibit_demo.json','sim/platform/tb_scene_loader.sv','sim/platform/loader_main.cpp','sim/platform/course.hex','sim/platform/exhibit.hex','sim/media/tb_media.sv','sim/media/av_fixture.svh','build_system/dmz_track1_Runs/phy_1/dmz_track1.bit')
 $hashes=[ordered]@{}
 foreach($path in ($paths | Sort-Object -Unique)){$hashes[$path]=(Get-FileHash -LiteralPath $path -Algorithm SHA256).Hash.ToLowerInvariant()}
 $timing=Get-Content build_system/dmz_track1_Runs/phy_1/dmz_track1_pr.timing -Raw
 if($timing -notmatch 'SWNS:\s*([\d.-]+)ns'){throw 'Missing setup timing'};$setup=[double]$Matches[1]
 if($timing -notmatch 'HWNS:\s*([\d.-]+)ns'){throw 'Missing hold timing'};$hold=[double]$Matches[1]
 if($setup -lt 0 -or $hold -lt 0){throw 'Timing not passed'}
 $board=Get-Content docs/platform_v2_board_validation.json -Raw | ConvertFrom-Json
 $boardPath='docs/platform_v2_board_validation.json'
 foreach($candidate in @('docs/platform_interaction_board_validation.json','docs/wave_line_v1_validation.json','docs/wave_enlarged_v2_validation.json','docs/wave_peak_v3_validation.json','docs/status_panel_validation.json')){
  if(Test-Path -LiteralPath $candidate){
   $entry=Get-Content -LiteralPath $candidate -Raw | ConvertFrom-Json
   if($entry.bitstream_sha256 -eq $hashes['build_system/dmz_track1_Runs/phy_1/dmz_track1.bit']){$board=$entry;$boardPath=$candidate}
  }
 }
 $boardMatches=$board.bitstream_sha256 -eq $hashes['build_system/dmz_track1_Runs/phy_1/dmz_track1.bit']
 [ordered]@{
  generated=(Get-Date).ToString('o');hardware='DMZ_EG4S20 / EG4S20BG256';top='dmz_track1_top';project='build_system/dmz_track1.al'
  stage='interactive platform v2: configured Chinese course, quiz, notifications and media integrated'
  configuration=$(if($boardMatches -and $board.sram_download_passed){'SRAM downloaded; see current hardware evidence; Flash not programmed'}else{'bitstream generated; this revision not downloaded or flashed'})
  source_and_bitstream_sha256=$hashes;setup_slack_ns=$setup;hold_slack_ns=$hold
  current_software_evidence=@('docs/status_panel_validation.json','docs/status_panel_verified_sim.txt','docs/wave_peak_v3_validation.json','docs/wave_v3_sim_result.txt','docs/wave_enlarged_v2_validation.json','docs/wave_v2_sim_result.txt','docs/wave_line_v1_validation.json','docs/scene_visual_sim_result.txt','docs/platform_runtime_validation_boardfix.json','docs/scene_runtime_result.txt','docs/scene_runtime_notice_result.txt','docs/platform_media_result.txt','docs/platform_media_notice_result.txt','docs/platform_media_timed_result.txt','docs/page_compositor_result.txt','docs/audio_completion_result.txt','docs/scene_runtime_badmeta_result.txt','docs/scene_runtime_badwidget_result.txt','docs/scene_runtime_badcrc_result.txt','docs/platform_pack_tests.txt','docs/platform_loader_sim_result.txt','docs/media_sim_result.txt','docs/media_paired_result.txt','docs/media_platform_result.txt','docs/media_platform_invalid_result.txt','docs/ui_keys_validation.json','docs/ui_keys_result.txt','docs/ui_controller_result.txt','docs/fifo_recode_result.txt','docs/osd_menu_sim_result.txt','docs/system_control_sim_result.txt','docs/display_sim_result.txt')
  recovery_evidence=$(if($board.recovery_used -or $board.recovery){'docs/system_recovery_validation.json'}else{$null})
  current_hardware_evidence=$(if($boardMatches){$boardPath}else{$null})
  historical_hardware_evidence=@('docs/p7_validation.json','docs/paired_board_validation_20261101.json')
  historical_evidence_scope='Previous bitstreams only. Current targeted physical acceptance and automatic course checks are recorded separately in platform_v2_board_validation.json.'
  pending=@('user approval for trigger stabilization with left controls','second scene real-card validation','measured AV boundary and TF extreme read latency','Flash programming and cold boot','final demonstration video and documentation')
 } | ConvertTo-Json -Depth 7 | Set-Content docs/system_manifest.json -Encoding utf8
 Write-Output 'Wrote current system manifest with separate historical hardware evidence'
}finally{Pop-Location}
