param([int]$OutWidth=640,[int]$OutHeight=480)
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 $env:VERILATOR_ROOT='C:/msys64/mingw64/share/verilator'
 $env:PATH='C:/msys64/mingw64/bin;C:/msys64/usr/bin;'+$env:PATH
 & C:/msys64/mingw64/bin/verilator_bin.exe --cc --exe --timing -Wno-fatal --top-module tb_scaler "-GOUT_W=$OutWidth" "-GOUT_H=$OutHeight" --Mdir build_system/sim_scaler rtl/media/dmz_udiv32.sv rtl/media/dmz_bmp_decoder.sv sim/media/tb_scaler.sv ../../sim/media/scaler_main.cpp *> docs/scaler_lint.txt
 if($LASTEXITCODE -ne 0){throw 'Command FIFO translation failed'}
 Push-Location build_system/sim_scaler
 try {
  & C:/msys64/mingw64/bin/mingw32-make.exe -f Vtb_scaler.mk -j4 PYTHON3=C:/Users/fushenghe/.cache/codex-runtimes/codex-primary-runtime/dependencies/python/python.exe *> ../../docs/scaler_sim_build.txt
  if($LASTEXITCODE -ne 0){throw 'Command FIFO compile failed'}
  & ./Vtb_scaler.exe *> ../../docs/scaler_sim_result.txt
  if($LASTEXITCODE -ne 0){Get-Content ../../docs/scaler_sim_result.txt;throw 'Command FIFO snapshot assertions failed'}
  Set-Content ../../docs/scaler_cases_result.txt ''
  foreach($case in @(@('+w=960','+h=720'),@('+w=1','+h=1'),@('+w=479','+h=640','+top'),@('+w=1920','+h=1080'),@('+w=637','+h=479','+rgba','+top'),@('+w=640','+h=479','+top'),@('+short'))){
   & ./Vtb_scaler.exe @case >> ../../docs/scaler_cases_result.txt
   if($LASTEXITCODE -ne 0){throw 'Scaler case failed'}
  }
 }finally{Pop-Location}
 Get-Content docs/scaler_sim_result.txt
}finally{Pop-Location}



