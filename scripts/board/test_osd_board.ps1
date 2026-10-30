param([string]$Port='COM9')
$ErrorActionPreference='Stop'
$root=Split-Path (Split-Path $PSScriptRoot -Parent) -Parent
New-Item -ItemType Directory -Force (Join-Path $root "build/reports") | Out-Null
Push-Location $root
function Control([string]$cmd,[string]$name){
 & ./scripts/board/system_console.ps1 -Port $Port -Command $cmd -Output "build/reports/osd_$name.json"
 return (Get-Content "build/reports/osd_$name.json" -Raw -Encoding UTF8 | ConvertFrom-Json).records[-1]
}
function Observe([string]$name){
 & ./scripts/board/system_console.ps1 -Port $Port -Command Status -Seconds 3 -Output "build/reports/osd_$name.json"
 $q=Get-Content "build/reports/osd_$name.json" -Raw -Encoding UTF8 | ConvertFrom-Json
 if(!$q.passed){throw 'OSD board health failed'}
 return $q.records[-1]
}
try {
 $initial=Observe initial
 if($initial.menu_open -or $initial.image_count -lt 2 -or $initial.wav_count -lt 1){throw 'Need at least two BMP and one WAV with menu initially closed'}
 $r=Control F open
 if(!$r.menu_open){throw 'Menu did not open'}
 $r=Control I wrap_previous
 if($r.menu_query -ne $initial.image_count-1){throw 'BMP previous wrap failed'}
 $r=Control O wrap_next
 if($r.menu_query -ne 0){throw 'BMP next wrap failed'}
 $r=Control O next
 if($r.menu_query -ne 1){throw 'BMP cursor failed'}
 $r=Control E select_image
 if($r.menu_open -or $r.last_command -ne 129){throw 'BMP indexed selection failed'}
 $image=Observe image_selected
 if($image.displayed_image -ne 1 -or $image.autoplay -or $image.audio_paused -or $image.played_pairs -le $initial.played_pairs){throw 'Chosen image did not commit while WAV continued'}
 $r=Control F audio_menu
 $r=Control V audio_type
 if($r.menu_query -ne 32){throw 'WAV category failed'}
 $r=Control E select_audio
 if($r.last_command -ne 192 -or $r.menu_open){throw 'WAV indexed selection failed'}
 $audio=Observe audio_selected
 if(!$audio.audio_active -or $audio.selected_wav -ne 0 -or $audio.played_pairs -eq 0 -or $audio.tone_muted){throw 'WAV restart failed'}
 # Leave BMP menu visible for user inspection; background WAV remains enabled.
 $null=Control F visible_menu
 $r=Control V visible_bmp
 if(!$r.menu_open -or $r.menu_query -ne 0){throw 'Final BMP menu state failed'}
 [ordered]@{date=(Get-Date).ToString('o');passed=$true;images=$audio.image_count;wavs=$audio.wav_count;indexed_image_commit=$true;wav_restart=$true;audio_continues_while_browsing=$true;audio_underflows=$audio.audio_underflows;video_underflows=$audio.underflow_pixels;final_state='BMP menu open, WAV enabled';multiple_real_audio_tracks_tested=$false;physical_visual_confirmation='pending'} | ConvertTo-Json | Set-Content build/reports/osd_board_validation.json -Encoding UTF8
 Write-Output 'PASS real TF menu cursor/wrap, selected BMP commit, WAV restart and audio continuity; BMP menu left visible'
}finally{Pop-Location}
