param([Parameter(Mandatory=$true)][string]$TdRoot)
$ErrorActionPreference='Stop'
$root=Split-Path (Split-Path $PSScriptRoot -Parent) -Parent
Push-Location $root
try{
 $manifest=Get-Content release/current/build_manifest.json -Raw|ConvertFrom-Json
 $sources=@(Get-Content project/td/sources.f)
 if($sources.Count -ne @($manifest.source_sha256.PSObject.Properties).Count){throw 'Source list differs from the verified build; build again'}
 foreach($source in $sources){if((Get-FileHash -LiteralPath $source).Hash -ne $manifest.source_sha256.$source){throw "Unbuilt source change: $source"}}
 if((Get-FileHash release/current/dmz_track1.bit).Hash -ne $manifest.bit_sha256){throw 'Bitstream does not match build manifest'}
 if((Get-FileHash scripts/build/td_flow.tcl).Hash -ne $manifest.flow_sha256 -or (Get-FileHash project/td/dmz_track1.al).Hash -ne $manifest.project_sha256){throw 'Project/build flow changed since verification'}
 $out=Join-Path $root 'build/reports';New-Item -ItemType Directory -Force $out|Out-Null
 & "$TdRoot/bin/td_commands_prompt.exe" scripts/board/download_system.tcl 2>&1|Tee-Object "$out/download.log"|Out-Null
 if($LASTEXITCODE -ne 0){throw 'Download failed'}
 $log=Get-Content "$out/download.log" -Raw
 if($log -match 'ERROR:' -or $log -notmatch 'Chip validation success: EG4S20BG256' -or $log -notmatch 'finish command "program'){throw 'Download log does not confirm success'}
 Write-Output 'PASS: verified current bitstream downloaded to SRAM'
}finally{Pop-Location}
