param([int]$Words=2097152,[switch]$InjectFault)
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 $env:VERILATOR_ROOT='C:/msys64/mingw64/share/verilator'
 $env:PATH='C:/msys64/mingw64/bin;C:/msys64/usr/bin;'+$env:PATH
 $src=@(Get-ChildItem rtl/p2/*.sv | Where-Object Name -ne dmz_p2_top.sv | ForEach-Object FullName)+@(Get-ChildItem sim/p2/*.sv | ForEach-Object FullName)
 & C:/msys64/mingw64/bin/verilator_bin.exe --cc --exe --main --timing -Wno-fatal --top-module tb_p2 "-GBIST_WORDS=$Words" --Mdir build_p2/sim @src *> docs/p2_lint.txt
 if($LASTEXITCODE -ne 0){throw 'Verilator failed'}
 Push-Location build_p2/sim
 try {
  & C:/msys64/mingw64/bin/mingw32-make.exe -f Vtb_p2.mk -j4 PYTHON3=C:/Users/fushenghe/.cache/codex-runtimes/codex-primary-runtime/dependencies/python/python.exe *> ../../docs/p2_sim_build.txt
  if($LASTEXITCODE -ne 0){throw 'Simulation compile failed'}
  $log=if($InjectFault){'../../docs/p2_fault_result.txt'}else{'../../docs/p2_sim_result.txt'}
  if($InjectFault){ & ./Vtb_p2.exe +fault *> $log }else{ & ./Vtb_p2.exe *> $log }
  Get-Content $log
  if($LASTEXITCODE -ne 0){throw 'Simulation assertion failed'}
 }finally{Pop-Location}
}finally{Pop-Location}
