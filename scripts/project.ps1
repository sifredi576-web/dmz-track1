param([ValidateSet('Build','Test','Package','Download','Status')][string]$Action='Status',
 [string]$TdRoot='', [string]$IcarusRoot='', [string]$Port='',[string]$Python='python')
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try{
 switch($Action){
  Build {if(!$TdRoot){throw 'Specify -TdRoot'};& ./scripts/build/build_system.ps1 -TdRoot $TdRoot}
  Test {if(!$IcarusRoot){throw 'Specify -IcarusRoot'};& ./scripts/test/run.ps1 -IcarusRoot $IcarusRoot -Python $Python}
  Package {& $Python ./scripts/assets/pack_platform.py assets/course.json --materials assets --output release/current/tf;if($LASTEXITCODE -ne 0){throw 'Package failed'}}
  Download {if(!$TdRoot){throw 'Specify -TdRoot'};& ./scripts/board/download_system.ps1 -TdRoot $TdRoot}
  Status {if(!$Port){throw 'Specify -Port'};& ./scripts/board/platform_console.ps1 -Port $Port}
 }
}finally{Pop-Location}
