param([string]$Port='COM9',[string]$Output='docs/course_autoplay_board.json',[switch]$AdvanceOnly)
# UART injects KEY2/navigation events only; all timing and page advances run on FPGA.
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
$passed=$false;$failure=$null;$script:state=$null
function Sample {
 $r=Read-Frame
 if($r.version -ne 5 -or !$r.pll_locked -or !$r.bist_passed -or $r.sd_error -or $r.image_error -or $r.wav_error -or $r.fb_fault -or $r.fifo_fault -or $r.platform_config_error){throw 'Unhealthy board status'}
 $script:state=$r
 return $r
}
function Event([int]$action) {
 [byte[]]$command=@(0xd0+$action);$serial.Write($command,0,1)
 Start-Sleep -Milliseconds 120;$serial.DiscardInBuffer();$bytes.Clear()
}
function Page([int]$wanted,[int]$timeout=25) {
 $until=$watch.Elapsed.TotalSeconds+$timeout
 do {
  $r=Sample
  if($r.platform_active -and $r.display_valid -and !$r.page_loading -and $r.current_page -eq $wanted){
   $steps.Add(@{check='page';page=$wanted;elapsed=$watch.Elapsed.TotalSeconds})
   Write-Output "Committed page $wanted"
   return
  }
 } while($watch.Elapsed.TotalSeconds -lt $until)
 throw "Page $wanted did not advance automatically"
}
try {
 $serial.Open();$serial.DiscardInBuffer();$null=Sample
 Event 7;Page 0
 # Only the two waiting screens require their entry buttons.
 Event 5;Page 1;Event 5;Page 2
 if(!$script:state.page_auto_link){throw 'TF configuration is old: replace root SCENE.BIN with assets/platform/tf_course_v2/SCENE.BIN'}
 $audioPaused=$script:state.audio_paused
 if($audioPaused){throw 'Audio is already paused; resume it before testing'}
 Event 9;Page 3
 if(!$script:state.course_autoplay -or $script:state.course_autoplay_paused -or $script:state.audio_paused -ne $audioPaused){throw 'KEY2 did not enable autoplay independently of audio'}
 if(!$AdvanceOnly){
  Event 9
  $until=$watch.Elapsed.TotalSeconds+9
  do {
   $r=Sample
   if($r.current_page -ne 3 -or $r.page_loading -or !$r.course_autoplay_paused -or $r.audio_paused -ne $audioPaused){throw 'KEY2 pause changed audio or failed to hold the page'}
  } while($watch.Elapsed.TotalSeconds -lt $until)
  $steps.Add(@{check='KEY2 holds page while audio remains unpaused';seconds=9})
  Event 9
 }
 # No confirm/next-page events from lesson 1 through the first quiz.
 foreach($page in 4,5,6,7){Page $page}
 $score=$script:state.score;$until=$watch.Elapsed.TotalSeconds+5
 do {
  $r=Sample
  if($r.current_page -ne 7 -or $r.page_loading -or $r.choice_valid -or $r.score -ne $score -or $r.audio_paused -ne $audioPaused){throw 'Quiz did not wait for the user or audio pause changed'}
 } while($watch.Elapsed.TotalSeconds -lt $until)
 $steps.Add(@{check='quiz waits without automatic answers';seconds=5})
 $passed=$true
 if($AdvanceOnly){Write-Output 'PASS automatic page advances and quiz wait only; KEY2 audio independence NOT tested by this run'}
 else{Write-Output 'PASS real audio-driven page advances with no page clicks; KEY2 holds/resumes pages only; quiz waits for user'}
} catch {
 $failure=$_.Exception.Message
 throw
} finally {
 if($serial.IsOpen){$serial.Close()};$serial.Dispose()
 [ordered]@{passed=$passed;scope=$(if($AdvanceOnly){'automatic_advance_only'}else{'automatic_advance_and_key2_audio_independence'});failure=$failure;port=$Port;physical_keys_tested=$false;steps=$steps.ToArray();records=$records.ToArray();finished=(Get-Date).ToString('o')}|ConvertTo-Json -Depth 6|Set-Content -LiteralPath (Join-Path $root $Output) -Encoding utf8
}
