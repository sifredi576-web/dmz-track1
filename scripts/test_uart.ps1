param([string]$Port = 'COM3')
$ErrorActionPreference = 'Stop'
$serial = New-Object System.IO.Ports.SerialPort $Port,115200,None,8,One
$serial.ReadTimeout = 2000
$serial.WriteTimeout = 2000
try {
 $serial.Open()
 $serial.DiscardInBuffer()
 [byte[]]$sent = 0..255
 $serial.Write($sent,0,$sent.Length)
 [byte[]]$received = New-Object byte[] 256
 $count = 0
 while ($count -lt 256) { $count += $serial.Read($received,$count,256-$count) }
 for ($i=0; $i -lt 256; $i++) { if ($received[$i] -ne $sent[$i]) { throw "Mismatch at byte $i" } }
 Write-Output "PASS: $Port 115200 8N1, 256/256 bytes echoed"
} finally { if ($serial.IsOpen) { $serial.Close() }; $serial.Dispose() }
