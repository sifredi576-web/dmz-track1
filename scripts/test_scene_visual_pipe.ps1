param()
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 $env:VERILATOR_ROOT='C:/msys64/mingw64/share/verilator'
 $env:PATH='C:/msys64/mingw64/bin;C:/msys64/usr/bin;'+$env:PATH
 & C:/msys64/mingw64/bin/verilator_bin.exe --no-skip-identical --cc --exe --timing -Wno-fatal --top-module tb_scene_visual -GPIPELINED=1 --Mdir build_system/sim_scene_pipe rtl/system/dmz_scene_control.sv rtl/system/dmz_audio_visual.sv sim/system/tb_scene_visual.sv ../../sim/system/scene_main.cpp *> docs/scene_visual_pipe_lint.txt
 if($LASTEXITCODE -ne 0){throw 'Command FIFO translation failed'}
 Push-Location build_system/sim_scene_pipe
 try {
  & C:/msys64/mingw64/bin/mingw32-make.exe -f Vtb_scene_visual.mk -j4 PYTHON3=C:/Users/fushenghe/.cache/codex-runtimes/codex-primary-runtime/dependencies/python/python.exe *> ../../docs/scene_visual_pipe_sim_build.txt
  if($LASTEXITCODE -ne 0){throw 'Command FIFO compile failed'}
  & ./Vtb_scene_visual.exe *> ../../docs/scene_visual_pipe_sim_result.txt
  if($LASTEXITCODE -ne 0){Get-Content ../../docs/scene_visual_pipe_sim_result.txt;throw 'Command FIFO snapshot assertions failed'}
 }finally{Pop-Location}
 Get-Content docs/scene_visual_pipe_sim_result.txt
}finally{Pop-Location}



