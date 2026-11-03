"""Check the real deliverable, including byte-identical SCENE reproduction."""
from pathlib import Path
import hashlib,json,struct,zlib,sys,importlib.util
sys.dont_write_bytecode=True
root=Path(__file__).resolve().parents[2]
spec=importlib.util.spec_from_file_location("packer",root/"scripts/assets/pack_platform.py")
packer=importlib.util.module_from_spec(spec);spec.loader.exec_module(packer)
scene=json.loads((root/"assets/course.json").read_text(encoding="utf-8"))
outputs,info=packer.compile_scene(scene,root/"assets")
reference=json.loads((root/"release/current/verification.json").read_text(encoding="utf-8-sig"))
data=outputs["SCENE.BIN"]
assert hashlib.sha256(data).hexdigest()==reference["scene_sha256"],"Scene content changed during cleanup"
assert zlib.crc32(data[32:])==struct.unpack_from("<I",data,12)[0]
assert not any(name.startswith("U") and name.endswith(".BIN") for name in outputs)
for resource in info["resources"]:
 if resource["kind"]=="sprite":
  start=32+resource["embedded_offset"];payload=data[start:start+resource["bytes"]]
  assert len(payload)==resource["width"]*resource["height"]*2
  assert hashlib.sha256(payload).hexdigest()==resource["sha256"]
for name,content in outputs.items():assert (root/"release/current/tf"/name).read_bytes()==content,name
print("PASS: source assets, CRC, embedded UI and generated TF package; SCENE.BIN identical to verified package")
