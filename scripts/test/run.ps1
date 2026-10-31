param(
 [ValidateSet('Auto','ModelSim','Verilator')][string]$Simulator='Auto',
 [ValidateSet('Base','Full')][string]$Profile='Base',
 [string[]]$Tests=@(), [string[]]$PlusArgs=@(), [int]$Words=4096,
 [string]$ModelSimRoot='D:/Downloads/modelsim_ase', [string]$MsysRoot='C:/msys64',
 [string]$Python='python')
$ErrorActionPreference='Stop'
$root=Split-Path (Split-Path $PSScriptRoot -Parent) -Parent
$catalog=Get-Content "$root/sim/tests.json" -Raw|ConvertFrom-Json
if(!$Tests.Count){$Tests=@($catalog.PSObject.Properties|Where-Object {!$_.Value.manual}|ForEach-Object Name)}
if($Words -lt 8 -or $Words -gt 2097152 -or $Words%8){throw 'Words must be 8-aligned, 8..2097152'}
if($Simulator -eq 'Auto'){$Simulator=if(Test-Path "$MsysRoot/mingw64/bin/verilator_bin.exe"){'Verilator'}else{'ModelSim'}}
$out=Join-Path $root 'build/reports'
New-Item -ItemType Directory -Force $out|Out-Null
$results=[Collections.Generic.List[object]]::new()

function SimulationCopy([string]$path,[string]$dir){
 # Compatibility for ModelSim ASE 10.3c only. Pure fixed-index array reads
 # are expanded in build/. Formal RTL is not rewritten by this runner.
 $original=Get-Content -LiteralPath $path -Raw;$text=$original
 foreach($f in @([regex]::Matches($original,'function automatic \[(15|31):0\] (h16|h32|e16|e32|le16|le32)\('))){
  $name=$f.Groups[2].Value;$count=if($f.Groups[1].Value -eq '15'){2}else{4}
  $array=if($name.StartsWith('e')){'entry'}else{'header'}
  $text=[regex]::Replace($text,('\b'+$name+'\((\d+)\)'),[Text.RegularExpressions.MatchEvaluator]{param($m)
   $offset=[int]$m.Groups[1].Value
   '{'+((($count-1)..0|ForEach-Object {$array+'['+($offset+$_)+']'}) -join ',')+'}'
  })
 }
 if($text -eq $original){return $path}
 $copy=Join-Path $dir ([IO.Path]::GetFileName($path))
 [IO.File]::WriteAllText($copy,$text,[Text.UTF8Encoding]::new($false));return $copy
}

