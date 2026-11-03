param([string]$TdRoot='D:/ANLU',[switch]$VerifyOnly)
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 $start=Get-Date
 New-Item -ItemType Directory -Force build_system | Out-Null
 if(!$VerifyOnly){
 Push-Location build_system
 try {& "$TdRoot/bin/td_commands_prompt.exe" '../scripts/build_system.tcl' *> ../docs/system_build_log.txt} finally {Pop-Location}
 }
 $logFiles=@('docs/system_build_log.txt','build_system/dmz_track1_Runs/syn_1/run.log','build_system/dmz_track1_Runs/phy_1/run.log')
 $logs=($logFiles | ForEach-Object {if(Test-Path -LiteralPath $_){Get-Content -LiteralPath $_ -Raw}}) -join "`n"
 $failures=$logs -split "`n" | Where-Object {$_ -match 'ERROR:|Oops! coredump'}
 # TD 6.2 may return USR-8003 after actually writing a complete routed DB.
 # Recover only this exact failure class; fresh import/STA/bitgen and hashes
 # must pass. VerifyOnly never starts recovery, preventing recursion.
 if($failures -and !$VerifyOnly -and @($failures|Where-Object {$_ -notmatch 'PRJ-8806 ERROR: Run phy_1 has exited unexpectedly|USR-8003 ERROR: Cannot write file dmz_track1_pr.db'}).Count -eq 0){
  & (Join-Path $PSScriptRoot 'recover_system_bit.ps1') -TdRoot $TdRoot
  return
 }
 if($failures -and $VerifyOnly -and (Test-Path docs/system_recovery_validation.json)){
  $recovery=Get-Content docs/system_recovery_validation.json -Raw | ConvertFrom-Json
  $validRecovery=$recovery.passed -and @($failures|Where-Object {$_ -notmatch 'PRJ-8806 ERROR: Run phy_1 has exited unexpectedly|USR-8003 ERROR: Cannot write file dmz_track1_pr.db'}).Count -eq 0
  foreach($entry in $recovery.sha256.PSObject.Properties){
   if(!(Test-Path -LiteralPath $entry.Name) -or (Get-FileHash -LiteralPath $entry.Name -Algorithm SHA256).Hash.ToLowerInvariant() -ne $entry.Value){$validRecovery=$false}
  }
  $recoveryLog=Get-Content docs/system_recovery_log.txt -Raw
  $recoveryTiming=Get-Content build_system/dmz_track1_Runs/phy_1/recovered_timing.rpt -Raw
  if($recoveryLog -match 'ERROR:' -or $recoveryLog -notmatch 'Import design success' -or $recoveryLog -notmatch 'Generate bits file dmz_track1.bit' -or $recoveryTiming -match '(?:S|H)WNS:\s*-'){$validRecovery=$false}
  if($validRecovery){$failures=@();Write-Output 'Verified exact-source recovery: fresh database import, final STA and successful bitgen; export_db error retained in recovery evidence'}
 }
 if($failures){throw ('TD build failed: '+(($failures|Select-Object -Last 4) -join '; '))}
 if(!(Test-Path build_system/dmz_track1_Runs/phy_1/dmz_track1.bit)){throw 'TD did not generate a bitstream; see docs/system_build_log.txt and phy_1/run.log'}
 $bit=Get-Item build_system/dmz_track1_Runs/phy_1/dmz_track1.bit
 if(!$bit.Length -or (!$VerifyOnly -and $bit.LastWriteTime -lt $start)){throw 'No fresh unified system bitstream'}
 $latest=Get-ChildItem rtl,constraints -Recurse -File | Sort-Object LastWriteTime -Descending | Select-Object -First 1
 if($latest.LastWriteTime -gt $bit.LastWriteTime){throw 'RTL or constraints are newer than the bitstream; rebuild before downloading'}
 $badNets=$logs -split "`n" | Where-Object {
  ($_ -match 'undeclared symbol|HDL-5314[^\r\n]*does not have a driver') -and
  ($_ -notmatch "undeclared symbol 'open'.*dmz_(p2|wide)_pll\.v") -and
  # TD reports initialized ROM arrays and the unused serial BIST branch before
  # constant propagation. These exact reviewed objects are not runtime inputs.
  ($_ -notmatch "net 'read_data\[255\]'.*dmz_sdram_bist\.sv") -and
  ($_ -notmatch "net '(text_rom|font_rom)'.*dmz_osd\.sv") -and
  ($_ -notmatch "net 'font_rom'.*dmz_status_panel\.sv")
 }
 if($badNets){throw ('Undeclared or undriven HDL net: '+($badNets -join '; '))}
 # Known hard-macro relocation and single-destination internal clock pad warnings.
 $critical=$logs -split "`n" | Where-Object {$_ -match 'CRITICAL-WARNING' -and $_ -notmatch 'PHY-7002|PHY-5079'}
 if($critical){throw ('Unreviewed critical warning: '+($critical -join '; '))}
 $r=Get-Content build_system/dmz_track1_Runs/phy_1/dmz_track1_pr.timing -Raw
 if($r -match '(?:S|H)WNS:\s*-' -or $r -notmatch 'Timing details for EG_PHY_SDRAM_2M_32' -or $r -notmatch '375.'){throw 'Timing or SDRAM coverage failed'}
 Write-Output 'PASS: unified system bitstream, reviewed synthesis nets and routed timing including SDRAM hard macro'
}finally{Pop-Location}
