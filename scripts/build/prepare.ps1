# sources.f lists repository-relative inputs for both TD and scripted builds.
$ErrorActionPreference='Stop'
$root=Split-Path (Split-Path $PSScriptRoot -Parent) -Parent
$projectDir=Join-Path $root 'project/td'
$sources=@(Get-Content "$projectDir/sources.f" | Where-Object { $_ -and ! $_.StartsWith('#') })
$groups=[ordered]@{Verilog=@();System_Verilog=@();ADC_FILE=@();SDC_FILE=@()}
$order=0
foreach($file in $sources){
 if(!(Test-Path -LiteralPath (Join-Path $root $file))){throw "Missing project input: $file"}
 $ext=[IO.Path]::GetExtension($file)
 $type=switch($ext){'.v' {'Verilog'} '.sv' {'System_Verilog'} '.adc' {'ADC_FILE'} '.sdc' {'SDC_FILE'} default {throw "Unknown input: $file"}}
 $set=if($ext -in '.adc','.sdc'){'constraint_1'}else{'design_1'}
 $order++
 $groups[$type]+="            <File Path=`"../../$file`"><FileInfo><Attr Name=`"UsedInSyn`" Val=`"true`"/><Attr Name=`"UsedInP&R`" Val=`"true`"/><Attr Name=`"BelongTo`" Val=`"$set`"/><Attr Name=`"CompileOrder`" Val=`"$order`"/></FileInfo></File>"
}
$block="    <Source_Files>`n"
foreach($type in $groups.Keys){$block+="        <$type>`n"+($groups[$type] -join "`n")+"`n        </$type>`n"}
$block+='    </Source_Files>'
$path=Join-Path $projectDir 'dmz_track1.al'
$text=Get-Content -LiteralPath $path -Raw
$text=[regex]::Replace($text,'    <Source_Files>.*?    </Source_Files>',$block,[Text.RegularExpressions.RegexOptions]::Singleline)
[IO.File]::WriteAllText($path,$text,[Text.UTF8Encoding]::new($false))
foreach($kind in 'syn_1','phy_1'){
 $dir=Join-Path $projectDir "dmz_track1_Runs/$kind"
 New-Item -ItemType Directory -Force $dir|Out-Null
 $snapshot=$text.Replace('Path="."','').Replace('Path="../../','Path="../../../../')
 [IO.File]::WriteAllText((Join-Path $dir 'dmz_track1.prj'),$snapshot,[Text.UTF8Encoding]::new($false))
 $settings=@('set ADCList {"../../../../constraints/dmz_track1.adc"}','set SDCList {"../../../../constraints/dmz_track1.sdc"}','set area_option -packarea','set device_name eagle_s20.db','set package_name EG4S20BG256','set prj_name dmz_track1','set top_model_name dmz_track1_top')
 if($kind -eq 'syn_1'){$settings+=@('set start_step read_design','set end_step opt_gate','set run_type syn')}
 else{$settings+=@('set arr_filter false','set drHoldFix on','set parent ../syn_1','set start_step opt_place','set end_step bitgen','set run_type phy')}
 [IO.File]::WriteAllText((Join-Path $dir 'settings.cfg'),($settings -join "`n")+"`n",[Text.UTF8Encoding]::new($false))
 Copy-Item -LiteralPath (Join-Path $PSScriptRoot 'td_flow.tcl') -Destination (Join-Path $dir 'dmz_track1.tcl') -Force
}
Write-Output "Prepared TD project: $($sources.Count) inputs"
