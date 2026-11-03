$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 $env:VERILATOR_ROOT='C:/msys64/mingw64/share/verilator'
 $env:PATH='C:/msys64/mingw64/bin;C:/msys64/usr/bin;'+$env:PATH
 & C:/msys64/mingw64/bin/verilator_bin.exe --cc --exe --timing -Wno-fatal --top-module tb_top_ticker --Mdir build_system/sim_top_ticker rtl/system/dmz_top_ticker.sv sim/system/tb_top_ticker.sv ../../sim/system/top_ticker_main.cpp *> docs/top_ticker_lint.txt
 if($LASTEXITCODE -ne 0){throw 'Ticker translation failed'}
 & C:/msys64/mingw64/bin/mingw32-make.exe -C build_system/sim_top_ticker -f Vtb_top_ticker.mk -j4 *> docs/top_ticker_sim_build.txt
 if($LASTEXITCODE -ne 0){throw 'Ticker compile failed'}
 & ./build_system/sim_top_ticker/Vtb_top_ticker.exe *> docs/top_ticker_sim_result.txt
 if($LASTEXITCODE -ne 0){Get-Content docs/top_ticker_sim_result.txt;throw 'Ticker assertions failed'}
 Get-Content docs/top_ticker_sim_result.txt
}finally{Pop-Location}
