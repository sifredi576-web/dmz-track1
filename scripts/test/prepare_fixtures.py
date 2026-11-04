"""Generate test data from current source assets; no checked-in package copies."""
from pathlib import Path
import importlib.util
import json
import sys

sys.dont_write_bytecode = True
root = Path(__file__).resolve().parents[2]
spec = importlib.util.spec_from_file_location("packer", root / "scripts/assets/pack_platform.py")
packer = importlib.util.module_from_spec(spec)
spec.loader.exec_module(packer)
scene = json.loads((root / "assets/course.json").read_text(encoding="utf-8"))
outputs, info = packer.compile_scene(scene, root / "assets")
out = root / "build/test_data"
out.mkdir(parents=True, exist_ok=True)
(out / "scene.hex").write_text("".join(f"{b:02x}\n" for b in outputs["SCENE.BIN"]), encoding="ascii")
font = json.loads((root / "assets/top_ticker_font.json").read_text(encoding="utf-8"))
(out / "top_ticker_columns.hex").write_text("".join(f"{v:04x}\n" for v in font["columns"]), encoding="ascii")
assert len(scene["pages"]) == 19 and len(scene["resources"]) == 55 and info["widgets"] == 47
print("Prepared current 19-page course and ticker simulation inputs")
