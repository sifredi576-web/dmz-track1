param([string]$Port='COM8',[int]$Seconds=12,[string]$Output='docs/p3_hardware_status.json')
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
   if($bytes[0] -ne 0x50 -or $bytes[1] -ne 0x33 -or $bytes[2] -ne 0x53 -or $bytes[3] -ne 0x54){$bytes.RemoveAt(0);continue}
   $a=$bytes.GetRange(0,64).ToArray();[uint32[]]$w=0..15 | ForEach-Object {[BitConverter]::ToUInt32($a,$_ * 4)}
   [uint32]$xor=0;foreach($word in $w){$xor=$xor -bxor $word}
   if($xor -ne 0){$bytes.RemoveAt(0);continue}
   $bytes.RemoveRange(0,64)
   $r=[ordered]@{time=(Get-Date).ToString('o');version=($w[1]-band 255);init=[bool]($w[1]-band 256);bist_done=[bool]($w[1]-band 512);bist_passed=[bool]($w[1]-band 1024);display_valid=[bool]($w[1]-band 2048);front_bank=[int][bool]($w[1]-band 4096);fifo_fault=[bool]($w[1]-band 8192);fb_fault=[bool]($w[1]-band 16384);pll_locked=[bool]($w[1]-band 32768);raw_state_word=$w[2];checked_words=$w[3];errors=$w[4];first_bad_word=$w[5];expected=('{0:X8}'-f $w[6]);actual=('{0:X8}'-f $w[7]);refresh_count=$w[8];swaps=$w[9];pixels_loaded=$w[10];sectors_read=$w[11];underflow_pixels=$w[12];fifo_words=$w[13];sd_lba=$w[14]}
   $r.sd_error=($w[2]-shr 24)-band 255; $r.image_error=($w[2]-shr 16)-band 255; $r.sd_state=($w[2]-shr 8)-band 255; $r.image_state=$w[2]-band 255; $r.pixels_loaded=$w[10]; $r.sectors_read=$w[11]; $r.sd_lba=$w[14]
   $records.Add([pscustomobject]$r)
   Write-Output ('BIST={0} SD={1}/{2} BMP={3}/{4} pixels={5} sectors={6} display={7} underrun={8}' -f $r.bist_passed,$r.sd_state,$r.sd_error,$r.image_state,$r.image_error,$r.pixels_loaded,$r.sectors_read,$r.display_valid,$r.underflow_pixels)
  }
 }
}finally{if($serial.IsOpen){$serial.Close()};$serial.Dispose()}
if($records.Count -eq 0){throw 'No valid P2 telemetry received'}
$records.ToArray() | ConvertTo-Json -Depth 3 | Set-Content -Encoding utf8 $Output

