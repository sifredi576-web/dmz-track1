param()
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 $env:VERILATOR_ROOT='C:/msys64/mingw64/share/verilator'
 $env:PATH='C:/msys64/mingw64/bin;C:/msys64/usr/bin;'+$env:PATH
 & C:/msys64/mingw64/bin/verilator_bin.exe --no-skip-identical --cc --exe --timing -Wno-fatal --top-module tb_picture_pipe --Mdir build_system/sim_picture_pipe rtl/system/dmz_picture_adjust.sv rtl/system/dmz_picture_pipe.sv sim/system/tb_picture_pipe.sv ../../sim/system/picture_pipe_main.cpp *> docs/picture_pipe_lint.txt
 if($LASTEXITCODE -ne 0){throw 'Command FIFO translation failed'}
 Push-Location build_system/sim_picture_pipe
 try {
  & C:/msys64/mingw64/bin/mingw32-make.exe -f Vtb_picture_pipe.mk -j4 PYTHON3=C:/Users/fushenghe/.cache/codex-runtimes/codex-primary-runtime/dependencies/python/python.exe *> ../../docs/picture_pipe_sim_build.txt
  if($LASTEXITCODE -ne 0){throw 'Command FIFO compile failed'}
  & ./Vtb_picture_pipe.exe *> ../../docs/picture_pipe_sim_result.txt
  if($LASTEXITCODE -ne 0){Get-Content ../../docs/picture_pipe_sim_result.txt;throw 'Command FIFO snapshot assertions failed'}
 }finally{Pop-Location}
 Get-Content docs/picture_pipe_sim_result.txt
}finally{Pop-Location}



