param()
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 $env:VERILATOR_ROOT='C:/msys64/mingw64/share/verilator'
 $env:PATH='C:/msys64/mingw64/bin;C:/msys64/usr/bin;'+$env:PATH
 & C:/msys64/mingw64/bin/verilator_bin.exe --no-skip-identical --cc --exe --timing -Wno-fatal --top-module tb_trigger --Mdir build_system/sim_trigger rtl/system/dmz_scene_control.sv rtl/system/dmz_audio_visual.sv sim/system/tb_trigger.sv ../../sim/system/trigger_main.cpp *> docs/trigger_lint.txt
 if($LASTEXITCODE -ne 0){throw 'Command FIFO translation failed'}
 Push-Location build_system/sim_trigger
 try {
  & C:/msys64/mingw64/bin/mingw32-make.exe -f Vtb_trigger.mk -j4 PYTHON3=C:/Users/fushenghe/.cache/codex-runtimes/codex-primary-runtime/dependencies/python/python.exe *> ../../docs/trigger_sim_build.txt
  if($LASTEXITCODE -ne 0){throw 'Command FIFO compile failed'}
  & ./Vtb_trigger.exe *> ../../docs/trigger_sim_result.txt
  if($LASTEXITCODE -ne 0){Get-Content ../../docs/trigger_sim_result.txt;throw 'Command FIFO snapshot assertions failed'}
 }finally{Pop-Location}
 Get-Content docs/trigger_sim_result.txt
}finally{Pop-Location}



