param([string]$TdRoot='D:/ANLU')
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 $start=Get-Date
 Push-Location build_p2
 try {& "$TdRoot/bin/td_commands_prompt.exe" '../scripts/build_p2.tcl' *> ../docs/p2_build_log.txt} finally {Pop-Location}
 $bit=Get-Item build_p2/dmz_p2_Runs/phy_1/dmz_p2.bit
 if(!$bit.Length -or $bit.LastWriteTime -lt $start){throw 'No fresh P2 bitstream'}
 $logs=(Get-Content docs/p2_build_log.txt -Raw)+(Get-Content build_p2/dmz_p2_Runs/syn_1/run.log -Raw)+(Get-Content build_p2/dmz_p2_Runs/phy_1/run.log -Raw)
 if($logs -match 'ERROR:'){throw 'Build error'}
 # Known hard-macro relocation and single-destination internal clock pad warnings.
 $critical=$logs -split "`n" | Where-Object {$_ -match 'CRITICAL-WARNING' -and $_ -notmatch 'PHY-7002|PHY-5079'}
 if($critical){throw ('Unreviewed critical warning: '+($critical -join '; '))}
 $r=Get-Content build_p2/dmz_p2_Runs/phy_1/dmz_p2_pr.timing -Raw
 if($r -match '(?:S|H)WNS:\s*-' -or $r -notmatch 'Timing details for EG_PHY_SDRAM_2M_32' -or $r -notmatch '125.000'){throw 'Timing or SDRAM coverage failed'}
 Write-Output 'PASS: fresh P2 bitstream and routed timing including SDRAM hard macro'
}finally{Pop-Location}
