# Generate the pre-refactor topology from its Git baseline into build/ only.
param([string]$Baseline='8e8b4d6')
$ErrorActionPreference='Stop'
$root=Split-Path (Split-Path $PSScriptRoot -Parent) -Parent
$lines=& git -C $root show "${Baseline}:rtl/system/dmz_track1_top.sv"
if($LASTEXITCODE -ne 0){throw "Missing architecture comparison baseline $Baseline"}
$text=$lines -join "`n"
$text=$text.Replace('module dmz_track1_top(', 'module dmz_reference_top(').Replace('dmz_media_storage storage','dmz_media_pipeline storage')
# Declaration order only: accommodate ModelSim 10.3c without altering logic.
$text=$text.Replace('reg audio_active;reg [31:0] audio_underflows,played_pairs;','reg [31:0] audio_underflows,played_pairs;').Replace('wire audio_pop=',"reg audio_active;`nwire audio_pop=")
$text=$text.Replace('wire [7:0] wav_error,wav_status;', 'wire [7:0] wav_status;').Replace('wire tone_muted,',"wire [7:0] wav_error;`nwire tone_muted,")
$dir=Join-Path $root 'build/architecture'
New-Item -ItemType Directory -Force $dir|Out-Null
[IO.File]::WriteAllText((Join-Path $dir 'reference_top.sv'),$text,[Text.UTF8Encoding]::new($false))
