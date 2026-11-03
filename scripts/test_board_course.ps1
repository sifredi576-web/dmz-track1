param([string]$Port='COM9',[string]$Output='docs/platform_v2_board_course.json',[switch]$ObservationOnly)
# Development harness only. Runtime page/answer/audio work remains in FPGA.
$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
$parseErrors=$null;$tokens=$null
$ast=[System.Management.Automation.Language.Parser]::ParseFile((Join-Path $root 'scripts/system_console.ps1'),[ref]$tokens,[ref]$parseErrors)
$fn=$ast.Find({param($n)$n -is [System.Management.Automation.Language.FunctionDefinitionAst] -and $n.Name -eq 'Read-Frame'},$true)
. ([scriptblock]::Create($fn.Extent.Text))
$serial=[System.IO.Ports.SerialPort]::new($Port,115200,[System.IO.Ports.Parity]::None,8,[System.IO.Ports.StopBits]::One)
$serial.ReadTimeout=200;$serial.WriteTimeout=1000;$serial.DtrEnable=$false;$serial.RtsEnable=$false
$bytes=[System.Collections.Generic.List[byte]]::new();$records=[System.Collections.Generic.List[object]]::new()
$steps=[System.Collections.Generic.List[object]]::new();$watch=[Diagnostics.Stopwatch]::StartNew()
$scene=[IO.File]::ReadAllBytes((Join-Path $root 'assets/platform/tf_course_v2/SCENE.BIN'))
$rc=[int]$scene[16];$pc=[int]$scene[17];$widgetBase=32+($rc+$pc)*32
$passed=$false;$failure=$null;$script:state=$null
function Healthy($r){
 if($r.version -ne 5 -or !$r.pll_locked -or !$r.bist_passed -or $r.sd_error -or $r.image_error -or $r.wav_error -or $r.fb_fault -or $r.fifo_fault){throw ('Hardware error: '+($r|ConvertTo-Json -Compress))}
}
function Event([int]$value){
 [byte[]]$data=@(0xd0+$value);$serial.Write($data,0,1)
 # Drop any packet captured before the event; page completion still uses Page.
 Start-Sleep -Milliseconds 120;$serial.DiscardInBuffer();$bytes.Clear()
}
function Sample{ $script:state=Read-Frame;Healthy $script:state;return $script:state }
function Page([int]$page,[int]$score=-1){
 $limit=$watch.Elapsed.TotalSeconds+15
 do{$r=Sample;if($r.platform_config_error -and !$r.page_loading){throw ('Course controller error '+$r.platform_config_error)}}while((!$r.platform_active -or !$r.display_valid -or $r.page_loading -or $r.current_page -ne $page) -and $watch.Elapsed.TotalSeconds -lt $limit)
 if(!$r.platform_active -or $r.page_count -ne 16 -or $r.current_page -ne $page -or $r.page_loading){throw "Page $page did not commit"}
 if($score -ge 0 -and $r.score -ne $score){throw "Score mismatch on page $page"}
 $steps.Add([pscustomobject]@{check='page';page=$page;score=$r.score;focus=$r.focus;audio_index=$r.selected_wav;elapsed=$watch.Elapsed.TotalSeconds})
 Write-Host "page=$page score=$($r.score) focus=$($r.focus) wav=$($r.selected_wav)"
}
function Focus([int]$wanted){
 $page=[int]$script:state.current_page;$current=[int]$script:state.focus
 if($current -eq $wanted){return}
 $pr=32+($rc+$page)*32;$first=[int]$scene[$pr+8];$count=[int]$scene[$pr+9]
 $queue=[Collections.Generic.Queue[object]]::new();$queue.Enqueue(@{at=$current;path=@()});$seen=@{};$seen[$current]=$true;$path=$null
 while($queue.Count){
  $node=$queue.Dequeue();if($node.at -eq $wanted){$path=$node.path;break}
  for($d=0;$d -lt 4;$d++){
   $next=[int]$scene[$widgetBase+($first+[int]$node.at)*32+16+$d]
   if($next -lt $count -and !$seen.ContainsKey($next)){
    $seen[$next]=$true;$route=@($node.path)+@(@{code=@(3,4,1,2)[$d];target=$next});$queue.Enqueue(@{at=$next;path=$route})
   }
  }
 }
 if($null -eq $path){throw "No focus path to $wanted"}
 foreach($step in $path){
  Event $step.code;$until=$watch.Elapsed.TotalSeconds+3
  do{$r=Sample}while($r.focus -ne $step.target -and $watch.Elapsed.TotalSeconds -lt $until)
  if($r.focus -ne $step.target){throw 'Focus navigation failed'}
 }
}
function Choose([int]$slot){Focus $slot;Event 5;$null=Sample}
try{
 $serial.Open();$serial.DiscardInBuffer();$null=Sample;Event 7;Page 0 0
 Choose 0;Page 1 0;Choose 0;Page 2 0;Choose 0;Page 3 0
 Focus 2;Event 10;Page 14 0;Event 11;Page 15 0;Event 12;Page 3 0
 if($script:state.focus -ne 2){throw 'Notice did not restore focus'}
 Event 5;Page 4 0;Choose 2;Page 5 0;Choose 2;Page 6 0
 $observed=@();foreach($slot in 0,1,2){Choose $slot;$r=Sample;$observed+=@($r.selected_wav)}
 if(@($observed|Sort-Object -Unique).Count -ne 3){throw 'Observation samples did not select three audio resources'}
 $steps.Add(@{check='observation_audio_indexes';indexes=$observed})
 if($ObservationOnly){Choose 0;$passed=$true;Write-Output 'PASS teaching/navigation/notices and three audio selections; stopped at observation, pure tone playing';return}
 Choose 4;Page 7 0
 Choose 4;if($script:state.current_page -ne 7 -or $script:state.platform_config_error -ne 5 -or $script:state.score -ne 0){throw 'Submit-without-choice guard'}
 Choose 2;Choose 0;if(!$script:state.choice_valid -or $script:state.answered){throw 'Provisional selection state'}
 Choose 4;Page 8 1;Event 6;Page 7 1
 Choose 1;if($script:state.platform_config_error -ne 7 -or !$script:state.answered){throw 'Submitted answer was not locked'}
 Choose 4;Page 8 1;Choose 0;Page 9 1;Choose 0;Choose 4;Page 10 1
 Choose 0;Page 11 1;Choose 2;Choose 4;Page 12 2;Choose 0;Page 13 2
 if($script:state.total -ne 3){throw 'Result denominator'}
 $passed=$true;Write-Output 'PASS board course: page commits, focus, three audio selections, notice restore, answer guards, first-score lock, wrong-answer score and 2/3 result. Screen/speaker/physical-key confirmation remains separate.'
}catch{$failure=$_.Exception.Message;throw}
finally{
 if($serial.IsOpen){$serial.Close()};$serial.Dispose()
 [ordered]@{passed=$passed;failure=$failure;port=$Port;development_uart_events=$true;physical_key_tested=$false;screen_or_speaker_verified_by_agent=$false;steps=$steps.ToArray();records=$records.ToArray();finished=(Get-Date).ToString('o')}|ConvertTo-Json -Depth 8|Set-Content -LiteralPath (Join-Path $root $Output) -Encoding utf8
}
