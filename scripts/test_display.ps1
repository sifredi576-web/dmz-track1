param()
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 $env:VERILATOR_ROOT='C:/msys64/mingw64/share/verilator'
 $env:PATH='C:/msys64/mingw64/bin;C:/msys64/usr/bin;'+$env:PATH
 & C:/msys64/mingw64/bin/verilator_bin.exe --no-skip-identical --cc --exe --timing -Wno-fatal --top-module tb_display --Mdir build_system/sim_display rtl/system/dmz_display_control.sv rtl/system/dmz_picture_adjust.sv sim/system/tb_display.sv ../../sim/system/display_main.cpp *> docs/display_lint.txt
 if($LASTEXITCODE -ne 0){throw 'Command FIFO translation failed'}
 Push-Location build_system/sim_display
 try {
  & C:/msys64/mingw64/bin/mingw32-make.exe -f Vtb_display.mk -j4 PYTHON3=C:/Users/fushenghe/.cache/codex-runtimes/codex-primary-runtime/dependencies/python/python.exe *> ../../docs/display_sim_build.txt
  if($LASTEXITCODE -ne 0){throw 'Command FIFO compile failed'}
  & ./Vtb_display.exe *> ../../docs/display_sim_result.txt
  if($LASTEXITCODE -ne 0){Get-Content ../../docs/display_sim_result.txt;throw 'Command FIFO snapshot assertions failed'}
 }finally{Pop-Location}
 Get-Content docs/display_sim_result.txt
}finally{Pop-Location}



