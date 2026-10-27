param([string]$TdRoot='D:/ANLU')
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 $start=Get-Date
 New-Item -ItemType Directory -Force build_system | Out-Null
 Push-Location build_system
 try {& "$TdRoot/bin/td_commands_prompt.exe" '../scripts/build_system.tcl' *> ../docs/system_build_log.txt} finally {Pop-Location}
 $bit=Get-Item build_system/dmz_track1_Runs/phy_1/dmz_track1.bit
 if(!$bit.Length -or $bit.LastWriteTime -lt $start){throw 'No fresh unified system bitstream'}
 $logs=(Get-Content docs/system_build_log.txt -Raw)+(Get-Content build_system/dmz_track1_Runs/syn_1/run.log -Raw)+(Get-Content build_system/dmz_track1_Runs/phy_1/run.log -Raw)
 if($logs -match 'ERROR:'){throw 'Build error'}
 # Known hard-macro relocation and single-destination internal clock pad warnings.
 $critical=$logs -split "`n" | Where-Object {$_ -match 'CRITICAL-WARNING' -and $_ -notmatch 'PHY-7002|PHY-5079'}
 if($critical){throw ('Unreviewed critical warning: '+($critical -join '; '))}
 $r=Get-Content build_system/dmz_track1_Runs/phy_1/dmz_track1_pr.timing -Raw
 if($r -match '(?:S|H)WNS:\s*-' -or $r -notmatch 'Timing details for EG_PHY_SDRAM_2M_32' -or $r -notmatch '125.000'){throw 'Timing or SDRAM coverage failed'}
 Write-Output 'PASS: fresh unified system bitstream and routed timing including SDRAM hard macro'
}finally{Pop-Location}
