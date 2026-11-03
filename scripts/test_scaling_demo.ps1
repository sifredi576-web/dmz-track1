$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 $env:VERILATOR_ROOT='C:/msys64/mingw64/share/verilator'
 $env:PATH='C:/msys64/mingw64/bin;C:/msys64/usr/bin;'+$env:PATH
 & 'C:/Users/fushenghe/.cache/codex-runtimes/codex-primary-runtime/dependencies/python/python.exe' scripts/prepare_scaling_test.py
 if($LASTEXITCODE -ne 0){throw 'Package preparation failed'}
 $sources=@(Get-ChildItem rtl/platform/*.sv | ForEach-Object FullName)
 & C:/msys64/mingw64/bin/verilator_bin.exe --cc --exe --timing -Wno-fatal --top-module tb_scaling_course --Mdir build_system/sim_scaling_course $sources sim/platform/tb_scaling_course.sv ../../sim/platform/scaling_course_main.cpp *> docs/scaling_course_lint.txt
 if($LASTEXITCODE -ne 0){throw 'Scaling course translation failed'}
 & C:/msys64/mingw64/bin/mingw32-make.exe -C build_system/sim_scaling_course -f Vtb_scaling_course.mk -B -j4 PYTHON3=C:/Users/fushenghe/.cache/codex-runtimes/codex-primary-runtime/dependencies/python/python.exe *> docs/scaling_course_build.txt
 if($LASTEXITCODE -ne 0){throw 'Scaling course compile failed'}
 & ./build_system/sim_scaling_course/Vtb_scaling_course.exe *> docs/scaling_course_result.txt
 if($LASTEXITCODE -ne 0){Get-Content docs/scaling_course_result.txt;throw 'Scaling course assertions failed'}
 Get-Content docs/scaling_course_result.txt
}finally{Pop-Location}
