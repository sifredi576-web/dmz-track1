param()
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 $sources=@(Get-Content scripts/build_system.tcl | Where-Object {$_ -match '^add_files '} | ForEach-Object {($_ -replace '^add_files ../','')})
 $paths=$sources+@('scripts/build_system.tcl','scripts/build_system.ps1','scripts/project.ps1','scripts/system_console.ps1','scripts/download_system.ps1','scripts/download_system.tcl','build_system/dmz_track1_Runs/phy_1/dmz_track1.bit')
 $hashes=[ordered]@{}
 foreach($path in ($paths | Sort-Object -Unique)){$hashes[$path]=(Get-FileHash -LiteralPath $path -Algorithm SHA256).Hash.ToLowerInvariant()}
 $timing=Get-Content build_system/dmz_track1_Runs/phy_1/dmz_track1_pr.timing -Raw
 $null=$timing -match 'SWNS:\s*([\d.-]+)ns';$setup=[double]$Matches[1]
 $null=$timing -match 'HWNS:\s*([\d.-]+)ns';$hold=[double]$Matches[1]
 $evidence=[ordered]@{}
 foreach($path in @('docs/system_smoke_status.json','docs/system_soak_30min.json','docs/gallery_initial_status.json','docs/gallery_after_next.json','docs/gallery_after_previous.json','docs/gallery_auto_cycle.json')){
  if(Test-Path $path){
   $r=Get-Content $path -Raw -Encoding UTF8 | ConvertFrom-Json
   $evidence[$path]=[ordered]@{scope=$(if($path -like '*gallery*'){'gallery v3 verification'}else{'historical v2 baseline, not the gallery bitstream'});passed=$r.passed;elapsed_seconds=$r.elapsed_seconds;sha256=(Get-FileHash -LiteralPath $path -Algorithm SHA256).Hash.ToLowerInvariant()}
  }
 }
 [ordered]@{
  generated=(Get-Date).ToString('o');hardware='DMZ_EG4S20 / EG4S20BG256';top='dmz_track1_top'
  project='build_system/dmz_track1.al';configuration='SRAM';default_audio='muted'
  source_and_bitstream_sha256=$hashes;setup_slack_ns=$setup;hold_slack_ns=$hold;hardware_evidence=$evidence
  prepared_wav_component=[ordered]@{
   included_in_bitstream=$false
   source_sha256=(Get-FileHash rtl/media/dmz_wav_decoder.sv -Algorithm SHA256).Hash.ToLowerInvariant()
   test_result_sha256=(Get-FileHash docs/wav_sim_result.txt -Algorithm SHA256).Hash.ToLowerInvariant()
   tested_cases=21;scope='standalone RTL simulation only; not TF/WAV playback'
  }
  physical_picture_confirmation='2026-10-27: user confirmed unified image normal, correct orientation'
  physical_hdmi_reconnect_confirmation='2026-10-27: user confirmed unplug/replug at display restores normal image automatically'
  audio_confirmation='2026-10-27: user heard same HDMI/tone chain in audio_test; unified mute/unmute validated by packet counters'
  pending=@('Power-cycle / physical SW0 checks','More real TF cards and file compatibility','Long audible listening and later two-hour full-feature soak','Shared FAT streams, WAV playback, physical controls and five extensions')
 } | ConvertTo-Json -Depth 7 | Set-Content docs/system_manifest.json -Encoding utf8
 Write-Output 'Wrote docs/system_manifest.json'
}finally{Pop-Location}
