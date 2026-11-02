param()
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 $env:VERILATOR_ROOT='C:/msys64/mingw64/share/verilator'
 $env:PATH='C:/msys64/mingw64/bin;C:/msys64/usr/bin;'+$env:PATH
 & C:/msys64/mingw64/bin/verilator_bin.exe --no-skip-identical --cc --exe --timing -Wno-fatal --top-module tb_osd_menu --Mdir build_system/sim_osd rtl/system/dmz_file_menu.sv rtl/system/dmz_gallery_control.sv rtl/system/dmz_osd.sv sim/system/tb_osd_menu.sv ../../sim/system/osd_main.cpp *> docs/osd_menu_lint.txt
 if($LASTEXITCODE -ne 0){throw 'OSD/menu translation failed'}
 Push-Location build_system/sim_osd
 try {
  & C:/msys64/mingw64/bin/mingw32-make.exe -f Vtb_osd_menu.mk -j4 PYTHON3=C:/Users/fushenghe/.cache/codex-runtimes/codex-primary-runtime/dependencies/python/python.exe *> ../../docs/osd_menu_sim_build.txt
  if($LASTEXITCODE -ne 0){throw 'OSD/menu compile failed'}
  Push-Location ../..
  try { & ./build_system/sim_osd/Vtb_osd_menu.exe *> docs/osd_menu_sim_result.txt } finally { Pop-Location }
  if($LASTEXITCODE -ne 0){Get-Content ../../docs/osd_menu_sim_result.txt;throw 'OSD/menu snapshot assertions failed'}
 }finally{Pop-Location}
 Get-Content docs/osd_menu_sim_result.txt
}finally{Pop-Location}




