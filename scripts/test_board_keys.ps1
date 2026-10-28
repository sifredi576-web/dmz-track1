param()
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 $env:VERILATOR_ROOT='C:/msys64/mingw64/share/verilator'
 $env:PATH='C:/msys64/mingw64/bin;C:/msys64/usr/bin;'+$env:PATH
 & C:/msys64/mingw64/bin/verilator_bin.exe --cc --exe --timing -Wno-fatal --top-module tb_board_keys --Mdir build_system/sim_keys rtl/system/dmz_matrix_keys.sv rtl/system/dmz_board_commands.sv rtl/system/dmz_media_control.sv sim/system/tb_board_keys.sv ../../sim/system/keys_main.cpp *> docs/board_keys_lint.txt
 if($LASTEXITCODE -ne 0){throw 'Board keys translation failed'}
 Push-Location build_system/sim_keys
 try {
  & C:/msys64/mingw64/bin/mingw32-make.exe -f Vtb_board_keys.mk -j4 PYTHON3=C:/Users/fushenghe/.cache/codex-runtimes/codex-primary-runtime/dependencies/python/python.exe *> ../../docs/board_keys_sim_build.txt
  if($LASTEXITCODE -ne 0){throw 'Board keys compile failed'}
  & ./Vtb_board_keys.exe *> ../../docs/board_keys_sim_result.txt
  if($LASTEXITCODE -ne 0){Get-Content ../../docs/board_keys_sim_result.txt;throw 'Board keys snapshot assertions failed'}
 }finally{Pop-Location}
 Get-Content docs/board_keys_sim_result.txt
}finally{Pop-Location}


