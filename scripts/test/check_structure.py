"""Read-only checks for the reorganized project. Run from any directory."""
from pathlib import Path
import hashlib,json,re,sys

root=Path(__file__).resolve().parents[2]
issues=[]
manifest=json.loads((root/'project/td/inputs.sha256.json').read_text(encoding='utf-8'))
for file,digest in manifest.items():
    path=root/file
    data=path.read_bytes() if path.is_file() else b''
    # Git may convert LF/CRLF on another checkout; accept only that text change.
    lf=data.replace(b'\r\n',b'\n')
    hashes={hashlib.sha256(d).hexdigest() for d in (data,lf,lf.replace(b'\n',b'\r\n'))}
    if not path.is_file() or digest not in hashes:
        issues.append('Changed or missing HDL/constraint: '+str(path.relative_to(root)))
sources=(root/'project/td/sources.f').read_text().splitlines()
if set(manifest)!=set(sources):issues.append('Input hash baseline differs from sources.f')
for file in sources:
    if not (root/file).is_file():issues.append('Missing source: '+file)
    if not (root/file).resolve().is_relative_to(root):issues.append('Outside repository: '+file)
al=(root/'project/td/dmz_track1.al').read_text()
project_files=[(root/'project/td'/p).resolve() for p in re.findall(r'<File Path="([^"]+)"',al)]
if set(project_files)!={(root/p).resolve() for p in sources}:issues.append('TD project differs from sources.f')
for path in (root/'sim').rglob('*'):
    if path.suffix not in ('.sv','.svh'):continue
    for file in re.findall(r'`include\s+"([^"]+)"',path.read_text(encoding='utf-8-sig')):
        if not (root/file).is_file():issues.append('Missing test include: '+file)
tests=json.loads((root/'sim/tests.json').read_text())
for name,spec in tests.items():
    for file in spec['sources']:
        if not (root/file).is_file() and file not in spec.get('generated_sources',[]):
            issues.append('Missing test source: '+name+': '+file)
for path in [root/'README.md',root/'USER_GUIDE.md',*list((root/'docs').glob('*.md'))]:
    for target in re.findall(r'\]\(([^)]+)\)',path.read_text(encoding='utf-8-sig')):
        if '://' in target or target.startswith('#'):continue
        target=target.split('#')[0].strip('<>')
        if target and not (path.parent/target).exists():issues.append(f'Broken link in {path.name}: {target}')
for old in ('build_p1','build_p2','build_p3','build_audio_test','build_system','rtl/p1','rtl/p2','rtl/p3','rtl/system','rtl/media','rtl/audio_test','sim/diagnostics'):
    if (root/old).exists():issues.append('Obsolete directory remains: '+old)
for path in (root/'scripts').rglob('*.ps1'):
    text=path.read_text(encoding='utf-8-sig')
    for name in re.findall(r'(?:\./|\$root/)(scripts/[\w/.-]+\.(?:ps1|tcl))',text):
        if not (root/name).is_file():issues.append('Missing script call: '+name)
for path in (root/'docs/verification/history').glob('*.json'):
    for ref in re.findall(r'"([^"\n]+\.(?:json|txt|timing|png))"',path.read_text(encoding='utf-8-sig')):
        filename=Path(ref).name
        if '/' not in ref and '\\' not in ref and not (path.parent/filename).is_file():
            issues.append('Missing retained evidence: '+path.name+': '+ref)
report={'passed':not issues,'verified_baseline_inputs':len(manifest),'formal_project_inputs':len(sources),'test_groups':len(tests),'issues':issues}
print(json.dumps(report,ensure_ascii=False,indent=2))
sys.exit(bool(issues))
