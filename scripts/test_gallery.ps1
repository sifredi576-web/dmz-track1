param()
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 $env:VERILATOR_ROOT='C:/msys64/mingw64/share/verilator'
 $env:PATH='C:/msys64/mingw64/bin;C:/msys64/usr/bin;'+$env:PATH
 & C:/msys64/mingw64/bin/verilator_bin.exe --cc --exe --timing -Wno-fatal --top-module tb_gallery --Mdir build_system/sim_gallery rtl/p3/dmz_bmp_loader.sv sim/system/tb_gallery.sv ../../sim/system/gallery_main.cpp *> docs/gallery_lint.txt
 if($LASTEXITCODE -ne 0){throw 'Gallery translation failed'}
 Push-Location build_system/sim_gallery
 try {
  & C:/msys64/mingw64/bin/mingw32-make.exe -f Vtb_gallery.mk -j4 PYTHON3=C:/Users/fushenghe/.cache/codex-runtimes/codex-primary-runtime/dependencies/python/python.exe *> ../../docs/gallery_sim_build.txt
  if($LASTEXITCODE -ne 0){throw 'Gallery compile failed'}
  & ./Vtb_gallery.exe *> ../../docs/gallery_sim_result.txt
  if($LASTEXITCODE -ne 0){throw 'Gallery pixel/selection assertions failed'}
 }finally{Pop-Location}
 Get-Content docs/gallery_sim_result.txt
}finally{Pop-Location}
