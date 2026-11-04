param([ValidateSet('Status','Up','Down','Left','Right','Confirm','Back','Home','Replay','AutoToggle','Notice','Priority','ExitNotice','Mute','Unmute','Pause','Resume','VolumeUp','VolumeDown','Menu','Reload','Trigger')][string]$Action='Status',
 [Parameter(Mandatory=$true)][string]$Port,[int]$Seconds=2)
$ErrorActionPreference='Stop'
if($Seconds -lt 1 -or $Seconds -gt 3600){throw 'Seconds must be 1..3600'}
$root=Split-Path (Split-Path $PSScriptRoot -Parent) -Parent
$out=Join-Path $root 'build/reports';New-Item -ItemType Directory -Force $out|Out-Null
$serial=[IO.Ports.SerialPort]::new($Port,115200,[IO.Ports.Parity]::None,8,[IO.Ports.StopBits]::One)
$serial.ReadTimeout=200;$serial.WriteTimeout=1000;$serial.DtrEnable=$false;$serial.RtsEnable=$false
$bytes=[Collections.Generic.List[byte]]::new();$records=[Collections.Generic.List[object]]::new();$watch=[Diagnostics.Stopwatch]::StartNew()
function Read-Frame {
 $deadline=$watch.Elapsed.TotalSeconds+4
 while($watch.Elapsed.TotalSeconds -lt $deadline){
  try{$bytes.Add([byte]$serial.ReadByte())}catch [TimeoutException]{continue}
  while($bytes.Count -ge 32){
   if($bytes[0] -ne 0x54 -or $bytes[1] -ne 0x31 -or $bytes[2] -ne 0x53 -or $bytes[3] -ne 0x54 -or $bytes[4] -ne 5){$bytes.RemoveAt(0);continue}
   $frame=$bytes.GetRange(0,32).ToArray();[uint32[]]$w=0..7|ForEach-Object {[BitConverter]::ToUInt32($frame,$_ * 4)}
   [uint32]$xor=0;foreach($word in $w){$xor=$xor -bxor $word}
   if($xor){$bytes.RemoveAt(0);continue};$bytes.RemoveRange(0,32)
   $r=[pscustomobject]@{version=5;time=(Get-Date).ToString('o');display_valid=[bool]($w[1]-band 2048);bist_passed=[bool]($w[1]-band 1024);fifo_fault=[bool]($w[1]-band 8192);fb_fault=[bool]($w[1]-band 16384);pll_locked=[bool]($w[1]-band 32768);
    platform_active=[bool]($w[2]-band 1);page_loading=[bool]($w[2]-band 2);focus=($w[2]-shr 8)-band 7;current_page=($w[2]-shr 11)-band 31;page_count=($w[2]-shr 16)-band 63;score=($w[2]-shr 22)-band 15;total=($w[2]-shr 26)-band 15;
    config_error=($w[3]-shr 8)-band 255;notice_priority=($w[3]-shr 16)-band 3;sd_error=($w[4]-shr 24)-band 255;image_error=($w[4]-shr 16)-band 255;wav_error=($w[4]-shr 8)-band 255;
    volume=($w[5]-shr 4)-band 15;paused=[bool]($w[5]-band 8);muted=[bool]($w[5]-band 4);command_count=$w[5]-shr 16;last_command=($w[5]-shr 8)-band 255;menu_open=[bool]($w[6]-band 1)}
   $records.Add($r);return $r
  }
 }
 throw 'No valid v5 frame received within four seconds'
}
try{
 $serial.Open();$serial.DiscardInBuffer();$before=Read-Frame
 if($Action -ne 'Status'){
  $actions=@{Up=1;Down=2;Left=3;Right=4;Confirm=5;Back=6;Home=7;Replay=8;AutoToggle=9;Notice=10;Priority=11;ExitNotice=12}
  if($actions.ContainsKey($Action)){$command=[byte](0xd0+$actions[$Action])}
  else{$command=[byte][char](@{Mute='M';Unmute='U';Pause='K';Resume='L';VolumeUp='+';VolumeDown='-';Menu='F';Reload='R';Trigger='~'}[$Action])}
  $serial.Write([byte[]]@($command),0,1)
 }
 $until=$watch.Elapsed.TotalSeconds+$Seconds
 do{$last=Read-Frame}while($watch.Elapsed.TotalSeconds -lt $until)
 $last|ConvertTo-Json -Compress
}finally{
 if($serial.IsOpen){$serial.Close()};$serial.Dispose()
 @{action=$Action;port=$Port;records=$records.ToArray()}|ConvertTo-Json -Depth 4|Set-Content "$out/board_status.json" -Encoding utf8
}
