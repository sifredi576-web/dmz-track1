param([string]$TdRoot='D:/ANLU')
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 $started=Get-Date
 Push-Location build_p1
 try { & "$TdRoot/bin/td_commands_prompt.exe" '../scripts/build_p1.tcl' *> ../docs/p1_build_log.txt } finally { Pop-Location }
 $bit=Get-Item build_p1/dmz_p1_Runs/phy_1/dmz_p1.bit
 if($bit.LastWriteTime -lt $started -or !$bit.Length){throw 'No fresh bitstream'}
 $logs=(Get-Content docs/p1_build_log.txt -Raw)+(Get-Content build_p1/dmz_p1_Runs/syn_1/run.log -Raw)+(Get-Content build_p1/dmz_p1_Runs/phy_1/run.log -Raw)
 if($logs -match 'ERROR:|CRITICAL-WARNING:'){throw 'Build/constraint error; inspect logs'}
 $timing=Get-Content build_p1/dmz_p1_Runs/phy_1/dmz_p1_pr.timing -Raw
 if($timing -match '(?:S|H)WNS:\s*-' -or $timing -notmatch '125.000' -or $timing -notmatch '25.000'){throw 'Timing checks failed'}
 & "$TdRoot/bin/td_commands_prompt.exe" scripts/inspect_p1.tcl *> docs/p1_inspect_log.txt
 $cross=Get-Content docs/p1_cross.timing -Raw
 if($cross -notmatch 'pixel_clk -> serial_clk' -or $cross -match '(?:S|H)WNS\s+-' -or $cross -notmatch '0 Viol Endpoints'){throw 'Cross-clock checks failed'}
 Write-Output 'PASS: fresh bitstream, 25/125 MHz timing and cross-clock paths checked'
} finally {Pop-Location}
