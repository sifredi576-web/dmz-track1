param()
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 $env:VERILATOR_ROOT='C:/msys64/mingw64/share/verilator'
 $env:PATH='C:/msys64/mingw64/bin;C:/msys64/usr/bin;'+$env:PATH
 $sources=@(Get-Content scripts/build_system.tcl | Where-Object {$_ -match '^add_files .*\.(sv|v)$' -and $_ -notmatch 'dmz_p2_pll.v'} | ForEach-Object {$_ -replace '^add_files ../',''})
 # Verilator 5.036 cannot override nested parameters with defparam. Generate
 # simulation-only copies changing exactly these defaults, never hardware RTL.
 New-Item -ItemType Directory -Force build_system/sim_config | Out-Null
 foreach($module in @('dmz_sdram_ctrl','dmz_sdram_bist')){
  $original=Get-Content "rtl/p2/$module.sv" -Raw
  $overrides=if($module -eq 'dmz_sdram_ctrl'){@{'READ_WAIT_CYCLES=1'='READ_WAIT_CYCLES=2'}}else{@{'WORD_COUNT=2097152,HOLD_CYCLES=5000000'='WORD_COUNT=4096,HOLD_CYCLES=5000'}}
  foreach($key in $overrides.Keys){
   if(([regex]::Matches($original,[regex]::Escape($key))).Count -ne 1){throw "Simulation override no longer matches $module"}
   $original=$original.Replace($key,$overrides[$key])
  }
  $original | Set-Content "build_system/sim_config/$module.sv" -Encoding utf8
  $sources=@($sources | Where-Object {$_ -ne "rtl/p2/$module.sv"})+@("build_system/sim_config/$module.sv")
 }
 $sources+=@('sim/p1/phy_models.sv','sim/p2/sdram_model.sv','sim/system/system_sd_model.sv','sim/system/tb_system.sv')
 & C:/msys64/mingw64/bin/verilator_bin.exe --cc --exe --main --timing -Wno-fatal --top-module tb_system --Mdir build_system/sim_integration @sources *> docs/system_integration_lint.txt
 if($LASTEXITCODE -ne 0){throw 'Integration simulation translation failed'}
 Push-Location build_system/sim_integration
 try {
  & C:/msys64/mingw64/bin/mingw32-make.exe -f Vtb_system.mk -j4 PYTHON3=C:/Users/fushenghe/.cache/codex-runtimes/codex-primary-runtime/dependencies/python/python.exe *> ../../docs/system_integration_sim_build.txt
  if($LASTEXITCODE -ne 0){throw 'Integration simulation compile failed'}
  & ./Vtb_system.exe *> ../../docs/system_integration_sim_result.txt
  if($LASTEXITCODE -ne 0){throw 'Integration simulation assertions failed'}
 }finally{Pop-Location}
 Get-Content docs/system_integration_sim_result.txt
}finally{Pop-Location}
