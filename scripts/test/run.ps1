param([Parameter(Mandatory=$true)][string]$ModelSimRoot,[string[]]$Tests=@())
$ErrorActionPreference='Stop'
$root=Split-Path (Split-Path $PSScriptRoot -Parent) -Parent
$catalog=Get-Content "$root/sim/tests.json" -Raw|ConvertFrom-Json
if(!$Tests.Count){$Tests=@($catalog.PSObject.Properties.Name)}
$vsim=Join-Path $ModelSimRoot 'win32aloem/vsim.exe'
if(!(Test-Path -LiteralPath $vsim)){throw 'Specify the ModelSim installation root'}
$out=Join-Path $root 'build/reports';New-Item -ItemType Directory -Force $out|Out-Null
$results=@()
foreach($test in $Tests){
 $spec=$catalog.$test;if(!$spec){throw "Unknown test: $test"}
 $dir=Join-Path $root "build/test_$test";New-Item -ItemType Directory -Force $dir|Out-Null
 $sources=($spec.sources|ForEach-Object {'{'+(Join-Path $root $_).Replace('\','/')+'}'}) -join ' '
 $commands=@('onerror {quit -f -code 1}','onbreak {quit -f -code 1}','if {![file isdirectory work]} {vlib work}',"vlog -sv -work work $sources","vsim -novopt -onfinish exit work.$($spec.top)",'run -all','quit -f -code 0')
 [IO.File]::WriteAllLines("$dir/run.do",$commands)
 $log=Join-Path $out "${test}.log"
 Push-Location $dir
 try{& $vsim -batch -logfile $log -do "$dir/run.do" 2>&1|Out-Null;$code=$LASTEXITCODE}finally{Pop-Location}
 $text=Get-Content -LiteralPath $log -Raw
 $pass=$code -eq 0 -and $text -match 'PASS' -and $text -notmatch '\*\* (?:Fatal|Error):'
 $results+=@{test=$test;passed=$pass;log="build/reports/${test}.log"}
 if(!$pass){throw "FAIL: $test; see $log"}
 Write-Output "PASS: $test"
}
$results|ConvertTo-Json -Depth 4|Set-Content "$out/tests.json" -Encoding utf8
