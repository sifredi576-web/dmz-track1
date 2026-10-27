param(
 [ValidateSet('Build','Test','Download','Status','Mute','Tone','Beep','Switches','Reload','Smoke','Soak','Next','Previous','Auto','Pause')][string]$Action='Status',
 [string]$Port='', [int]$Seconds=10, [string]$TdRoot='D:/ANLU')
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 switch($Action){
  Build { & ./scripts/build_system.ps1 -TdRoot $TdRoot }
  Test {
   & ./scripts/test_p1.ps1
   & ./scripts/test_p2.ps1
   & ./scripts/test_p2.ps1 -Words 4096 -InjectFault
   & ./scripts/test_p3.ps1
   & ./scripts/test_system_control.ps1
   & ./scripts/test_system_integration.ps1
   & ./scripts/test_wav.ps1
   Write-Output 'PASS: HDMI, SDRAM/display, faults, SD/FAT/BMP, unified integration/control, standalone WAV decoder'
  }
  Download { & ./scripts/download_system.ps1 -TdRoot $TdRoot }
  default {
   $commands=@{Status='Status';Mute='M';Tone='U';Beep='B';Switches='S';Reload='R';Smoke='Smoke';Soak='Soak';Next='N';Previous='P';Auto='A';Pause='H'}
   $output=if($Action -eq 'Soak'){'docs/system_soak_latest.json'}elseif($Action -eq 'Smoke'){'docs/system_smoke_latest.json'}else{'docs/system_hardware_status.json'}
   & ./scripts/system_console.ps1 -Command $commands[$Action] -Port $Port -Seconds $Seconds -Output $output
  }
 }
}finally{Pop-Location}