Push-Location $root
try{
 foreach($test in $Tests){
  $spec=$catalog.$test;if(!$spec){throw "Unknown test: $test"}
  if($spec.simulator -and $spec.simulator -ne $Simulator){throw "$test requires $($spec.simulator)"}
  if($test -eq 'architecture'){& "$PSScriptRoot/prepare_reference.ps1"}
  $top=$spec.top;$dir=Join-Path $root "build/test_$test"
  New-Item -ItemType Directory -Force $dir|Out-Null
  $sources=@($spec.sources|ForEach-Object {Join-Path $root $_})
  foreach($source in $sources){if(!(Test-Path -LiteralPath $source)){throw "Missing source: $source"}}
  $compileLog=Join-Path $out "${test}_compile.log"
  if($Simulator -eq 'ModelSim'){
   $bin=Join-Path $ModelSimRoot 'win32aloem'
   if(!(Test-Path "$bin/vsim.exe")){throw 'ModelSim not found; specify -ModelSimRoot'}
   $sources=@($sources|ForEach-Object {SimulationCopy $_ $dir})
   $quoted=($sources|ForEach-Object {'{'+$_.Replace('\','/')+'}'}) -join ' '
   $compile=@('onerror {quit -f -code 1}','if {![file isdirectory work]} {vlib work}',"vlog -sv {+incdir+$($root.Replace('\','/'))} -work work $quoted",'quit -f -code 0')
   [IO.File]::WriteAllLines("$dir/compile.do",$compile)
   Push-Location $dir
   try{& "$bin/vsim.exe" -batch -logfile $compileLog -do "$dir/compile.do" 2>&1|Out-Null
    if($LASTEXITCODE -ne 0){throw "Compile failed: $test; $compileLog"}
   }finally{Pop-Location}
  }else{
   $env:VERILATOR_ROOT="$MsysRoot/mingw64/share/verilator"
   $env:PATH="$MsysRoot/mingw64/bin;$MsysRoot/usr/bin;"+$env:PATH
   $extra=if($test -eq 'sdram'){@("-GBIST_WORDS=$Words")}elseif($test -eq 'wipe'){@('--unroll-count','1')}else{@()}
   & "$MsysRoot/mingw64/bin/verilator_bin.exe" --cc --exe --timing -Wno-fatal --top-module $top --Mdir $dir -CFLAGS "-DVMODEL=V$top" @extra @sources "$root/sim/runner.cpp" *> $compileLog
   if($LASTEXITCODE -ne 0){throw "Verilator compile failed: $test"}
   Push-Location $dir
   try{& "$MsysRoot/mingw64/bin/mingw32-make.exe" -f "V$top.mk" -j4 "PYTHON3=$Python" >> $compileLog
    if($LASTEXITCODE -ne 0){throw "Simulation build failed: $test"}
   }finally{Pop-Location}
  }
  $variants=@([pscustomobject]@{index=0;args=@()})
  if($Profile -eq 'Full'){
   $variants=@();$index=0
   foreach($argsEntry in $spec.cases){$variants+=@([pscustomobject]@{index=$index;args=@($argsEntry)});$index++}
  }
  if($PlusArgs.Count){
   $tag=(($PlusArgs -join '_') -replace '[^a-zA-Z0-9_-]','_')
   if($tag.Length -gt 64){$tag=$tag.Substring(0,64)}
   $variants=@([pscustomobject]@{index="custom_$tag";args=$PlusArgs})
  }
  foreach($variant in $variants){
   $log=Join-Path $out "${test}_$($variant.index).log"
   if($Simulator -eq 'ModelSim'){
    $parameters=if($test -eq 'sdram'){"-gBIST_WORDS=$Words"}else{''}
    $arguments=($variant.args|ForEach-Object {'{'+$_+'}'}) -join ' '
    $commands=@('onerror {quit -f -code 1}','onbreak {quit -f -code 1}',"vsim -novopt -onfinish exit work.$top $parameters $arguments",('cd {'+$root.Replace('\','/')+'}'),'run -all','quit -f -code 0')
    [IO.File]::WriteAllLines("$dir/run.do",$commands)
    Push-Location $dir
    try{& "$bin/vsim.exe" -batch -logfile $log -do "$dir/run.do" 2>&1|Out-Null;$code=$LASTEXITCODE}finally{Pop-Location}
   }else{
    & "$dir/V$top.exe" @($variant.args) *> $log;$code=$LASTEXITCODE
   }
   $text=Get-Content $log -Raw
   $pass=$code -eq 0 -and $text -match 'PASS' -and $text -notmatch '\*\* (?:Fatal|Error):'
   $results.Add([pscustomobject]@{test=$test;case=$variant.index;arguments=@($variant.args);passed=$pass;log=$log.Substring($root.Length+1).Replace('\','/')})
   if(!$pass){throw "FAIL: $test case $($variant.index); see $log"}
   Write-Output "PASS: $test case $($variant.index)"
  }
 }
}finally{
 [ordered]@{simulator=$Simulator;profile=$Profile;words=$Words;results=@($results.ToArray())}|ConvertTo-Json -Depth 6|Set-Content "$out/tests_latest.json" -Encoding utf8
 Pop-Location
}
