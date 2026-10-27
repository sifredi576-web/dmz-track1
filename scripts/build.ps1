param([string]$TdRoot = 'D:\ANLU')
$ErrorActionPreference = 'Stop'
$projectRoot = Split-Path $PSScriptRoot -Parent
Push-Location (Join-Path $projectRoot 'build')
try {
  $started = Get-Date
  & (Join-Path $TdRoot 'bin\td_commands_prompt.exe') '../scripts/build.tcl'
  if ($LASTEXITCODE -ne 0) { throw 'TD process failed' }
  $bit = Get-Item 'dmz_p0_Runs/phy_1/dmz_p0.bit' -ErrorAction Stop
  if ($bit.LastWriteTime -lt $started -or $bit.Length -eq 0) { throw 'No fresh bitstream generated' }
  $report = Get-Content 'dmz_p0_Runs/phy_1/dmz_p0_pr.timing' -Raw
  if ($report -match '(?:S|H)WNS:\s*-') { throw 'Timing violation' }
  Write-Output "PASS: fresh bitstream generated; setup/hold have no negative slack"
} finally { Pop-Location }
