param([string]$Port='')
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
try {
 & ./scripts/system_console.ps1 -Port $Port -Command W -Output docs/av_play_command.json
 & ./scripts/system_console.ps1 -Port $Port -Command Status -Seconds 12 -Output docs/av_playback_status.json
 $play=Get-Content docs/av_playback_status.json -Raw -Encoding UTF8 | ConvertFrom-Json
 $first=$play.records[0];$last=$play.records[-1]
 if($last.version -ne 4 -or !$last.wav_found -or !$last.audio_active -or !$last.wav_source -or $last.tone_muted -or $last.played_pairs -le $first.played_pairs -or $last.audio_reads -le $first.audio_reads -or $last.nonzero_pcm_packets -le $first.nonzero_pcm_packets){throw 'WAV file is not reaching HDMI'}
 & ./scripts/system_console.ps1 -Port $Port -Command N -Output docs/av_next_command.json
 & ./scripts/system_console.ps1 -Port $Port -Command Status -Seconds 3 -Output docs/av_next_status.json
 & ./scripts/system_console.ps1 -Port $Port -Command P -Output docs/av_previous_command.json
 & ./scripts/system_console.ps1 -Port $Port -Command Status -Seconds 3 -Output docs/av_previous_status.json
 $next=(Get-Content docs/av_next_status.json -Raw -Encoding UTF8 | ConvertFrom-Json).records[-1]
 $prev=(Get-Content docs/av_previous_status.json -Raw -Encoding UTF8 | ConvertFrom-Json).records[-1]
 if($prev.displayed_image -ne (($next.displayed_image+$next.image_count-1)%$next.image_count) -or $prev.played_pairs -le $next.played_pairs){throw 'Slide navigation/audio continuity failed'}
 & ./scripts/system_console.ps1 -Port $Port -Command H -Output docs/av_pause_command.json
 & ./scripts/system_console.ps1 -Port $Port -Command Status -Seconds 2 -Output docs/av_paused_status.json
 $pause=Get-Content docs/av_paused_status.json -Raw -Encoding UTF8 | ConvertFrom-Json
 if(!$pause.records[-1].audio_paused -or $pause.records[0].played_pairs -ne $pause.records[-1].played_pairs){throw 'Linked pause did not hold playback position'}
 & ./scripts/system_console.ps1 -Port $Port -Command A -Output docs/av_resume_command.json
 & ./scripts/system_console.ps1 -Port $Port -Command '-' -Output docs/av_volume_down.json
 & ./scripts/system_console.ps1 -Port $Port -Command '+' -Output docs/av_volume_up.json
 $down=(Get-Content docs/av_volume_down.json -Raw -Encoding UTF8 | ConvertFrom-Json).records[-1]
 $up=(Get-Content docs/av_volume_up.json -Raw -Encoding UTF8 | ConvertFrom-Json).records[-1]
 if($down.volume -ne 7 -or $up.volume -ne 8){throw 'Volume step acknowledgement failed'}
 & ./scripts/system_console.ps1 -Port $Port -Command Status -Seconds 3 -Output docs/av_final_status.json
 $final=(Get-Content docs/av_final_status.json -Raw -Encoding UTF8 | ConvertFrom-Json).records[-1]
 if($final.audio_paused -or !$final.autoplay -or $final.tone_muted -or $final.played_pairs -le $pause.records[-1].played_pairs -or $final.volume -ne 8){throw 'Resume/final state failed'}
 foreach($name in @('av_playback_status','av_next_status','av_previous_status','av_paused_status','av_final_status')){
  $report=Get-Content "docs/$name.json" -Raw -Encoding UTF8 | ConvertFrom-Json
  if(!$report.passed){throw "Failed report: $name"}
  foreach($r in $report.records){if($r.audio_underflows -or $r.underflow_pixels -or $r.wav_error -or $r.sd_error -or $r.bist_errors){throw 'Audio/video/SD error during linked operation'}}
 }
 [ordered]@{date=(Get-Date).ToString('o');passed=$true;images=$final.image_count;wav_bytes=$final.wav_bytes;played_pairs=$final.played_pairs;wav_loops=$final.wav_loops;audio_underflows=$final.audio_underflows;video_underflows=$final.underflow_pixels;linked_pause_resume=$true;manual_slides_while_audio=$true;volume_step_verified=$true;final_state='automatic slides + WAV playback enabled';physical_listening_confirmation='pending'} | ConvertTo-Json | Set-Content docs/av_validation_summary.json -Encoding utf8
 Write-Output 'PASS WAV file to HDMI, slide navigation while audio continues, linked pause/resume, volume, zero underruns; playback left enabled'
}finally{Pop-Location}
