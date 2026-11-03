param()
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 $env:VERILATOR_ROOT='C:/msys64/mingw64/share/verilator'
 $env:PATH='C:/msys64/mingw64/bin;C:/msys64/usr/bin;'+$env:PATH
 & C:/msys64/mingw64/bin/verilator_bin.exe --no-skip-identical --cc --exe --timing -Wno-fatal --top-module tb_status_panel --Mdir build_system/sim_status_panel rtl/system/dmz_status_panel.sv sim/system/tb_status_panel.sv ../../sim/system/status_panel_main.cpp *> docs/status_panel_lint.txt
 if($LASTEXITCODE -ne 0){throw 'Command FIFO translation failed'}
 Push-Location build_system/sim_status_panel
 try {
  & C:/msys64/mingw64/bin/mingw32-make.exe -f Vtb_status_panel.mk -j4 PYTHON3=C:/Users/fushenghe/.cache/codex-runtimes/codex-primary-runtime/dependencies/python/python.exe *> ../../docs/status_panel_sim_build.txt
  if($LASTEXITCODE -ne 0){throw 'Command FIFO compile failed'}
  & ./Vtb_status_panel.exe *> ../../docs/status_panel_sim_result.txt
  if($LASTEXITCODE -ne 0){Get-Content ../../docs/status_panel_sim_result.txt;throw 'Command FIFO snapshot assertions failed'}
 }finally{Pop-Location}
 Get-Content docs/status_panel_sim_result.txt
}finally{Pop-Location}



