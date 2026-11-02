param()
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 $env:VERILATOR_ROOT='C:/msys64/mingw64/share/verilator'
 $env:PATH='C:/msys64/mingw64/bin;C:/msys64/usr/bin;'+$env:PATH
 $sources=@(Get-ChildItem rtl/media/*.sv | ForEach-Object FullName) + @(Get-ChildItem rtl/platform/*.sv | ForEach-Object FullName)
 & C:/msys64/mingw64/bin/verilator_bin.exe --no-skip-identical --cc --exe --timing -Wno-fatal --top-module tb_media --Mdir build_system/sim_media @sources sim/media/tb_media.sv ../../sim/media/media_main.cpp *> docs/media_lint.txt
 if($LASTEXITCODE -ne 0){throw 'Shared media translation failed'}
 Push-Location build_system/sim_media
 try {
  & C:/msys64/mingw64/bin/mingw32-make.exe -f Vtb_media.mk -j4 PYTHON3=C:/Users/fushenghe/.cache/codex-runtimes/codex-primary-runtime/dependencies/python/python.exe *> ../../docs/media_sim_build.txt
  if($LASTEXITCODE -ne 0){throw 'Shared media compile failed'}
  & ./Vtb_media.exe *> ../../docs/media_sim_result.txt
  if($LASTEXITCODE -ne 0){Get-Content ../../docs/media_sim_result.txt;throw 'Shared media assertion failed'}
  & ./Vtb_media.exe +fat16 +mbr *> ../../docs/media_fat16_mbr_result.txt
  if($LASTEXITCODE -ne 0){Get-Content ../../docs/media_fat16_mbr_result.txt;throw 'FAT16/MBR media assertion failed'}
  & ./Vtb_media.exe +rgba +top *> ../../docs/media_rgba_top_result.txt
  if($LASTEXITCODE -ne 0){Get-Content ../../docs/media_rgba_top_result.txt;throw '32-bit/top-down media assertions failed'}
  foreach($case in @('wavinvalid','shortchain','nowav')){
   & ./Vtb_media.exe "+$case" *> "../../docs/media_${case}_result.txt"
   if($LASTEXITCODE -ne 0){Get-Content "../../docs/media_${case}_result.txt";throw "Media recovery case failed: $case"}
  }
  & ./Vtb_media.exe +multiwav *> ../../docs/media_multiwav_result.txt
  if($LASTEXITCODE -ne 0){Get-Content ../../docs/media_multiwav_result.txt;throw 'Multi-WAV switching failed'}
  & ./Vtb_media.exe +multiwav +paired *> ../../docs/media_paired_result.txt
  if($LASTEXITCODE -ne 0){Get-Content ../../docs/media_paired_result.txt;throw 'Paired media failed'}
  & ./Vtb_media.exe +platform *> ../../docs/media_platform_result.txt
  if($LASTEXITCODE -ne 0){Get-Content ../../docs/media_platform_result.txt;throw 'Platform bootstrap failed'}
  & ./Vtb_media.exe +platform +configcrcerror *> ../../docs/media_platform_invalid_result.txt
  if($LASTEXITCODE -ne 0){Get-Content ../../docs/media_platform_invalid_result.txt;throw 'Invalid config fallback failed'}
 }finally{Pop-Location}
 Get-Content docs/media_sim_result.txt;Get-Content docs/media_fat16_mbr_result.txt
}finally{Pop-Location}
