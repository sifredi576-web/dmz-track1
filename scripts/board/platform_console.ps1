param(
 [ValidateSet('Status','Up','Down','Left','Right','Confirm','Back','Home','Replay','Notice','Priority','ExitNotice')][string]$Action='Status',
 [string]$Port='COM9',[int]$Seconds=2,[string]$Output='build/reports/platform_board_action.json')
$ErrorActionPreference='Stop'
$root=Split-Path (Split-Path $PSScriptRoot -Parent) -Parent
$errs=$null;$tokens=$null
$ast=[System.Management.Automation.Language.Parser]::ParseFile((Join-Path $root 'scripts/board/system_console.ps1'),[ref]$tokens,[ref]$errs)
if($errs.Count){throw 'Status parser syntax error'}
$fn=$ast.Find({param($n)$n -is [System.Management.Automation.Language.FunctionDefinitionAst] -and $n.Name -eq 'Read-Frame'},$true)
. ([scriptblock]::Create($fn.Extent.Text))
$serial=[System.IO.Ports.SerialPort]::new($Port,115200,[System.IO.Ports.Parity]::None,8,[System.IO.Ports.StopBits]::One)
$serial.ReadTimeout=200;$serial.WriteTimeout=1000;$serial.DtrEnable=$false;$serial.RtsEnable=$false
$bytes=[System.Collections.Generic.List[byte]]::new();$records=[System.Collections.Generic.List[object]]::new()
$watch=[Diagnostics.Stopwatch]::StartNew();$before=$null;$passed=$false;$failure=$null
try{
 $serial.Open();$serial.DiscardInBuffer();$before=Read-Frame
 if($before.version -ne 5){throw 'Platform console needs production v5 status'}
 if($Action -ne 'Status'){
  $code=@{Up=1;Down=2;Left=3;Right=4;Confirm=5;Back=6;Home=7;Replay=8;Notice=10;Priority=11;ExitNotice=12}[$Action]
  [byte[]]$command=@(0xd0+$code);$serial.Write($command,0,1)
 }
 $until=$watch.Elapsed.TotalSeconds+$Seconds
 do{$r=Read-Frame}while($watch.Elapsed.TotalSeconds -lt $until)
 $passed=$r.platform_active -and $r.display_valid -and !$r.page_loading -and !$r.sd_error -and !$r.image_error -and !$r.wav_error -and !$r.platform_config_error -and !$r.fb_fault -and !$r.fifo_fault
 Write-Output ($r | ConvertTo-Json -Compress)
 if(!$passed){throw 'Platform action did not settle healthy; inspect recorded state'}
}catch{$failure=$_.Exception.Message;throw}
finally{
 if($serial.IsOpen){$serial.Close()};$serial.Dispose()
 [ordered]@{action=$Action;port=$Port;passed=$passed;failure=$failure;before=$before;records=$records.ToArray();finished=(Get-Date).ToString('o')} | ConvertTo-Json -Depth 6 | Set-Content -LiteralPath (Join-Path $root $Output) -Encoding utf8
}
