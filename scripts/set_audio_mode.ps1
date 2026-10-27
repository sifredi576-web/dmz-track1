param([ValidateSet('U','M','B','S')][string]$Mode='U',[string]$Port='COM8')
$ErrorActionPreference='Stop'
$serial=New-Object System.IO.Ports.SerialPort $Port,115200,None,8,One
try{
 $serial.Open();$serial.Write($Mode);$serial.BaseStream.Flush();Start-Sleep -Milliseconds 100
 Write-Output "Sent audio mode $Mode to $Port"
}finally{if($serial.IsOpen){$serial.Close()};$serial.Dispose()}

