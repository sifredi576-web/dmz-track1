param([string]$TdRoot='D:/ANLU')
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 if(!(Test-Path build_system/dmz_track1_Runs/phy_1/dmz_track1.bit)){throw 'Build the unified system first'}
 & (Join-Path $PSScriptRoot 'build_system.ps1') -TdRoot $TdRoot -VerifyOnly
 & "$TdRoot/bin/td_commands_prompt.exe" scripts/download_system.tcl *> docs/system_download_log.txt
 if($LASTEXITCODE -ne 0){throw 'Download process failed'}
 $log=Get-Content docs/system_download_log.txt -Raw
 if($log -match 'ERROR:' -or $log -notmatch 'Chip validation success: EG4S20BG256' -or $log -notmatch 'finish command "program'){
  throw 'Download log does not confirm successful device validation and programming'
 }
 Write-Output 'PASS: unified system downloaded to EG4S20BG256 SRAM (default WAV playback enabled)'
}finally{Pop-Location}
