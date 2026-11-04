param([ValidateSet('Build','Test','Package','Download')][string]$Action='Build',
 [string]$TdRoot='', [string]$IcarusRoot='', [string]$Python='python')
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try{
 switch($Action){
  Build {if(!$TdRoot){throw 'Specify -TdRoot'};& ./scripts/build/build_system.ps1 -TdRoot $TdRoot}
  Test {if(!$IcarusRoot){throw 'Specify -IcarusRoot'};& ./scripts/test/run.ps1 -IcarusRoot $IcarusRoot -Python $Python}
  Package {
   $target=[IO.Path]::GetFullPath((Join-Path $root 'release/current/tf'))
   if(!$target.StartsWith([IO.Path]::GetFullPath($root)+[IO.Path]::DirectorySeparatorChar,[StringComparison]::OrdinalIgnoreCase)){throw 'Invalid generated TF path'}
   if(Test-Path -LiteralPath $target){Remove-Item -LiteralPath $target -Recurse -Force}
   & $Python ./scripts/assets/pack_platform.py assets/course.json --materials assets --output $target
   if($LASTEXITCODE -ne 0){throw 'Package failed'}
  }
  Download {if(!$TdRoot){throw 'Specify -TdRoot'};& ./scripts/board/download_system.ps1 -TdRoot $TdRoot}
 }
}finally{Pop-Location}
