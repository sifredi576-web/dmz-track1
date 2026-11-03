param([string]$Port='COM9',[string]$Output='docs/scaling_controls_board.json',[switch]$ControlsOnly,[switch]$ResumeFromMenu,[switch]$ResumeFromObservation)
# UART injects the same UI actions used by the keys. No host-driven auto page changes.
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
$parseErrors=$null;$tokens=$null
$ast=[Management.Automation.Language.Parser]::ParseFile((Join-Path $root 'scripts/system_console.ps1'),[ref]$tokens,[ref]$parseErrors)
if($parseErrors.Count){throw 'Status parser syntax error'}
$fn=$ast.Find({param($n)$n -is [Management.Automation.Language.FunctionDefinitionAst] -and $n.Name -eq 'Read-Frame'},$true)
. ([scriptblock]::Create($fn.Extent.Text))
$serial=[IO.Ports.SerialPort]::new($Port,115200,[IO.Ports.Parity]::None,8,[IO.Ports.StopBits]::One)
$serial.ReadTimeout=200;$serial.WriteTimeout=1000;$serial.DtrEnable=$false;$serial.RtsEnable=$false
$bytes=[Collections.Generic.List[byte]]::new();$records=[Collections.Generic.List[object]]::new()
$steps=[Collections.Generic.List[object]]::new();$watch=[Diagnostics.Stopwatch]::StartNew()
$scene=[IO.File]::ReadAllBytes((Join-Path $root 'assets/platform/tf_scaling_demo/SCENE.BIN'))
$rc=[int]$scene[16];$pc=[int]$scene[17];$widgetBase=32+($rc+$pc)*32
$passed=$false;$failure=$null;$script:state=$null
function Check([bool]$ok,[string]$message){if(!$ok){throw $message}}
function Mark([string]$name){$steps.Add(@{check=$name;elapsed=$watch.Elapsed.TotalSeconds;page=$script:state.current_page;focus=$script:state.focus;score=$script:state.score});Write-Output "PASS $name"}
function Sample {
 $r=Read-Frame
 Check ($r.version -eq 5 -and $r.pll_locked -and !$r.sd_error -and !$r.image_error -and !$r.wav_error -and !$r.fb_fault -and !$r.fifo_fault) 'Board hardware/media fault'
 Check ($r.platform_config_error -in @(0,5,7)) "Unexpected config/UI error $($r.platform_config_error)"
 $script:state=$r;return $r
}
function SendByte([byte]$value){$serial.Write([byte[]]@($value),0,1);Start-Sleep -Milliseconds 120;$serial.DiscardInBuffer();$bytes.Clear()}
function Event([int]$value){SendByte ([byte](0xd0+$value))}
function Command([string]$value){SendByte ([byte][char]$value)}
function Page([int]$wanted,[int]$score=-1,[int]$timeout=30){
 $limit=$watch.Elapsed.TotalSeconds+$timeout
 do{$r=Sample;if($r.bist_passed -and $r.platform_active -and $r.display_valid -and !$r.page_loading -and $r.current_page -eq $wanted){
  Check ($r.page_count -eq 19 -and $r.image_count -eq 19) 'TF card does not contain the 19-page scaling package'
  Check ($r.platform_config_error -eq 0) "UI error on committed page $wanted"
  if($score -ge 0){Check ($r.score -eq $score) "Score mismatch on page $wanted"}
  Write-Output "PAGE $wanted score=$($r.score) focus=$($r.focus)";return
 }}while($watch.Elapsed.TotalSeconds -lt $limit)
 throw "Page $wanted did not commit; last page=$($script:state.current_page)"
}
function Hold([int]$page,[double]$seconds,[bool]$pausedAuto){
 $until=$watch.Elapsed.TotalSeconds+$seconds
 do{$r=Sample;Check ($r.current_page -eq $page -and !$r.page_loading) "Page $page did not hold";Check (!$r.audio_paused) 'Autoplay control paused audio';Check ($r.course_autoplay_paused -eq $pausedAuto) 'Unexpected autoplay pause state'}while($watch.Elapsed.TotalSeconds -lt $until)
}
function Focus([int]$wanted){
 $page=[int]$script:state.current_page;$current=[int]$script:state.focus
 if($current -eq $wanted){return}
 $pr=32+($rc+$page)*32;$first=[int]$scene[$pr+8];$count=[int]$scene[$pr+9]
 $queue=[Collections.Generic.Queue[object]]::new();$queue.Enqueue(@{at=$current;path=@()});$seen=@{};$seen[$current]=$true;$path=$null
 while($queue.Count){$node=$queue.Dequeue();if($node.at -eq $wanted){$path=$node.path;break}
  for($d=0;$d -lt 4;$d++){$next=[int]$scene[$widgetBase+($first+[int]$node.at)*32+16+$d]
   if($next -lt $count -and !$seen.ContainsKey($next)){$seen[$next]=$true;$route=@($node.path)+@(@{code=@(3,4,1,2)[$d];target=$next});$queue.Enqueue(@{at=$next;path=$route})}
  }
 }
 Check ($null -ne $path) "No focus route to $wanted"
 foreach($step in $path){Event $step.code;$until=$watch.Elapsed.TotalSeconds+3;do{$r=Sample}while($r.focus -ne $step.target -and $watch.Elapsed.TotalSeconds -lt $until);Check ($r.current_page -eq $page -and $r.focus -eq $step.target) 'Focus navigation failed'}
}
function Choose([int]$slot){Focus $slot;Event 5;$null=Sample}
function Ack([string]$command,[int]$expected){$count=$script:state.command_count;Command $command;$r=Sample;Check ($r.command_count -ne $count -and $r.last_command -eq $expected) "Menu command $command did not route to $expected"}
try {
 $serial.Open();$serial.DiscardInBuffer()
 if(!$ResumeFromObservation){
 if(!$ResumeFromMenu){
 if(!$ControlsOnly){
  # Begin immediately after SRAM download. Wait through normal SDRAM/TF startup.
  foreach($p in 0..10){Page $p;Check ($script:state.course_autoplay -and !$script:state.course_autoplay_paused) 'Boot autoplay is not enabled';$steps.Add(@{check='automatic_page_without_input';page=$p;elapsed=$watch.Elapsed.TotalSeconds})}
  Hold 10 6 $false
  Check (!$script:state.choice_valid -and !$script:state.answered -and $script:state.score -eq 0) 'Quiz advanced or answered automatically'
  Mark 'boot-to-first-quiz without any injected navigation; quiz waits'
 } else {Event 7;Page 0;Event 9;$null=Sample;Choose 1;Page 1;Choose 1;Page 2;Choose 1;Page 3;Choose 0;Page 4;Choose 0;Page 5;Choose 1;Page 9;Choose 4;Page 10}
 if(!$script:state.course_autoplay_paused){Event 9;$null=Sample}
 Check ($script:state.course_autoplay_paused -and !$script:state.audio_paused) 'KEY2 failed to pause only autoplay'
 Choose 4
 Check ($script:state.current_page -eq 10 -and $script:state.platform_config_error -eq 5 -and $script:state.score -eq 0) 'Submit-without-choice guard failed'
 Mark 'submit without answer is rejected'
 Choose 2;Choose 0
 Check ($script:state.choice_valid -and !$script:state.answered) 'Answer selection/change failed'
 Choose 4;Page 11 1;Event 6;Page 10 1
 Choose 1
 Check ($script:state.platform_config_error -eq 7 -and $script:state.answered) 'Submitted answer is not locked'
 Choose 4;Page 11 1;Mark 'answer selection, submit, back, answer lock and no duplicate score'
 Choose 0;Page 12 1;Choose 0;Choose 4;Page 13 1
 Choose 0;Page 14 1;Choose 2;Choose 4;Page 15 2
 Choose 0;Page 16 2;Check ($script:state.total -eq 3) 'Result total mismatch';Mark 'wrong/correct answers and final result 2/3'
 Choose 0;Page 0 0;Mark 'restart button clears score and returns to first scaling picture'
 # Home explicitly re-enables auto mode. Open menu before the seven-second dwell.
 Event 7;Page 0 0;Command 'F';$r=Sample;Check $r.menu_open 'Settings menu failed to open'
 Hold 0 9 $false;Mark 'open settings menu blocks automatic advance'
 Ack '}' 93;Ack 'O' 79;Ack '}' 67;Ack 'O' 79;Ack 'E' 68
 Mark 'settings cursor and brightness/contrast/default command routing'
 }else{
  $r=Sample;Check ($r.current_page -eq 0 -and $r.menu_open -and $r.page_count -eq 19) 'Resume requires scaling first page with settings open'
 }
 $v=$script:state.volume;Ack '-' 45;Check ($script:state.volume -eq [Math]::Max(0,$v-1)) 'Volume down failed'
 Ack '+' 43;Check ($script:state.volume -eq [Math]::Min(8,[Math]::Max(0,$v-1)+1)) 'Volume up failed'
 if($v -eq 0){Ack '-' 45};Check ($script:state.volume -eq $v) 'Volume restore failed'
 if($v -eq 8){Ack '+' 43;Check ($script:state.volume -eq 8) 'Volume upper clamp failed'}
 Ack 'M' 77;Check $script:state.tone_muted 'Mute failed';Ack 'U' 85;Check (!$script:state.tone_muted) 'Unmute failed'
 Mark 'volume up/down and mute/unmute feedback'
 Command 'F';Page 1;Event 9;$null=Sample;Hold 1 9 $true
 Event 9;Page 2;Event 9;$null=Sample;Mark 'KEY2 holds over dwell, resumes to next image, audio remains unpaused'
 Event 6;Page 1;Choose 0;Page 0;Choose 1;Page 1;Choose 1;Page 2
 Mark 'new-image previous/next buttons, focus and Back action'
 Focus 1;Event 10;Page 17;Check ($script:state.notice_priority -eq 1) 'Normal notice priority'
 Event 11;Page 18;Check ($script:state.notice_priority -eq 2) 'Priority notice'
 Event 12;Page 2;Check ($script:state.focus -eq 1 -and $script:state.course_autoplay_paused) 'Notice failed to restore page/focus/autoplay hold'
 Mark 'normal/priority notice and context restoration'
 Choose 1;Page 3;Choose 0;Page 4;Choose 0;Page 5;Choose 1;Page 9
 }else{
  $r=Sample;Check ($r.current_page -eq 9 -and $r.course_autoplay_paused -and !$r.menu_open) 'Resume requires observation page with autoplay held'
 }
 $selected=@();foreach($slot in 0,1,2){Choose $slot;$r=Sample;$selected+=@($r.selected_wav)}
 Check (@($selected|Sort-Object -Unique).Count -eq 3) 'Three audio buttons did not select three WAV resources'
 $wav=$script:state.selected_wav;Choose 2;$r=Sample;Check ($r.current_page -eq 9 -and $r.selected_wav -eq $wav -and !$r.audio_paused) 'Repeated confirmation failed on selected voice button'
 Event 8;$r=Sample;Check ($r.current_page -eq 9 -and $r.selected_wav -eq $selected[0] -and !$r.audio_paused) 'Page replay shortcut did not select default pure tone'
 $steps.Add(@{check='three_audio_buttons_and_replay';indexes=$selected;replay_observability='confirm repeats selected button; KEY13 requests page default tone; PCM restart position unavailable'})
 Write-Output 'PASS three audio selectors, repeated confirmation and default page-audio replay shortcut'
 Choose 4;Page 10 0;Check (!$script:state.choice_valid -and !$script:state.answered) 'Restart did not clear quiz state'
 Event 9;$null=Sample;Hold 10 5 $false;Mark 'final first quiz waits with autoplay enabled and fresh answers'
 $passed=$true;Write-Output 'PASS scaling autoplay and interactive controls board regression'
}catch{$failure=$_.Exception.Message;throw}
finally{
 if($serial.IsOpen){$serial.Close()};$serial.Dispose()
 [ordered]@{passed=$passed;failure=$failure;port=$Port;controls_only=[bool]$ControlsOnly;resumed_from_menu=[bool]$ResumeFromMenu;resumed_from_observation=[bool]$ResumeFromObservation;development_uart_events=$true;physical_key_presses_tested=$false;screen_or_speaker_observed=$false;brightness_contrast_verified='command routing only; numeric values absent from compact telemetry';steps=$steps.ToArray();records=$records.ToArray();finished=(Get-Date).ToString('o')}|ConvertTo-Json -Depth 9|Set-Content -LiteralPath (Join-Path $root $Output) -Encoding utf8
}
