param()
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 $sources=@(Get-Content scripts/build_system.tcl | Where-Object {$_ -match '^add_files '} | ForEach-Object {($_ -replace '^add_files ../','')})
 $paths=$sources+@('scripts/build_system.tcl','scripts/build_system.ps1','scripts/project.ps1','scripts/system_console.ps1','scripts/download_system.ps1','scripts/download_system.tcl','scripts/test_scene_visual.ps1','scripts/test_p7_board.ps1','sim/system/tb_scene_visual.sv','sim/system/scene_main.cpp','scripts/test_scaler.ps1','scripts/test_wipe.ps1','sim/media/tb_scaler.sv','sim/system/tb_wipe.sv','scripts/test_display.ps1','sim/system/tb_display.sv','scripts/test_osd_menu.ps1','scripts/test_osd_board.ps1','scripts/test_command_fifo.ps1','sim/system/tb_osd_menu.sv','sim/system/tb_command_fifo.sv','build_system/dmz_track1_Runs/phy_1/dmz_track1.bit')
 $hashes=[ordered]@{}
 foreach($path in ($paths | Sort-Object -Unique)){$hashes[$path]=(Get-FileHash -LiteralPath $path -Algorithm SHA256).Hash.ToLowerInvariant()}
 $timing=Get-Content build_system/dmz_track1_Runs/phy_1/dmz_track1_pr.timing -Raw
 $null=$timing -match 'SWNS:\s*([\d.-]+)ns';$setup=[double]$Matches[1]
 $null=$timing -match 'HWNS:\s*([\d.-]+)ns';$hold=[double]$Matches[1]
 $evidence=[ordered]@{}
 foreach($path in @('docs/system_smoke_status.json','docs/system_soak_30min.json','docs/gallery_initial_status.json','docs/gallery_after_next.json','docs/gallery_after_previous.json','docs/gallery_auto_cycle.json','docs/av_initial_status.json','docs/av_playback_status.json','docs/av_final_status.json','docs/av_corrected_validation.json','docs/keys_initial_status.json','docs/keys_physical_observation.json','docs/p7_validation.json','docs/p7_board_validation.json','docs/p7_final.json','docs/p6_validation.json','docs/p6_initial_status.json','docs/p6_gallery_cycle.json','docs/display_validation.json','docs/display_initial_status.json','docs/osd_board_validation.json','docs/osd_menu_validation.json','docs/osd_physical_observation.json')){
  if(Test-Path $path){
   $r=Get-Content $path -Raw -Encoding UTF8 | ConvertFrom-Json
   $evidence[$path]=[ordered]@{scope=$(if($path -like '*p7_*'){'current P7 actual PCM visualization/emergency'}elseif($path -like '*osd_*'){'current OSD/menu build; actual verification scope in report'}elseif($path -like '*keys_*'){'historical keys-only build'}elseif($path -like '*av_*'){'historical v4 before keys; accepted WAV integration'}elseif($path -like '*gallery*'){'historical v3 gallery'}else{'historical v2 baseline'});passed=$r.passed;elapsed_seconds=$r.elapsed_seconds;sha256=(Get-FileHash -LiteralPath $path -Algorithm SHA256).Hash.ToLowerInvariant()}
  }
 }
 [ordered]@{
  generated=(Get-Date).ToString('o');hardware='DMZ_EG4S20 / EG4S20BG256';top='dmz_track1_top'
  project='build_system/dmz_track1.al';configuration='SRAM';default_audio='WAV enabled, volume 8/8'
  source_and_bitstream_sha256=$hashes;setup_slack_ns=$setup;hold_slack_ns=$hold;hardware_evidence=$evidence
  wav_component=[ordered]@{
   included_in_bitstream=$true
   source_sha256=(Get-FileHash rtl/media/dmz_wav_decoder.sv -Algorithm SHA256).Hash.ToLowerInvariant()
   test_result_sha256=(Get-FileHash docs/wav_sim_result.txt -Algorithm SHA256).Hash.ToLowerInvariant()
   tested_cases=21;scope='shared FAT stream, audio-priority SD, FIFO and HDMI integrated; physical listening confirmed 2026-10-28'
  }
  physical_picture_confirmation='2026-10-27: user confirmed unified image normal, correct orientation'
  physical_hdmi_reconnect_confirmation='2026-10-27: user confirmed unplug/replug at display restores normal image automatically'
  audio_confirmation='2026-10-28: user confirmed continuous WAV sound and normal picture switching'
  pending=@('Nonvolatile startup and final standalone scenario verification')
 } | ConvertTo-Json -Depth 7 | Set-Content docs/system_manifest.json -Encoding utf8
 Write-Output 'Wrote docs/system_manifest.json'
}finally{Pop-Location}

