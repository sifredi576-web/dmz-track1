$ErrorActionPreference='Stop'
$root=Split-Path $PSScriptRoot -Parent
$parseErrors=$null;$tokens=$null
$ast=[System.Management.Automation.Language.Parser]::ParseFile((Join-Path $root 'scripts/system_console.ps1'),[ref]$tokens,[ref]$parseErrors)
if($parseErrors.Count){throw 'Console script syntax errors'}
foreach($function in @('Read-Frame','Assert-Healthy')){
 $node=$ast.Find({param($n)$n -is [System.Management.Automation.Language.FunctionDefinitionAst] -and $n.Name -eq $function},$true)
 . ([scriptblock]::Create($node.Extent.Text))
}
$words=[uint32[]]@(0x54533154,0x00108f05,0,0,0,0,0,0)
$words[2]=1 -bor (3 -shl 8) -bor (7 -shl 11) -bor (16 -shl 16) -bor (2 -shl 22) -bor (3 -shl 26)
$words[5]=(23 -shl 16) -bor (77 -shl 8) -bor (6 -shl 4) -bor 5
$words[6]=(7 -shl 27) -bor (4 -shl 23) -bor (16 -shl 17) -bor (12 -shl 12) -bor (16 -shl 6) -bor (7 -shl 1)
foreach($word in $words[0..6]){$words[7]=$words[7] -bxor $word}
$frame=[byte[]]@($words | ForEach-Object {[BitConverter]::GetBytes($_)})
$bad=$frame.Clone();$bad[10]=$bad[10]-bxor 1
$serial=[pscustomobject]@{Data=[byte[]](@(0,1,2)+$bad+$frame);Position=0}
$serial | Add-Member ScriptMethod ReadByte {if($this.Position -ge $this.Data.Length){throw [System.TimeoutException]::new()};$v=$this.Data[$this.Position];$this.Position++;return $v}
$bytes=[System.Collections.Generic.List[byte]]::new();$records=[System.Collections.Generic.List[object]]::new();$watch=[Diagnostics.Stopwatch]::StartNew()
$r=Read-Frame
if($r.version -ne 5 -or $r.current_page -ne 7 -or $r.page_count -ne 16 -or $r.score -ne 2 -or $r.total -ne 3 -or $r.focus -ne 3){throw 'Compact UI status decode'}
if($r.image_count -ne 16 -or $r.displayed_image -ne 12 -or $r.selected_wav -ne 4 -or $r.wav_count -ne 7){throw 'Compact file indexes decode'}
if($r.command_count -ne 23 -or $r.last_command -ne 77 -or $r.volume -ne 6 -or !$r.tone_muted -or $r.audio_mode -ne 1){throw 'Compact command acknowledgement decode'}
Assert-Healthy $r
Write-Output 'PASS production v5 parser, XOR checksum/resynchronization, UI/score, file indexes, command acknowledgements and health flags; no hardware access'
