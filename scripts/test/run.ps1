param([Parameter(Mandatory=$true)][string]$IcarusRoot,[string[]]$Tests=@(),[string]$Python='python')
$ErrorActionPreference='Stop'
$root=Split-Path (Split-Path $PSScriptRoot -Parent) -Parent
$catalog=Get-Content "$root/sim/tests.json" -Raw|ConvertFrom-Json
if(!$Tests.Count){$Tests=@($catalog.PSObject.Properties.Name)}
$compiler=Join-Path $IcarusRoot 'bin/iverilog.exe'
$runtime=Join-Path $IcarusRoot 'bin/vvp.exe'
if(!(Test-Path -LiteralPath $compiler) -or !(Test-Path -LiteralPath $runtime)){throw 'Specify the Icarus installation root'}
& $Python "$PSScriptRoot/prepare_fixtures.py"
if($LASTEXITCODE -ne 0){throw 'Simulation fixture preparation failed'}
$out=Join-Path $root 'build/reports';New-Item -ItemType Directory -Force $out|Out-Null
$results=@()
if(Test-Path "$out/tests.json"){$results=@(Get-Content "$out/tests.json" -Raw|ConvertFrom-Json|Where-Object {$_.test -notin $Tests})}
foreach($test in $Tests){
 $spec=$catalog.$test;if(!$spec){throw "Unknown test: $test"}
 $dir=Join-Path $root "build/test_$test";New-Item -ItemType Directory -Force $dir|Out-Null
 $sources=@($spec.sources|ForEach-Object {Join-Path $root $_})
 $exe=Join-Path $dir 'simulation.vvp'
 $log=Join-Path $out "${test}.log"
 $compileLog=Join-Path $out "${test}_compile.log"
 $start=Get-Date
 & $compiler -g2012 -s $spec.top -o $exe @sources 2>&1|Set-Content $compileLog -Encoding utf8
 if($LASTEXITCODE -ne 0){throw "Compile failed: $test; see $compileLog"}
 Push-Location $dir
 try{& $runtime $exe @($spec.plusargs) 2>&1|Set-Content $log -Encoding utf8;$code=$LASTEXITCODE}finally{Pop-Location}
 $text=Get-Content -LiteralPath $log -Raw
 $pass=$code -eq 0 -and $text -match 'PASS' -and $text -notmatch 'FATAL|ERROR'
 $results+=@{test=$test;passed=$pass;seconds=[math]::Round(((Get-Date)-$start).TotalSeconds,3);log="build/reports/${test}.log";summary=($text -split "`n"|Where-Object {$_ -match 'PASS'}) -join '; '}
 $results|ConvertTo-Json -Depth 4|Set-Content "$out/tests.json" -Encoding utf8
 if(!$pass){throw "FAIL: $test; see $log"}
 Write-Output "PASS: $test"
}
