param([string]$Port='COM8',[int]$Seconds=12,[string]$Output='docs/audio_hardware_status.json')
$ErrorActionPreference='Stop'
$serial=New-Object System.IO.Ports.SerialPort $Port,115200,None,8,One
$serial.ReadTimeout=1000
$bytes=New-Object 'System.Collections.Generic.List[byte]'
$records=New-Object 'System.Collections.Generic.List[object]'
try {
 $serial.Open();$serial.DiscardInBuffer();$until=(Get-Date).AddSeconds($Seconds)
 while((Get-Date) -lt $until){
  try {$v=$serial.ReadByte();$bytes.Add([byte]$v)}catch [System.TimeoutException]{continue}
  while($bytes.Count -ge 64){
   if($bytes[0] -ne 0x41 -or $bytes[1] -ne 0x56 -or $bytes[2] -ne 0x53 -or $bytes[3] -ne 0x54){$bytes.RemoveAt(0);continue}
   $a=$bytes.GetRange(0,64).ToArray();[uint32[]]$w=0..15 | ForEach-Object {[BitConverter]::ToUInt32($a,$_ * 4)}
   [uint32]$xor=0;foreach($word in $w){$xor=$xor -bxor $word}
   if($xor -ne 0){$bytes.RemoveAt(0);continue}
   $bytes.RemoveRange(0,64)
   $r=[ordered]@{time=(Get-Date).ToString('o');version=($w[1]-band 255);init=[bool]($w[1]-band 256);bist_done=[bool]($w[1]-band 512);bist_passed=[bool]($w[1]-band 1024);display_valid=[bool]($w[1]-band 2048);fifo_fault=[bool]($w[1]-band 8192);fb_fault=[bool]($w[1]-band 16384);pll_locked=[bool]($w[1]-band 32768);tone_muted=[bool]($w[1]-band 65536);mute_switch=[bool]($w[1]-band 131072);beep_phase=[bool]($w[1]-band 262144);continuous=[bool]($w[1]-band 524288);audio_mode=($w[1]-shr 20)-band 3;samples=$w[2];pcm_packets=$w[3];nonzero_pcm_packets=$w[4];acr_packets=$w[5];cts=$w[6];acr_n=($w[7]-shr 16);sample_rate=($w[7]-band 65535);bist_errors=$w[8];pixels=$w[9];underflow_pixels=$w[10];sd_error=($w[11]-shr 24)-band 255;image_error=($w[11]-shr 16)-band 255;checked_words=$w[12];pcm_pair=('{0:X8}'-f $w[13]);audio_second_clock=$w[14]}
   $records.Add([pscustomobject]$r)
   Write-Output ('mute={0} switch={1} continuous={2} samples={3} PCM={4} nonzero={5} ACR={6} N/CTS={7}/{8} picture={9} underrun={10}' -f $r.tone_muted,$r.mute_switch,$r.continuous,$r.samples,$r.pcm_packets,$r.nonzero_pcm_packets,$r.acr_packets,$r.acr_n,$r.cts,$r.display_valid,$r.underflow_pixels)
  }
 }
}finally{if($serial.IsOpen){$serial.Close()};$serial.Dispose()}
if($records.Count -eq 0){throw 'No valid audio-test telemetry received'}
$records.ToArray() | ConvertTo-Json -Depth 3 | Set-Content -Encoding utf8 $Output

