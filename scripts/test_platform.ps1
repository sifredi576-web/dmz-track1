param()
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 & C:/Users/fushenghe/.cache/codex-runtimes/codex-primary-runtime/dependencies/python/python.exe tests/test_platform_pack.py *> docs/platform_pack_tests.txt
 if($LASTEXITCODE -ne 0){Get-Content docs/platform_pack_tests.txt;throw 'Platform pack validation failed'}
 $env:VERILATOR_ROOT='C:/msys64/mingw64/share/verilator'
 $env:PATH='C:/msys64/mingw64/bin;C:/msys64/usr/bin;'+$env:PATH
 & C:/msys64/mingw64/bin/verilator_bin.exe --no-skip-identical --cc --exe --timing -Wno-fatal --top-module tb_scene_loader --Mdir build_system/sim_platform rtl/platform/dmz_scene_loader.sv sim/platform/tb_scene_loader.sv ../../sim/platform/loader_main.cpp *> docs/platform_loader_lint.txt
 if($LASTEXITCODE -ne 0){throw 'Platform loader translation failed'}
 Push-Location build_system/sim_platform
 try {
  & C:/msys64/mingw64/bin/mingw32-make.exe -f Vtb_scene_loader.mk -j4 PYTHON3=C:/Users/fushenghe/.cache/codex-runtimes/codex-primary-runtime/dependencies/python/python.exe *> ../../docs/platform_loader_sim_build.txt
  if($LASTEXITCODE -ne 0){throw 'Platform loader compile failed'}
  & ./Vtb_scene_loader.exe *> ../../docs/platform_loader_sim_result.txt
  if($LASTEXITCODE -ne 0){Get-Content ../../docs/platform_loader_sim_result.txt;throw 'Platform loader snapshot assertions failed'}
 }finally{Pop-Location}
 Get-Content docs/platform_loader_sim_result.txt
}finally{Pop-Location}





