param([Parameter(Mandatory=$true)][string]$TdRoot)
$ErrorActionPreference='Stop'
$root=Split-Path (Split-Path $PSScriptRoot -Parent) -Parent
$runner=Join-Path $TdRoot 'bin/run.exe'
if(!(Test-Path -LiteralPath $runner)){throw "TD run.exe not found: $runner. Specify -TdRoot."}
& "$PSScriptRoot/prepare.ps1"
$out=Join-Path $root 'build/reports'
New-Item -ItemType Directory -Force $out|Out-Null
$start=Get-Date
$unreviewedCritical=@()
$oldBit=Join-Path $root 'project/td/dmz_track1_Runs/phy_1/dmz_track1.bit'
if(Test-Path -LiteralPath $oldBit){Remove-Item -LiteralPath $oldBit}
foreach($kind in 'syn_1','phy_1'){
 $dir=Join-Path $root "project/td/dmz_track1_Runs/$kind"
 Push-Location $dir
 try{
  & $runner dmz_track1.tcl 2>&1 | Tee-Object -FilePath (Join-Path $out "${kind}_build.log") | Out-Null
  if($LASTEXITCODE -ne 0){throw "TD failed: $kind. See build/reports/${kind}_build.log"}
 }finally{Pop-Location}
 $log=Get-Content (Join-Path $out "${kind}_build.log") -Raw
 if($log -match 'ERROR:'){throw "TD reported an error: $kind"}
 $critical=$log -split "`n"|Where-Object {$_ -match 'CRITICAL-WARNING' -and $_ -notmatch 'PHY-7002|PHY-5079'}
 $unreviewedCritical+=@($critical)
}
$phy=Join-Path $root 'project/td/dmz_track1_Runs/phy_1'
$bit=Get-Item "$phy/dmz_track1.bit"
if(!$bit.Length -or $bit.LastWriteTime -lt $start){throw 'No fresh bitstream'}
$timing=Get-Content "$phy/dmz_track1_pr.timing" -Raw
$serialClock=[regex]::Match($timing,'(?m)^\s*clk\d+:\s*([\d.]+)\s+\d+\s+video_pll/pll_inst.clkc\[1\]')
$hashes=[ordered]@{}
foreach($file in Get-Content "$root/project/td/sources.f"){$hashes[$file]=(Get-FileHash (Join-Path $root $file)).Hash}
$manifest=[ordered]@{generated=(Get-Date).ToString('o');project='project/td/dmz_track1.al';source_sha256=$hashes;bit_sha256=(Get-FileHash $bit.FullName).Hash;flow_sha256=(Get-FileHash "$root/scripts/build/td_flow.tcl").Hash;project_sha256=(Get-FileHash "$root/project/td/dmz_track1.al").Hash;board_tested=$false;unreviewed_critical_warnings=$unreviewedCritical}
# Keep an auditable candidate when bitgen succeeds but the strict release gate fails.
$manifest|ConvertTo-Json -Depth 4|Set-Content "$out/candidate_manifest.json" -Encoding utf8
if($unreviewedCritical.Count){throw "Candidate built, not published: unreviewed critical warning: $($unreviewedCritical -join '; ')"}
if($timing -match '(?:S|H)WNS:\s*-' -or $timing -notmatch 'Timing details for EG_PHY_SDRAM_2M_32' -or !$serialClock.Success -or [math]::Abs([double]$serialClock.Groups[1].Value-375) -gt 0.5 -or $timing -notmatch 'STA coverage\s*:\s*100.00%'){throw 'Candidate built, not published: timing/SDRAM coverage check failed; inspect routed timing and timing_checks.rpt'}
$manifest|ConvertTo-Json -Depth 4|Set-Content "$out/build_manifest.json" -Encoding utf8
$release=Join-Path $root 'release/current'
New-Item -ItemType Directory -Force $release|Out-Null
Copy-Item -LiteralPath $bit.FullName -Destination "$release/dmz_track1.bit" -Force
Copy-Item -LiteralPath "$out/build_manifest.json" -Destination "$release/build_manifest.json" -Force
Copy-Item -LiteralPath "$phy/dmz_track1_pr.timing" -Destination "$release/timing.txt" -Force
Write-Output 'PASS: current bitstream, manifest and routed timing published to release/current. No board download.'
