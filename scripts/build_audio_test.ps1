param([string]$TdRoot='D:/ANLU')
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 $start=Get-Date
 Push-Location build_audio_test
 try {& "$TdRoot/bin/td_commands_prompt.exe" '../scripts/build_audio_test.tcl' *> ../docs/audio_build_log.txt} finally {Pop-Location}
 $bit=Get-Item build_audio_test/dmz_audio_test_Runs/phy_1/dmz_audio_test.bit
 if(!$bit.Length -or $bit.LastWriteTime -lt $start){throw 'No fresh audio-test bitstream'}
 $logs=(Get-Content docs/audio_build_log.txt -Raw)+(Get-Content build_audio_test/dmz_audio_test_Runs/syn_1/run.log -Raw)+(Get-Content build_audio_test/dmz_audio_test_Runs/phy_1/run.log -Raw)
 if($logs -match 'ERROR:'){throw 'Build error'}
 # Known hard-macro relocation and single-destination internal clock pad warnings.
 $critical=$logs -split "`n" | Where-Object {$_ -match 'CRITICAL-WARNING' -and $_ -notmatch 'PHY-7002|PHY-5079'}
 if($critical){throw ('Unreviewed critical warning: '+($critical -join '; '))}
 $r=Get-Content build_audio_test/dmz_audio_test_Runs/phy_1/dmz_audio_test_pr.timing -Raw
 if($r -match '(?:S|H)WNS:\s*-' -or $r -notmatch 'Timing details for EG_PHY_SDRAM_2M_32' -or $r -notmatch '125.000'){throw 'Timing or SDRAM coverage failed'}
 Write-Output 'PASS: fresh audio-test bitstream and routed timing including SDRAM hard macro'
}finally{Pop-Location}
