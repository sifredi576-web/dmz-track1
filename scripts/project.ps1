param(
 [ValidateSet('Build','Test','Download','Status','Mute','Tone','Beep','Switches','Reload','Smoke','Soak','Next','Previous','Auto','Pause','AudioPlay','AudioPause','AudioResume','VolumeUp','VolumeDown','Menu','MenuPrevious','MenuNext','MenuType','MenuSelect')][string]$Action='Status',
 [string]$Port='', [int]$Seconds=10, [string]$TdRoot='D:/ANLU',
 [ValidateSet('Auto','ModelSim','Verilator')][string]$Simulator='Auto',
 [ValidateSet('Base','Full')][string]$Profile='Base')
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
New-Item -ItemType Directory -Force (Join-Path $root "build/reports") | Out-Null
Push-Location $root
try {
 switch($Action){
  Build { & ./scripts/build/build_system.ps1 -TdRoot $TdRoot }
  Test {
   & ./scripts/test/run.ps1 -Simulator $Simulator -Profile $Profile
  }
  Download { & ./scripts/board/download_system.ps1 -TdRoot $TdRoot }
  default {
   $commands=@{Status='Status';Mute='M';Tone='T';Beep='B';Switches='S';Reload='R';Smoke='Smoke';Soak='Soak';Next='N';Previous='P';Auto='A';Pause='H';AudioPlay='W';AudioPause='K';AudioResume='L';VolumeUp='+';VolumeDown='-';Menu='F';MenuPrevious='I';MenuNext='O';MenuType='V';MenuSelect='E'}
   $output=if($Action -eq 'Soak'){'build/reports/system_soak_latest.json'}elseif($Action -eq 'Smoke'){'build/reports/system_smoke_latest.json'}else{'build/reports/system_hardware_status.json'}
   & ./scripts/board/system_console.ps1 -Command $commands[$Action] -Port $Port -Seconds $Seconds -Output $output
  }
 }
}finally{Pop-Location}
