param([string]$Port='COM3',[int]$Seconds=12,[string]$Output='docs/p2_hardware_status.json')
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
   if($bytes[0] -ne 0x50 -or $bytes[1] -ne 0x32 -or $bytes[2] -ne 0x53 -or $bytes[3] -ne 0x54){$bytes.RemoveAt(0);continue}
   $a=$bytes.GetRange(0,64).ToArray();[uint32[]]$w=0..15 | ForEach-Object {[BitConverter]::ToUInt32($a,$_ * 4)}
   [uint32]$xor=0;foreach($word in $w){$xor=$xor -bxor $word}
   if($xor -ne 0){$bytes.RemoveAt(0);continue}
   $bytes.RemoveRange(0,64)
   $r=[ordered]@{time=(Get-Date).ToString('o');version=($w[1]-band 255);init=[bool]($w[1]-band 256);bist_done=[bool]($w[1]-band 512);bist_passed=[bool]($w[1]-band 1024);display_valid=[bool]($w[1]-band 2048);front_bank=[int][bool]($w[1]-band 4096);fifo_fault=[bool]($w[1]-band 8192);fb_fault=[bool]($w[1]-band 16384);pll_locked=[bool]($w[1]-band 32768);bist_status=$w[2];checked_words=$w[3];errors=$w[4];first_bad_word=$w[5];expected=('{0:X8}'-f $w[6]);actual=('{0:X8}'-f $w[7]);refresh_count=$w[8];swaps=$w[9];frames_written=$w[10];dma_bursts=$w[11];underflow_pixels=$w[12];fifo_words=$w[13];uptime_cycles=$w[14]}
   $records.Add([pscustomobject]$r)
   Write-Output ('BIST={0} checked={1} errors={2} swaps={3} underflow={4} FIFO={5}' -f $r.bist_passed,$r.checked_words,$r.errors,$r.swaps,$r.underflow_pixels,$r.fifo_words)
  }
 }
}finally{if($serial.IsOpen){$serial.Close()};$serial.Dispose()}
if($records.Count -eq 0){throw 'No valid P2 telemetry received'}
$records.ToArray() | ConvertTo-Json -Depth 3 | Set-Content -Encoding utf8 $Output
