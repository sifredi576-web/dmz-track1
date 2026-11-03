"""Read-only structural checks, independent of old stage artifacts."""
from pathlib import Path
import json,re,hashlib,sys
root=Path(__file__).resolve().parents[2];issues=[]
sources=(root/"project/td/sources.f").read_text().splitlines()
for file in sources:
 if not (root/file).is_file():issues.append("Missing source: "+file)
project=(root/"project/td/dmz_track1.al").read_text(encoding="utf-8-sig")
actual={(root/"project/td"/p).resolve() for p in re.findall(r'<File Path="([^"]+)"',project)}
if actual!={(root/p).resolve() for p in sources}:issues.append("Project/source list mismatch")
for spec in json.loads((root/"sim/tests.json").read_text()).values():
 for file in spec["sources"]:
  if not (root/file).is_file():issues.append("Missing simulation input: "+file)
for p in [root/"README.md",root/"USER_GUIDE.md",*list((root/"docs").glob("*.md"))]:
 for target in re.findall(r'\]\(([^)]+)\)',p.read_text(encoding="utf-8-sig")):
  if "://" in target or target.startswith("#"):continue
  target=target.split("#")[0].strip("<>")
  if target and not (p.parent/target).exists():issues.append(f"Broken link in {p.name}: {target}")
verification=json.loads((root/"release/current/verification.json").read_text(encoding="utf-8-sig"))
for file,digest in verification["protected_docx_sha256"].items():
 if hashlib.sha256((root/file).read_bytes()).hexdigest()!=digest:issues.append("Protected DOCX changed: "+file)
print(json.dumps({"passed":not issues,"formal_inputs":len(sources),"issues":issues},ensure_ascii=False,indent=2))
sys.exit(bool(issues))
