param()
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 $env:VERILATOR_ROOT='C:/msys64/mingw64/share/verilator'
 $env:PATH='C:/msys64/mingw64/bin;C:/msys64/usr/bin;'+$env:PATH
 New-Item -ItemType Directory -Force build_system | Out-Null
 & C:/msys64/mingw64/bin/verilator_bin.exe --cc --exe --main --timing -Wno-fatal --top-module tb_system_control --Mdir build_system/sim_control rtl/audio_test/dmz_uart_rx.sv rtl/system/dmz_media_control.sv rtl/system/dmz_status_cdc.sv sim/system/tb_system_control.sv *> docs/system_control_lint.txt
 if($LASTEXITCODE -ne 0){throw 'Control simulation translation failed'}
 Push-Location build_system/sim_control
 try {
  & C:/msys64/mingw64/bin/mingw32-make.exe -f Vtb_system_control.mk -j4 PYTHON3=C:/Users/fushenghe/.cache/codex-runtimes/codex-primary-runtime/dependencies/python/python.exe *> ../../docs/system_control_sim_build.txt
  if($LASTEXITCODE -ne 0){throw 'Control simulation compile failed'}
  & ./Vtb_system_control.exe *> ../../docs/system_control_sim_result.txt
  if($LASTEXITCODE -ne 0){throw 'Control simulation assertions failed'}
 }finally{Pop-Location}
 Get-Content docs/system_control_sim_result.txt
}finally{Pop-Location}
