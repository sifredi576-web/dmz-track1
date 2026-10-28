param([string]$Port='COM9')
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
Push-Location $root
function Send([string]$c,[string]$name){
 & ./scripts/system_console.ps1 -Port $Port -Command $c -Output "docs/p7_$name.json"
 return (Get-Content "docs/p7_$name.json" -Raw -Encoding UTF8 | ConvertFrom-Json).records[-1]
}
function Observe([string]$name,[int]$seconds=3){
 & ./scripts/system_console.ps1 -Port $Port -Command Status -Seconds $seconds -Output "docs/p7_$name.json"
 $q=Get-Content "docs/p7_$name.json" -Raw -Encoding UTF8 | ConvertFrom-Json
 if(!$q.passed){throw "Unhealthy report $name"}
 return $q
}
try {
 $base=Observe normal
 if($base.records[-1].emergency -or !$base.records[-1].visual_enabled){throw 'Set A11/A12 switches low first'}
 $null=Send M mute_command
 $mute=Observe muted 2
 if($mute.records[0].nonzero_pcm_packets -ne $mute.records[-1].nonzero_pcm_packets -or $mute.records[-1].level_l -or $mute.records[-1].level_r){throw 'Post-mute visualization/PCM not zero'}
 $null=Send U unmute_command
 $normal=Observe audible
 if($normal.records[-1].nonzero_pcm_packets -le $normal.records[0].nonzero_pcm_packets){throw 'No audible PCM'}
 $null=Send Q alert_command
 $alarm=Observe emergency 2
 if(!$alarm.records[-1].emergency -or $alarm.records[0].played_pairs -ne $alarm.records[-1].played_pairs -or $alarm.records[-1].nonzero_pcm_packets -le $alarm.records[0].nonzero_pcm_packets){throw 'Emergency override/frozen WAV/alarm output failed'}
 $null=Send M alert_mute_command
 $silent=Observe emergency_muted 2
 if(!$silent.records[-1].emergency -or $silent.records[0].nonzero_pcm_packets -ne $silent.records[-1].nonzero_pcm_packets -or $silent.records[-1].level_l -or $silent.records[-1].level_r){throw 'Emergency mute not honored'}
 $null=Send U alert_unmute_command
 $null=Send X exit_command
 $resume=Observe resumed
 if($resume.records[-1].emergency -or $resume.records[-1].played_pairs -le $resume.records[0].played_pairs){throw 'WAV resume failed'}
 $off=Send Z hide_command
 $on=Send Z show_command
 if($off.visual_enabled -or !$on.visual_enabled){throw 'Visualization toggle failed'}
 $final=Observe final
 foreach($q in @($base,$mute,$normal,$alarm,$silent,$resume,$final)){
  foreach($r in $q.records){if($r.audio_underflows -or $r.underflow_pixels -or $r.sd_error -or $r.wav_error -or $r.image_error){throw 'Media error in scenario'}}
 }
 [ordered]@{date=(Get-Date).ToString('o');passed=$true;post_mute_pcm_and_levels_zero=$true;emergency_wav_position_held=$true;alarm_pcm_output=$true;emergency_mute_honored=$true;wav_resume=$true;visual_toggle=$true;images=$final.records[-1].image_count;audio_underflows=0;video_underflows=0;final_state='normal automatic slides + WAV + visualization enabled';physical_confirmation='pending'} | ConvertTo-Json | Set-Content docs/p7_board_validation.json -Encoding UTF8
 Write-Output 'PASS actual output PCM/mute levels, emergency override and mute, WAV position/resume, visualization switch, zero media errors'
}finally{Pop-Location}
