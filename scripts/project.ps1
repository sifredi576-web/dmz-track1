param(
 [ValidateSet('Build','Test','Download','Status','Mute','Tone','Beep','Switches','Reload','Smoke','Soak','Next','Previous','Auto','Pause','AudioPlay','Replay','AudioPause','AudioResume','VolumeUp','VolumeDown','Menu','MenuPrevious','MenuNext','MenuType','MenuSelect')][string]$Action='Status',
 [string]$Port='', [int]$Seconds=10, [string]$TdRoot='D:/ANLU')
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 switch($Action){
  Build { & ./scripts/build_system.ps1 -TdRoot $TdRoot }
  Test {
   & ./scripts/test_board_keys.ps1
   & ./scripts/test_osd_menu.ps1
   & ./scripts/test_scene_visual.ps1
   & ./scripts/test_pair.ps1
   & ./scripts/test_platform.ps1
   & ./scripts/test_ui.ps1
   & ./scripts/test_runtime.ps1
   & ./scripts/test_runtime.ps1 -Media
   & ./scripts/test_display.ps1
   & ./scripts/test_scaler.ps1
   & ./scripts/test_wipe.ps1
   & ./scripts/test_command_fifo.ps1
   & ./scripts/test_p1.ps1
   & ./scripts/test_p2.ps1
   & ./scripts/test_p2.ps1 -Words 4096 -InjectFault
   & ./scripts/test_p3.ps1
   & ./scripts/test_system_control.ps1
   & ./scripts/test_media.ps1
   & ./scripts/test_status_uart.ps1
   & ./scripts/test_wav.ps1
   Write-Output 'PASS: HDMI, SDRAM/display, faults, SD/FAT/BMP, shared FAT/BMP/WAV/control and diagnostic UART'
  }
  Download { & ./scripts/download_system.ps1 -TdRoot $TdRoot }
  default {
   $commands=@{Status='Status';Mute='M';Tone='T';Beep='B';Switches='S';Reload='R';Smoke='Smoke';Soak='Soak';Next='N';Previous='P';Auto='A';Pause='H';AudioPlay='W';Replay='J';AudioPause='K';AudioResume='L';VolumeUp='+';VolumeDown='-';Menu='F';MenuPrevious='I';MenuNext='O';MenuType='V';MenuSelect='E'}
   $output=if($Action -eq 'Soak'){'docs/system_soak_latest.json'}elseif($Action -eq 'Smoke'){'docs/system_smoke_latest.json'}else{'docs/system_hardware_status.json'}
   & ./scripts/system_console.ps1 -Command $commands[$Action] -Port $Port -Seconds $Seconds -Output $output
  }
 }
}finally{Pop-Location}
