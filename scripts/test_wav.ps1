param()
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 $env:VERILATOR_ROOT='C:/msys64/mingw64/share/verilator'
 $env:PATH='C:/msys64/mingw64/bin;C:/msys64/usr/bin;'+$env:PATH
 & C:/msys64/mingw64/bin/verilator_bin.exe --cc --exe --timing -Wno-fatal --top-module tb_wav --Mdir build_system/sim_wav rtl/media/dmz_wav_decoder.sv sim/media/tb_wav.sv ../../sim/media/wav_main.cpp *> docs/wav_lint.txt
 if($LASTEXITCODE -ne 0){throw 'WAV simulation translation failed'}
 Push-Location build_system/sim_wav
 try {
  & C:/msys64/mingw64/bin/mingw32-make.exe -f Vtb_wav.mk -j4 PYTHON3=C:/Users/fushenghe/.cache/codex-runtimes/codex-primary-runtime/dependencies/python/python.exe *> ../../docs/wav_sim_build.txt
  if($LASTEXITCODE -ne 0){throw 'WAV simulation compile failed'}
  $results=New-Object 'System.Collections.Generic.List[string]'
  foreach($case in @('normal','junkodd','fmt18','trailing','restart','magic','short','headershort','overflow','chunkoverflow','shortfmt','float','mono','rate','align','bits','missingdata','nofmt','zerodata','unaligned','readerror')){
   $r=if($case -eq 'normal'){& ./Vtb_wav.exe 2>&1}else{& ./Vtb_wav.exe "+case=$case" 2>&1}
   if($LASTEXITCODE -ne 0){$r | Write-Output;throw "WAV assertion failed: $case"}
   if(($r | Select-Object -First 1) -notmatch "^PASS WAV case=$case "){throw "WAV runner did not execute requested case: $case"}
   $results.Add("${case}: "+($r | Select-Object -First 1))
  }
  $results | Set-Content ../../docs/wav_sim_result.txt -Encoding utf8
  $results | Write-Output
 }finally{Pop-Location}
}finally{Pop-Location}
