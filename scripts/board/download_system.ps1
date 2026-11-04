param([Parameter(Mandatory=$true)][string]$TdRoot)
$ErrorActionPreference='Stop'
function Get-TextHash([string]$path){
 $text=[IO.File]::ReadAllText($path).Replace("`r`n","`n")
 $sha=[Security.Cryptography.SHA256]::Create()
 try{return ([BitConverter]::ToString($sha.ComputeHash([Text.Encoding]::UTF8.GetBytes($text)))).Replace('-','')}finally{$sha.Dispose()}
}
$root=Split-Path (Split-Path $PSScriptRoot -Parent) -Parent
Push-Location $root
try{
 $manifest=Get-Content release/current/build_manifest.json -Raw|ConvertFrom-Json
 $sources=@(Get-Content project/td/sources.f)
 if($sources.Count -ne @($manifest.source_sha256.PSObject.Properties).Count){throw 'Source list differs from the verified build; build again'}
 foreach($source in $sources){if((Get-TextHash $source) -ne $manifest.source_sha256.$source){throw "Unbuilt source change: $source"}}
 if((Get-FileHash release/current/dmz_track1.bit).Hash -ne $manifest.bit_sha256){throw 'Bitstream does not match build manifest'}
 if((Get-TextHash (Join-Path $root 'scripts/build/td_flow.tcl')) -ne $manifest.flow_sha256 -or (Get-TextHash (Join-Path $root 'project/td/dmz_track1.al')) -ne $manifest.project_sha256){throw 'Project/build flow changed since verification'}
 $out=Join-Path $root 'build/download';New-Item -ItemType Directory -Force $out|Out-Null
 & "$TdRoot/bin/td_commands_prompt.exe" scripts/board/download_system.tcl 2>&1|Tee-Object "$out/download.log"|Out-Null
 if($LASTEXITCODE -ne 0){throw 'Download failed'}
 $log=Get-Content "$out/download.log" -Raw
 if($log -match 'ERROR:' -or $log -notmatch 'Chip validation success: EG4S20BG256' -or $log -notmatch 'finish command "program'){throw 'Download log does not confirm success'}
 Write-Output 'PASS: source-matched bitstream downloaded to SRAM'
}finally{
 $temporary=[IO.Path]::GetFullPath((Join-Path $root 'build/download'))
 if(!$temporary.StartsWith([IO.Path]::GetFullPath($root)+[IO.Path]::DirectorySeparatorChar,[StringComparison]::OrdinalIgnoreCase)){throw 'Invalid temporary download path'}
 if(Test-Path -LiteralPath $temporary){Remove-Item -LiteralPath $temporary -Recurse -Force}
 Pop-Location
}
