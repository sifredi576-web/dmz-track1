# Generate the pre-refactor topology from its Git baseline into build/ only.
param([string]$Baseline='28298f7',[string]$Python='python')
$ErrorActionPreference='Stop'
$root=Split-Path (Split-Path $PSScriptRoot -Parent) -Parent
& $Python "$PSScriptRoot/prepare_reference.py" --revision $Baseline
if($LASTEXITCODE -ne 0){throw "Reference generation failed for $Baseline"}
