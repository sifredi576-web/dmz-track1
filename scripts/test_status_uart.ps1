param()
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 $env:VERILATOR_ROOT='C:/msys64/mingw64/share/verilator'
 $env:PATH='C:/msys64/mingw64/bin;C:/msys64/usr/bin;'+$env:PATH
 & C:/msys64/mingw64/bin/verilator_bin.exe --cc --exe --timing -Wno-fatal --top-module tb_status_uart --Mdir build_system/sim_status rtl/p2/dmz_status_uart.sv rtl/audio_test/dmz_uart_rx.sv sim/media/tb_status_uart.sv ../../sim/media/status_main.cpp *> docs/status_uart_lint.txt
 if($LASTEXITCODE -ne 0){throw 'UART translation failed'}
 Push-Location build_system/sim_status
 try {
  & C:/msys64/mingw64/bin/mingw32-make.exe -f Vtb_status_uart.mk -j4 PYTHON3=C:/Users/fushenghe/.cache/codex-runtimes/codex-primary-runtime/dependencies/python/python.exe *> ../../docs/status_uart_sim_build.txt
  if($LASTEXITCODE -ne 0){throw 'Shared media compile failed'}
  & ./Vtb_status_uart.exe *> ../../docs/status_uart_sim_result.txt
  if($LASTEXITCODE -ne 0){Get-Content ../../docs/status_uart_sim_result.txt;throw 'UART snapshot assertions failed'}
 }finally{Pop-Location}
 Get-Content docs/status_uart_sim_result.txt
}finally{Pop-Location}
