param()
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 $env:VERILATOR_ROOT='C:/msys64/mingw64/share/verilator'
 $env:PATH='C:/msys64/mingw64/bin;C:/msys64/usr/bin;'+$env:PATH
 foreach($kind in @('sd','bmp')){
  $src=if($kind -eq 'sd'){@('rtl/p3/dmz_spi_byte.sv','rtl/p3/dmz_sd_reader.sv')}else{@('rtl/p3/dmz_bmp_loader.sv')}
  & C:/msys64/mingw64/bin/verilator_bin.exe --cc --exe --main --timing -Wno-fatal --top-module "tb_$kind" --Mdir "build_p3/sim_$kind" @src "sim/p3/tb_$kind.sv" *> "docs/p3_${kind}_lint.txt"
  if($LASTEXITCODE -ne 0){throw "Translation failed: $kind"}
  Push-Location "build_p3/sim_$kind"
  try{
   & C:/msys64/mingw64/bin/mingw32-make.exe -f "Vtb_$kind.mk" -j4 PYTHON3=C:/Users/fushenghe/.cache/codex-runtimes/codex-primary-runtime/dependencies/python/python.exe *> "../../docs/p3_${kind}_sim_build.txt"
   if($LASTEXITCODE -ne 0){throw "Compile failed: $kind"}
   & "./Vtb_$kind.exe" *> "../../docs/p3_${kind}_sim_result.txt"
   if($LASTEXITCODE -ne 0){throw "Assertions failed: $kind"}
   if($kind -eq 'bmp'){
    & ./Vtb_bmp.exe +bad *> ../../docs/p3_bmp_bad_result.txt
    if($LASTEXITCODE -ne 0){throw 'Unsupported BMP rejection failed'}
   }
  }finally{Pop-Location}
  Get-Content "docs/p3_${kind}_sim_result.txt" -TotalCount 2
 }
}finally{Pop-Location}
