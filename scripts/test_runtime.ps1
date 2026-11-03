param([switch]$Autoplay,[switch]$Media,[switch]$Notice,[switch]$Timed,[ValidateSet('none','badmeta','badwidget','badcrc')][string]$Fault='none')
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 $env:VERILATOR_ROOT='C:/msys64/mingw64/share/verilator'
 $env:PATH='C:/msys64/mingw64/bin;C:/msys64/usr/bin;'+$env:PATH
 if($Notice){$env:DMZ_TEST_PACKAGE='../../assets/platform/tf_notice_v2'}else{Remove-Item Env:DMZ_TEST_PACKAGE -ErrorAction SilentlyContinue}
 $sources=@(Get-ChildItem rtl/platform/*.sv | ForEach-Object FullName)
 $tops=@('tb_scene_runtime','tb_page_compositor','tb_audio_completion')
 if($Fault -ne 'none' -or $Autoplay){$tops=@('tb_scene_runtime')}
 if($Media){$sources+=@(Get-ChildItem rtl/media/*.sv | ForEach-Object FullName);$tops=@('tb_platform_media');$sources+='rtl/p2/dmz_pixel_fifo.sv'}
 foreach($top in $tops) {
  $name=$top -replace '^tb_',''
  $extra=@();if($Media){$extra=@('../../sim/platform/platform_disk.cpp')}
  & C:/msys64/mingw64/bin/verilator_bin.exe --no-skip-identical --cc --exe --timing -Wno-fatal --top-module $top --Mdir "build_system/sim_$name" $sources "sim/platform/$top.sv" "../../sim/platform/${top}_main.cpp" @extra *> "docs/${name}_lint.txt"
  if($LASTEXITCODE -ne 0){Get-Content "docs/${name}_lint.txt";throw 'UI translation failed'}
  Push-Location "build_system/sim_$name"
  try {
   & C:/msys64/mingw64/bin/mingw32-make.exe -f "V$top.mk" -j4 PYTHON3=C:/Users/fushenghe/.cache/codex-runtimes/codex-primary-runtime/dependencies/python/python.exe *> "../../docs/${name}_build.txt"
   if($LASTEXITCODE -ne 0){throw 'UI compile failed'}
   $runArgs=@();if($Autoplay){$runArgs+='+autoplay'};if($Notice){$runArgs=@('+notice')};if($Fault -ne 'none'){$runArgs+=('+'+$Fault)};if($Timed){$runArgs+='+timed'}
   & "./V$top.exe" @runArgs *> "../../docs/${name}$(if($Notice){'_notice'})$(if($Fault -ne 'none'){'_'+$Fault})$(if($Timed){'_timed'})$(if($Autoplay){'_autoplay'})_result.txt"
   if($LASTEXITCODE -ne 0){Get-Content "../../docs/${name}$(if($Notice){'_notice'})$(if($Fault -ne 'none'){'_'+$Fault})$(if($Timed){'_timed'})$(if($Autoplay){'_autoplay'})_result.txt";throw 'UI behavioral assertion failed'}
  } finally {Pop-Location}
  Get-Content "docs/${name}$(if($Notice){'_notice'})$(if($Fault -ne 'none'){'_'+$Fault})$(if($Timed){'_timed'})$(if($Autoplay){'_autoplay'})_result.txt"
 }
} finally {Pop-Location}
