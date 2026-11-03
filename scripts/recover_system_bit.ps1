param([string]$TdRoot='D:/ANLU',[switch]$ValidateExisting)
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 if($ValidateExisting){& (Join-Path $PSScriptRoot 'build_system.ps1') -TdRoot $TdRoot -VerifyOnly;return}
 $phy='build_system/dmz_track1_Runs/phy_1'
 $db=Get-Item "$phy/dmz_track1_pr.db"
 $files=@(Get-Content scripts/build_system.tcl | Where-Object {$_ -match '^add_files '} | ForEach-Object {$_ -replace '^add_files ../',''})
 foreach($f in $files){if((Get-Item -LiteralPath $f).LastWriteTime -gt $db.LastWriteTime){throw 'Routed database is older than source or constraints'}}
 $original=Get-Content "$phy/dmz_track1_pr.timing" -Raw
 if($original -match '(?:S|H)WNS:\s*-' -or $original -notmatch 'Timing details for EG_PHY_SDRAM_2M_32'){throw 'Original routed STA did not pass'}
 $start=Get-Date
 Push-Location $phy
 try {& "$TdRoot/bin/td_commands_prompt.exe" '../../../scripts/recover_system_bit.tcl' *> ../../../docs/system_recovery_log.txt}finally{Pop-Location}
 $log=Get-Content docs/system_recovery_log.txt -Raw
 if($log -match 'ERROR:|Oops! coredump' -or $log -notmatch 'Import design success' -or $log -notmatch 'Generate bits file dmz_track1.bit'){throw 'Fresh database import or bitgen failed'}
 $bit=Get-Item "$phy/dmz_track1.bit"
 if($bit.LastWriteTime -lt $start -or !$bit.Length){throw 'No fresh recovered bitstream'}
 $timing=Get-Content "$phy/recovered_timing.rpt" -Raw
 if($timing -match '(?:S|H)WNS:\s*-' -or $timing -notmatch 'Timing details for EG_PHY_SDRAM_2M_32' -or $timing -notmatch '375.'){throw 'Recovered routed STA did not pass'}
 if($timing -notmatch 'SWNS:\s*([\d.-]+)ns'){throw 'No recovered setup result'};$setup=[double]$Matches[1]
 if($timing -notmatch 'HWNS:\s*([\d.-]+)ns'){throw 'No recovered hold result'};$hold=[double]$Matches[1]
 $paths=$files+@("$phy/dmz_track1.bit","$phy/dmz_track1_pr.db","$phy/recovered_timing.rpt",'docs/system_recovery_log.txt',"$phy/dmz_track1_pr.timing",'build_system/dmz_track1_Runs/syn_1/run.log')
 $hashes=[ordered]@{}
 foreach($f in ($paths|Sort-Object -Unique)){$hashes[$f]=(Get-FileHash -LiteralPath $f -Algorithm SHA256).Hash.ToLowerInvariant()}
 [ordered]@{date=(Get-Date).ToString('yyyy-MM-dd');passed=$true;explanation='Fresh TD process reimported exact current-source routed database, verified final STA and generated bitstream after export_db returned USR-8003.';setup_slack_ns=$setup;hold_slack_ns=$hold;sha256=$hashes}|ConvertTo-Json -Depth 7|Set-Content docs/system_recovery_validation.json -Encoding utf8
 & (Join-Path $PSScriptRoot 'build_system.ps1') -TdRoot $TdRoot -VerifyOnly
}finally{Pop-Location}
