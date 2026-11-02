param()
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 $env:VERILATOR_ROOT='C:/msys64/mingw64/share/verilator'
 $env:PATH='C:/msys64/mingw64/bin;C:/msys64/usr/bin;'+$env:PATH
 foreach($top in @('tb_ui_keys','tb_ui_controller','tb_fifo_recode')) {
  $name=$top -replace '^tb_',''
  & C:/msys64/mingw64/bin/verilator_bin.exe --no-skip-identical --cc --exe --timing -Wno-fatal --top-module $top --Mdir "build_system/sim_$name" rtl/p2/dmz_pixel_fifo.sv rtl/platform/dmz_ui_keys.sv rtl/platform/dmz_ui_controller.sv "sim/platform/$top.sv" "../../sim/platform/${top}_main.cpp" *> "docs/${name}_lint.txt"
  if($LASTEXITCODE -ne 0){Get-Content "docs/${name}_lint.txt";throw 'UI translation failed'}
  Push-Location "build_system/sim_$name"
  try {
   & C:/msys64/mingw64/bin/mingw32-make.exe -f "V$top.mk" -j4 PYTHON3=C:/Users/fushenghe/.cache/codex-runtimes/codex-primary-runtime/dependencies/python/python.exe *> "../../docs/${name}_build.txt"
   if($LASTEXITCODE -ne 0){throw 'UI compile failed'}
   & "./V$top.exe" *> "../../docs/${name}_result.txt"
   if($LASTEXITCODE -ne 0){Get-Content "../../docs/${name}_result.txt";throw 'UI behavioral assertion failed'}
  } finally {Pop-Location}
  Get-Content "docs/${name}_result.txt"
 }
} finally {Pop-Location}
