$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 $env:VERILATOR_ROOT='C:/msys64/mingw64/share/verilator'
 $env:PATH='C:/msys64/mingw64/bin;C:/msys64/usr/bin;'+$env:PATH
 & C:/msys64/mingw64/bin/verilator_bin.exe --no-skip-identical --cc --exe --main --timing -Wno-fatal --top-module tb_overlay --Mdir build_system/sim_overlay rtl/platform/dmz_ui_overlay.sv sim/system/tb_overlay.sv *> docs/overlay_test_lint.txt
 if($LASTEXITCODE -ne 0){throw 'Overlay translation failed'}
 Push-Location build_system/sim_overlay
 try {
  & C:/msys64/mingw64/bin/mingw32-make.exe -f Vtb_overlay.mk -j4 PYTHON3=C:/Users/fushenghe/.cache/codex-runtimes/codex-primary-runtime/dependencies/python/python.exe *> ../../docs/overlay_test_build.txt
  if($LASTEXITCODE -ne 0){throw 'Overlay compile failed'}
  & ./Vtb_overlay.exe *> ../../docs/overlay_test_result.txt
  if($LASTEXITCODE -ne 0){Get-Content ../../docs/overlay_test_result.txt;throw 'Overlay behavior failed'}
 }finally{Pop-Location}
 Get-Content docs/overlay_test_result.txt
}finally{Pop-Location}
