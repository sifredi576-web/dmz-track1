param([Parameter(Mandatory=$true)][string]$TdRoot)
$ErrorActionPreference='Stop'
$root=Split-Path (Split-Path $PSScriptRoot -Parent) -Parent
$runner=Join-Path $TdRoot 'bin/run.exe'
if(!(Test-Path -LiteralPath $runner)){throw "TD run.exe not found: $runner. Specify -TdRoot."}
$work=Join-Path $root 'build/td'
$runs=Join-Path $root 'project/td/dmz_track1_Runs'
$release=Join-Path $root 'release/current'
$published=$false
function Get-TextHash([string]$path){
 $text=[IO.File]::ReadAllText($path).Replace("`r`n","`n")
 $sha=[Security.Cryptography.SHA256]::Create()
 try{return ([BitConverter]::ToString($sha.ComputeHash([Text.Encoding]::UTF8.GetBytes($text)))).Replace('-','')}finally{$sha.Dispose()}
}
function Remove-GeneratedDirectory([string]$path){
 $absolute=[IO.Path]::GetFullPath($path)
 if(!$absolute.StartsWith([IO.Path]::GetFullPath($root)+[IO.Path]::DirectorySeparatorChar,[StringComparison]::OrdinalIgnoreCase)){throw "Outside project: $absolute"}
 if(Test-Path -LiteralPath $absolute){Remove-Item -LiteralPath $absolute -Recurse -Force}
}
try{
 Remove-GeneratedDirectory $work
 Remove-GeneratedDirectory $runs
 & "$PSScriptRoot/prepare.ps1"
 New-Item -ItemType Directory -Force $work|Out-Null
 $start=Get-Date
 $knownWarnings=@()
 foreach($kind in 'syn_1','phy_1'){
  Push-Location (Join-Path $runs $kind)
  try{
   & $runner dmz_track1.tcl 2>&1|Tee-Object -FilePath "$work/${kind}.log"|Out-Null
   $code=$LASTEXITCODE
  }finally{Pop-Location}
  $log=Get-Content "$work/${kind}.log" -Raw
  if($code -ne 0 -or $log -match 'ERROR:'){
   $log -split "`n"|Select-Object -Last 30|Write-Output
   throw "TD failed: $kind (exit $code)"
  }
  $critical=@($log -split "`n"|Where-Object {$_ -match 'CRITICAL-WARNING'})
  foreach($line in $critical){
   if($line -match 'PHY-7002|PHY-5079' -or $line -match 'USR-6135.*PLL (pll|video_pll)/pll_inst .*local network'){$knownWarnings+=$line}
   else{throw "Unreviewed critical warning: $line"}
  }
 }
 $phy=Join-Path $runs 'phy_1'
 $bit=Get-Item "$phy/dmz_track1.bit"
 if(!$bit.Length -or $bit.LastWriteTime -lt $start){throw 'No fresh bitstream'}
 $timing=Get-Content "$phy/dmz_track1_pr.timing" -Raw
 $setup=[regex]::Match($timing,'SWNS:\s*([-\d.]+)ns')
 $hold=[regex]::Match($timing,'HWNS:\s*([-\d.]+)ns')
 $coverage=[regex]::Match($timing,'STA coverage\s*:\s*([\d.]+)%')
 $serial=[regex]::Match($timing,'(?m)^\s*clk\d+:\s*([\d.]+)\s+\d+\s+video_pll/pll_inst.clkc\[1\]')
 if(!$setup.Success -or !$hold.Success -or !$coverage.Success -or !$serial.Success){throw 'Incomplete routed timing report'}
 if([double]$setup.Groups[1].Value -le 0 -or [double]$hold.Groups[1].Value -le 0){throw "Non-positive timing slack: setup=$($setup.Groups[1].Value), hold=$($hold.Groups[1].Value)"}
 # Use the reviewed main baseline; do not report 99.99% as full coverage.
 if([double]$coverage.Groups[1].Value -lt 99.99 -or [math]::Abs([double]$serial.Groups[1].Value-375) -gt 0.5 -or $timing -notmatch 'memory\.dq\['){throw 'Timing coverage, video clock or SDRAM paths differ from the main baseline'}
 $hashes=[ordered]@{}
 foreach($file in Get-Content "$root/project/td/sources.f"){$hashes[$file]=(Get-TextHash (Join-Path $root $file))}
 $warningCodes=@($knownWarnings|ForEach-Object {if($_ -match '([A-Z]+-\d+)\s+CRITICAL-WARNING'){$Matches[1]}}|Sort-Object -Unique)
 $manifest=[ordered]@{generated=(Get-Date).ToString('o');project='project/td/dmz_track1.al';source_sha256=$hashes;text_hash_format='UTF8-LF';bit_sha256=(Get-FileHash $bit.FullName).Hash;flow_sha256=(Get-TextHash "$PSScriptRoot/td_flow.tcl");project_sha256=(Get-TextHash "$root/project/td/dmz_track1.al");timing=@{setup_ns=[double]$setup.Groups[1].Value;hold_ns=[double]$hold.Groups[1].Value;coverage_percent=[double]$coverage.Groups[1].Value};known_tool_warnings=$warningCodes;board_tested=$false}
 New-Item -ItemType Directory -Force $release|Out-Null
 Copy-Item -LiteralPath $bit.FullName -Destination "$release/dmz_track1.bit" -Force
 $manifest|ConvertTo-Json -Depth 4|Set-Content "$release/build_manifest.json" -Encoding utf8
 $published=$true
 $area=Get-Content "$phy/dmz_track1_phy.area" -Raw
 $resources=[ordered]@{}
 foreach($key in @('lut','reg','bram9k','bram32k','dsp','pll')){if($area -match "(?m)^\s*#$key\s+(\d+)"){$resources[$key]=[int]$Matches[1]}}
 [ordered]@{bit='release/current/dmz_track1.bit';resources=$resources;timing=$manifest.timing;known_tool_warnings=$warningCodes;board_tested=$false}|ConvertTo-Json -Compress -Depth 4|Write-Output
 Write-Output 'BUILD COMPLETE: fresh bitstream and source manifest retained; intermediate files removed. No hardware access.'
}finally{
 if(!$published){
  foreach($file in @('dmz_track1.bit','build_manifest.json')){$path=Join-Path $release $file;if(Test-Path -LiteralPath $path){Remove-Item -LiteralPath $path -Force}}
 }
 Remove-GeneratedDirectory $runs
 Remove-GeneratedDirectory $work
 $build=Join-Path $root 'build'
 if((Test-Path -LiteralPath $build) -and @(Get-ChildItem -LiteralPath $build -Force).Count -eq 0){Remove-Item -LiteralPath $build}
}
