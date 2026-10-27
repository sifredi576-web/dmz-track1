param([string]$MsysRoot='C:/msys64', [string]$Python='C:/Users/fushenghe/.cache/codex-runtimes/codex-primary-runtime/dependencies/python/python.exe')
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 $env:VERILATOR_ROOT="$MsysRoot/mingw64/share/verilator"
 $env:PATH="$MsysRoot/mingw64/bin;$MsysRoot/usr/bin;"+$env:PATH
 $sources=@(Get-ChildItem rtl/p1/hdmi_core/*.sv | ForEach-Object FullName)+@('rtl/p1/serializer.sv','rtl/p1/dmz_tone.sv','rtl/p1/dmz_p1_top.sv')+@(Get-ChildItem sim/p1/*.sv | ForEach-Object FullName)
 & "$MsysRoot/mingw64/bin/verilator_bin.exe" --cc --exe --main --timing -Wno-fatal --top-module tb_p1 --Mdir build_p1/sim @sources *> docs/p1_lint.txt
 if($LASTEXITCODE -ne 0){throw 'Verilator translation failed; see docs/p1_lint.txt'}
 Push-Location build_p1/sim
 try {
  & "$MsysRoot/mingw64/bin/mingw32-make.exe" -f Vtb_p1.mk -j4 "PYTHON3=$Python" *> ../../docs/p1_sim_build.txt
  if($LASTEXITCODE -ne 0){throw 'Simulation build failed'}
  & ./Vtb_p1.exe *> ../../docs/p1_sim_result.txt
  if($LASTEXITCODE -ne 0){throw 'Simulation assertions failed'}
 } finally {Pop-Location}
 Get-Content docs/p1_sim_result.txt
} finally {Pop-Location}
