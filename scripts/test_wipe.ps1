param()
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 $env:VERILATOR_ROOT='C:/msys64/mingw64/share/verilator'
 $env:PATH='C:/msys64/mingw64/bin;C:/msys64/usr/bin;'+$env:PATH
 & C:/msys64/mingw64/bin/verilator_bin.exe --cc --exe --timing --unroll-count 1 -Wno-fatal --top-module tb_wipe --Mdir build_system/sim_wipe rtl/p3/dmz_image_framebuffer.sv sim/system/tb_wipe.sv ../../sim/system/wipe_main.cpp *> docs/wipe_lint.txt
 if($LASTEXITCODE -ne 0){throw 'Command FIFO translation failed'}
 Push-Location build_system/sim_wipe
 try {
  & C:/msys64/mingw64/bin/mingw32-make.exe -f Vtb_wipe.mk -j4 PYTHON3=C:/Users/fushenghe/.cache/codex-runtimes/codex-primary-runtime/dependencies/python/python.exe *> ../../docs/wipe_sim_build.txt
  if($LASTEXITCODE -ne 0){throw 'Command FIFO compile failed'}
  & ./Vtb_wipe.exe *> ../../docs/wipe_sim_result.txt
  if($LASTEXITCODE -ne 0){Get-Content ../../docs/wipe_sim_result.txt;throw 'Command FIFO snapshot assertions failed'}
 }finally{Pop-Location}
 Get-Content docs/wipe_sim_result.txt
}finally{Pop-Location}




