param()
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 $env:VERILATOR_ROOT='C:/msys64/mingw64/share/verilator'
 $env:PATH='C:/msys64/mingw64/bin;C:/msys64/usr/bin;'+$env:PATH
 & C:/msys64/mingw64/bin/verilator_bin.exe --no-skip-identical --cc --exe --timing -Wno-fatal --top-module tb_widescreen --Mdir build_system/sim_widescreen rtl/system/dmz_wide_mapper.sv rtl/p3/dmz_image_framebuffer.sv rtl/p2/dmz_pixel_fifo.sv rtl/p2/dmz_sdram_ctrl.sv rtl/p1/dmz_tone.sv sim/p2/sdram_model.sv sim/system/tb_widescreen.sv ../../sim/system/widescreen_main.cpp *> docs/widescreen_lint.txt
 if($LASTEXITCODE -ne 0){throw 'Wide simulation translation failed'}
 Push-Location build_system/sim_widescreen
 try {
  & C:/msys64/mingw64/bin/mingw32-make.exe -f Vtb_widescreen.mk -j4 PYTHON3=C:/Users/fushenghe/.cache/codex-runtimes/codex-primary-runtime/dependencies/python/python.exe *> ../../docs/widescreen_sim_build.txt
  if($LASTEXITCODE -ne 0){throw 'Wide simulation compile failed'}
  & ./Vtb_widescreen.exe *> ../../docs/widescreen_sim_result.txt
  if($LASTEXITCODE -ne 0){Get-Content ../../docs/widescreen_sim_result.txt;throw 'Wide simulation assertions failed'}
 }finally{Pop-Location}
 Get-Content docs/widescreen_sim_result.txt
}finally{Pop-Location}
