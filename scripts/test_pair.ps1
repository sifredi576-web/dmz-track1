param()
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 $env:VERILATOR_ROOT='C:/msys64/mingw64/share/verilator'
 $env:PATH='C:/msys64/mingw64/bin;C:/msys64/usr/bin;'+$env:PATH
 & C:/msys64/mingw64/bin/verilator_bin.exe --cc --exe --timing -Wno-fatal --top-module tb_pair --Mdir build_system/sim_pair rtl/media/dmz_pair_control.sv sim/media/tb_pair.sv ../../sim/media/pair_main.cpp *> docs/pair_lint.txt
 if($LASTEXITCODE -ne 0){throw 'Paired playback translation failed'}
 Push-Location build_system/sim_pair
 try {
  & C:/msys64/mingw64/bin/mingw32-make.exe -f Vtb_pair.mk -j4 PYTHON3=C:/Users/fushenghe/.cache/codex-runtimes/codex-primary-runtime/dependencies/python/python.exe *> ../../docs/pair_sim_build.txt
  if($LASTEXITCODE -ne 0){throw 'Paired playback compile failed'}
  & ./Vtb_pair.exe *> ../../docs/pair_sim_result.txt
  if($LASTEXITCODE -ne 0){Get-Content ../../docs/pair_sim_result.txt;throw 'Paired playback snapshot assertions failed'}
 }finally{Pop-Location}
 Get-Content docs/pair_sim_result.txt
}finally{Pop-Location}




