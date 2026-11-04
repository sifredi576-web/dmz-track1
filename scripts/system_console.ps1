param(
 [ValidateSet('Status','M','U','B','S','R','Smoke','Soak','N','P','A','H','W','J','T','K','L','+','-','F','E','V','I','O','C','D','[',']','Q','X','Z')][string]$Command='Status',
 [string]$Port='', [int]$Seconds=10, [int]$RestartCycles=3,
 [string]$Output='docs/system_hardware_status.json')
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
if($Seconds -lt 1 -or $Seconds -gt 7200){throw 'Seconds must be 1..7200'}
if($RestartCycles -lt 1 -or $RestartCycles -gt 20){throw 'RestartCycles must be 1..20'}
if(!$Port){
 $ports=@(Get-CimInstance Win32_SerialPort | Where-Object PNPDeviceID -match 'VID_1A86&PID_7523')
 if($ports.Count -eq 1){$Port=$ports[0].DeviceID}
 else{
  # Some CH340 drivers are absent from Win32_SerialPort but present in PnP.
  $devices=@(Get-PnpDevice -PresentOnly -Class Ports | Where-Object InstanceId -match 'VID_1A86&PID_7523')
  if($devices.Count -ne 1 -or $devices[0].FriendlyName -notmatch '\((COM\d+)\)'){throw 'Specify -Port: could not uniquely select the CH340 device'}
  $Port=$Matches[1]
 }
}
$serial=New-Object System.IO.Ports.SerialPort $Port,115200,None,8,One
$serial.Handshake=[System.IO.Ports.Handshake]::None
$serial.DtrEnable=$false;$serial.RtsEnable=$false;$serial.ReadTimeout=200;$serial.WriteTimeout=1000
$bytes=New-Object 'System.Collections.Generic.List[byte]'
$records=New-Object 'System.Collections.Generic.List[object]'
$checks=New-Object 'System.Collections.Generic.List[string]'
$watch=[Diagnostics.Stopwatch]::StartNew()
$report=[ordered]@{command=$Command;port=$Port;started=(Get-Date).ToString('o');passed=$false;checks=@();failure=$null;records=@()}
function Read-Frame([int]$TimeoutSeconds=4){
 $deadline=$watch.Elapsed.TotalSeconds+$TimeoutSeconds
 while($watch.Elapsed.TotalSeconds -lt $deadline){
  try{$v=$serial.ReadByte();$bytes.Add([byte]$v)}catch [System.TimeoutException]{continue}
  while($bytes.Count -ge 32){
   if($bytes[0] -ne 0x54 -or $bytes[1] -ne 0x31 -or $bytes[2] -ne 0x53 -or $bytes[3] -ne 0x54){$bytes.RemoveAt(0);continue}
   $version=$bytes[4];$frameBytes=if($version -eq 5){32}elseif($version -eq 4){96}else{64}
   if($bytes.Count -lt $frameBytes){break}
   $a=$bytes.GetRange(0,$frameBytes).ToArray();[uint32[]]$w=0..($frameBytes/4-1) | ForEach-Object {[BitConverter]::ToUInt32($a,$_ * 4)}
   [uint32]$xor=0;foreach($word in $w){$xor=$xor -bxor $word}
   if($xor -ne 0){$bytes.RemoveAt(0);continue}
   $bytes.RemoveRange(0,$frameBytes)
   if($version -eq 5){
    $r=[pscustomobject][ordered]@{
     time=(Get-Date).ToString('o');elapsed=$watch.Elapsed.TotalSeconds;version=5;compact=$true
     init=[bool]($w[1]-band 256);bist_done=[bool]($w[1]-band 512);bist_passed=[bool]($w[1]-band 1024)
     display_valid=[bool]($w[1]-band 2048);fifo_fault=[bool]($w[1]-band 8192);fb_fault=[bool]($w[1]-band 16384);pll_locked=[bool]($w[1]-band 32768)
     audio_mode=($w[1]-shr 20)-band 3;tone_muted=[bool]($w[5]-band 4);audio_paused=[bool]($w[5]-band 8);volume=($w[5]-shr 4)-band 15
     emergency=[bool]($w[5]-band 2);visual_enabled=[bool]($w[5]-band 1)
     choice_valid=[bool]($w[2]-band 16);quiz=[bool]($w[2]-band 32);answered=[bool]($w[2]-band 64);correct=[bool]($w[2]-band 128);platform_active=[bool]($w[2]-band 1);page_loading=[bool]($w[2]-band 2);focus=($w[2]-shr 8)-band 7;current_page=($w[2]-shr 11)-band 31
     page_count=($w[2]-shr 16)-band 63;score=($w[2]-shr 22)-band 15;total=($w[2]-shr 26)-band 15
     course_autoplay=[bool]($w[3]-band 4194304);course_autoplay_paused=[bool]($w[3]-band 8388608);page_auto_link=[bool]($w[3]-band 16777216)
     platform_config_error=($w[3]-shr 8)-band 255;notice_priority=($w[3]-shr 16)-band 3
     sd_error=($w[4]-shr 24)-band 255;image_error=($w[4]-shr 16)-band 255;wav_error=($w[4]-shr 8)-band 255
     command_count=($w[5]-shr 16);last_command=($w[5]-shr 8)-band 255;menu_open=[bool]($w[6]-band 1)
     image_count=($w[6]-shr 17)-band 63;displayed_image=($w[6]-shr 12)-band 31;wav_count=($w[6]-shr 27)-band 31;selected_wav=($w[6]-shr 23)-band 15
     unavailable_counters=@('HDMI packet counters','FIFO occupancy','exact sample and sector counters')
    }
    $records.Add($r);return $r
   }
   $r=[pscustomobject][ordered]@{
    time=(Get-Date).ToString('o');elapsed=$watch.Elapsed.TotalSeconds;version=($w[1]-band 255)
    init=[bool]($w[1]-band 256);bist_done=[bool]($w[1]-band 512);bist_passed=[bool]($w[1]-band 1024)
    display_valid=[bool]($w[1]-band 2048);fifo_fault=[bool]($w[1]-band 8192);fb_fault=[bool]($w[1]-band 16384)
    pll_locked=[bool]($w[1]-band 32768);tone_muted=[bool]($w[1]-band 65536);audio_mode=($w[1]-shr 20)-band 3
    samples=$w[2];pcm_packets=$w[3];nonzero_pcm_packets=$w[4];acr_packets=$w[5];cts=$w[6]
    acr_n=($w[7]-shr 16);sample_rate=($w[7]-band 65535);bist_errors=$w[8];pixels=$w[9];underflow_pixels=$w[10]
    sd_error=($w[11]-shr 24)-band 255;image_error=($w[11]-shr 16)-band 255;sd_state=($w[11]-shr 8)-band 255;image_state=$w[11]-band 255
    checked_words=$w[12];refresh_count=$(if(($w[1]-band 255)-eq 2){$w[13]}else{0});image_count=$(if(($w[1]-band 255)-ge 3){$w[13]-band 63}else{1});selected_image=($w[13]-shr 6)-band 31;displayed_image=($w[13]-shr 11)-band 31;autoplay=[bool]($w[13]-band 65536);gallery_loading=[bool]($w[13]-band 131072);catalog_ready=[bool]($w[13]-band 262144);swaps=($w[13]-shr 19);command_count=($w[14]-shr 16);last_command=($w[14]-shr 8)-band 255
    wav_found=$(if($version -eq 4){[bool]($w[19]-band 536870912)}else{$false})
    wav_error=$(if($version -eq 4){($w[19]-shr 21)-band 255}else{0});wav_state=$(if($version -eq 4){($w[19]-shr 13)-band 255}else{0})
    audio_fifo_used=$(if($version -eq 4){$w[19]-band 8191}else{0});audio_underflows=$(if($version -eq 4){$w[15]}else{0})
    played_pairs=$(if($version -eq 4){$w[16]}else{0});decoded_pairs=$(if($version -eq 4){$w[17]}else{0});wav_loops=$(if($version -eq 4){$w[18]}else{0})
    audio_reads=$(if($version -eq 4){$w[20]}else{0});wav_bytes=$(if($version -eq 4){$w[21]}else{0})
    volume=$(if($version -eq 4){($w[22]-shr 4)-band 15}else{8});audio_paused=$(if($version -eq 4){[bool]($w[22]-band 8)}else{$false})
    emergency=$(if($version -eq 4){[bool]($w[22]-band 134217728)}else{$false});visual_enabled=$(if($version -eq 4){[bool]($w[22]-band 67108864)}else{$false});level_l=($w[14]-shr 4)-band 15;level_r=$w[14]-band 15
    platform_config_found=$(if($version -eq 4){[bool]($w[22]-band 33554432)}else{$false});platform_config_valid=$(if($version -eq 4){[bool]($w[22]-band 16777216)}else{$false});platform_config_error=$(if($version -eq 4){($w[22]-shr 8)-band 7}else{0})
    menu_open=$(if($version -eq 4){[bool]($w[22]-band 4194304)}else{$false});menu_query=$(if($version -eq 4){($w[22]-shr 16)-band 63}else{0});wav_count=$(if($version -eq 4){($w[22]-shr 11)-band 31}else{0});selected_wav=$(if($version -eq 4){($w[22]-shr 28)-band 15}else{0})
    wav_source=$(if($version -eq 4){[bool]($w[22]-band 4)}else{$false});audio_active=$(if($version -eq 4){[bool]($w[22]-band 2)}else{$false})
   }
   if($r.version -notin @(2,3,4)){throw "Unsupported T1ST protocol version $($r.version)"}
   $records.Add($r);return $r
  }
 }
 throw "No valid T1ST diagnostic frame on $Port within $TimeoutSeconds seconds"
}
function Assert-Healthy($r,[bool]$Ready=$true){
 if($r.version -eq 5){
  if(!$r.pll_locked -or $r.fb_fault -or $r.fifo_fault -or $r.sd_error -or $r.image_error -or $r.wav_error -or $r.platform_config_error){throw 'Compact platform status reports an error'}
  if($Ready -and (!$r.bist_passed -or !$r.display_valid)){throw 'Display is not ready'}
  return
 }
 if(!$r.pll_locked -or $r.bist_errors -or $r.underflow_pixels -or $r.fifo_fault -or $r.fb_fault -or $r.sd_error -or ($r.image_error -and !($r.version -ge 3 -and $r.display_valid))){throw ('Hardware fault: '+($r | ConvertTo-Json -Compress))}
 if($Ready -and (!$r.init -or !$r.bist_done -or !$r.bist_passed -or !$r.display_valid -or $r.checked_words -ne 8388608 -or $r.pixels -ne 691200)){throw 'Media pipeline not ready'}
 if($r.version -eq 4 -and $r.wav_source -and !$r.tone_muted -and !$r.audio_paused -and ($r.wav_error -or $r.audio_underflows)){throw ('WAV playback fault: '+($r | ConvertTo-Json -Compress))}
 if($r.sample_rate -ne 48000 -or $r.acr_n -ne 6144 -or ($r.samples -gt 48000 -and $r.cts -ne 25000)){throw 'Audio clock parameters do not match baseline'}
}
function Wait-Ready([int]$TimeoutSeconds=15){
 $until=$watch.Elapsed.TotalSeconds+$TimeoutSeconds
 do{$r=Read-Frame;Assert-Healthy $r $false;if($r.display_valid -and $r.bist_passed){Assert-Healthy $r;return $r}}while($watch.Elapsed.TotalSeconds -lt $until)
 throw 'Timed out waiting for SDRAM BIST and BMP image'
}
function Send-Mode([string]$Mode){
 $before=Read-Frame
 if($Mode -eq 'T' -and $before.version -lt 4){$Mode='U'}
 [byte[]]$payload=[Text.Encoding]::ASCII.GetBytes($Mode)
 $serial.Write($payload,0,$payload.Length)
 $until=$watch.Elapsed.TotalSeconds+4
 do{
  $r=Read-Frame
  if((($r.last_command -eq $payload[0]) -or ($Mode -eq 'E' -and ($r.last_command -ge 128 -or $r.last_command -in @(68,93,67,87,82,65))) -or ($Mode -eq 'I' -and $r.last_command -eq 91) -or ($Mode -eq 'O' -and $r.last_command -eq 93) -or ($Mode -eq 'V' -and $r.last_command -eq 67)) -and $r.command_count -ne $before.command_count){
   $expected=@{M=2;U=1;B=3;S=0;R=$(if($before.version -ge 4){1}else{2});T=1;W=1}[$Mode]
   if($Mode -in @('M','U','B','S','R','T','W') -and $r.audio_mode -ne $expected){throw "Wrong mode acknowledgement for $Mode"}
   $checks.Add("command $Mode acknowledged ($($r.command_count))")
   return $r
  }
 }while($watch.Elapsed.TotalSeconds -lt $until)
 throw "No FPGA acknowledgement for command $Mode"
}
function Show-Frame($r){
 if($r.version -eq 5){
  Write-Host ('platform: page={0}/{1} focus={2} score={3}/{4} loading={5} volume={6}/8 paused={7} errors CFG/SD/BMP/WAV={8}/{9}/{10}/{11}' -f $r.current_page,$r.page_count,$r.focus,$r.score,$r.total,$r.page_loading,$r.volume,$r.audio_paused,$r.platform_config_error,$r.sd_error,$r.image_error,$r.wav_error)
  return
 }
 if($r.version -ge 3){Write-Host ('gallery: image={0}/{1} target={2} auto={3} loading={4} swaps={5}' -f ($r.displayed_image+1),$r.image_count,($r.selected_image+1),$r.autoplay,$r.gallery_loading,$r.swaps)}
 if($r.version -eq 4){Write-Host ('audio: WAV={0} active={1} paused={2} fifo={3} played={4} loops={5} error={6} underflow={7} volume={8}/8' -f $r.wav_found,$r.audio_active,$r.audio_paused,$r.audio_fifo_used,$r.played_pairs,$r.wav_loops,$r.wav_error,$r.audio_underflows,$r.volume)}
 $refresh=if($r.version -ge 3){'n/a'}else{$r.refresh_count}
 Write-Host ('{0:N1}s ready={1} muted={2} PCM={3} nonzero={4} refresh={5} errors={6}/{7}/{8} underrun={9}' -f $r.elapsed,$r.display_valid,$r.tone_muted,$r.pcm_packets,$r.nonzero_pcm_packets,$refresh,$r.bist_errors,$r.sd_error,$r.image_error,$r.underflow_pixels)
}
Push-Location $root
try {
 $serial.Open();$serial.DiscardInBuffer()
 $manual=$Command -in @('M','U','B','S','R','N','P','A','H','W','J','T','K','L','+','-','F','E','V','I','O','C','D','[',']','Q','X','Z')
 $first=if($manual){Read-Frame}else{Wait-Ready};Show-Frame $first
 if($first.version -eq 5 -and $Command -eq 'Smoke'){throw 'Smoke requires FULL_TELEMETRY=1; production v5 exposes state/errors but not HDMI packet counters'}
 $checks.Add($(if($manual){'diagnostic link active; control is allowed even if the previous media has failed'}else{'SDRAM BIST, TF/BMP image and HDMI clock ready'}))
 if($Command -in @('M','U','B','S','R','N','P','A','H','W','J','T','K','L','+','-','F','E','V','I','O','C','D','[',']','Q','X','Z')){
  $r=Send-Mode $Command
  if($Command -eq 'R'){$r=Wait-Ready}
  if($Command -in @('R','W','J','U','T','A','L')){Assert-Healthy $r};Show-Frame $r
 }elseif($Command -eq 'Smoke'){
  $r=Send-Mode 'M';$null=Read-Frame;$a=Read-Frame;$b=Read-Frame
  if(!$a.tone_muted -or !$b.tone_muted -or $a.nonzero_pcm_packets -ne $b.nonzero_pcm_packets){throw 'Mute did not stop nonzero audio packets'}
  $checks.Add('mute stops nonzero PCM while HDMI packets continue')
  $r=Send-Mode 'U';$null=Read-Frame;$a=Read-Frame;$b=Read-Frame
  Assert-Healthy $b
  if($b.tone_muted -or $b.nonzero_pcm_packets -le $a.nonzero_pcm_packets -or $b.pcm_packets -le $a.pcm_packets){throw 'Unmute did not resume nonzero HDMI audio'}
  $checks.Add('unmute resumes nonzero HDMI audio without image fault')
  $null=Send-Mode 'M'
  for($i=0;$i -lt $RestartCycles;$i++){
   $null=Send-Mode 'R';$r=Wait-Ready;Assert-Healthy $r
   if($r.version -lt 4 -and !$r.tone_muted){throw 'Legacy reload must finish muted'}
   $checks.Add("media restart $($i+1): BIST 8388608 words, BMP 307200 pixels, zero errors")
   Show-Frame $r
  }
 }else{
  if($Command -eq 'Soak' -and $first.version -lt 4){$null=Send-Mode 'M';$null=Read-Frame}
  $start=Read-Frame;$until=$watch.Elapsed.TotalSeconds+$Seconds;$nextPrint=$watch.Elapsed.TotalSeconds
  do{
   $r=Read-Frame;Assert-Healthy $r
   if($Command -eq 'Soak' -and $r.version -lt 4 -and !$r.tone_muted){throw 'Soak must remain muted'}
   if($watch.Elapsed.TotalSeconds -ge $nextPrint){Show-Frame $r;$nextPrint=$watch.Elapsed.TotalSeconds+30}
  }while($watch.Elapsed.TotalSeconds -lt $until)
  if($r.version -ne 5 -and ($r.samples -le $start.samples -or $r.pcm_packets -le $start.pcm_packets -or ($r.version -eq 2 -and $r.refresh_count -le $start.refresh_count))){throw 'Live audio/SDRAM counters stopped'}
  if($r.version -eq 5){$checks.Add("$Command observed for $Seconds seconds: production state/error checks; packet/sample counters unavailable")}
  else{$checks.Add("$Command observed for $Seconds seconds: no hardware error, live audio counters (v2 also checks refresh)")}
 }
 $report.passed=$true
 Write-Host ('PASS '+($checks -join '; '))
}catch{$report.failure=$_.Exception.Message;throw}
finally{
 # Automated tests always leave sound disabled, including a failing smoke test.
 if($serial.IsOpen){
  if($Command -in @('Smoke','Soak') -and $records.Count -gt 0 -and $records[0].version -lt 4){try{[byte[]]$silence=77;$serial.Write($silence,0,1);Start-Sleep -Milliseconds 20}catch{}}
  $serial.Close()
 }
 $serial.Dispose();$report.finished=(Get-Date).ToString('o');$report.elapsed_seconds=$watch.Elapsed.TotalSeconds
 $report.checks=$checks.ToArray();$report.records=$records.ToArray()
 $report | ConvertTo-Json -Depth 5 | Set-Content -Encoding utf8 $Output
 Pop-Location
}

