"""Offline, deterministic TF resource preparation; never runs in the playback loop."""
import argparse
import hashlib
import json
import re
import struct
import wave
import zlib
from pathlib import Path
from PIL import Image

LIMITS = dict(resources=64, pages=32, widgets=128)
ACTIONS = {"goto": 1, "audio": 2, "answer": 3, "back": 4,
           "restart": 5, "pause": 6, "mute": 7, "volume": 8, "submit": 9}


def check(ok, message):
    if not ok:
        raise ValueError(message)


def short_name(name):
    check(bool(re.fullmatch(r"[A-Z0-9_]{1,8}\.[A-Z0-9]{1,3}", name)),
          "Not an explicit uppercase 8.3 name: " + name)
    stem, ext = name.split(".")
    return (stem.ljust(8) + ext.ljust(3)).encode("ascii")


def compile_scene(scene, material_root):
    """Return config bytes, immutable output media, and human-readable allocation map."""
    resources, pages = scene["resources"], scene["pages"]
    widgets = [(p["id"], w) for p in pages for w in p.get("widgets", [])]
    for key, value in (("resources", resources), ("pages", pages), ("widgets", widgets)):
        check(0 < len(value) <= LIMITS[key] if key != "widgets" else len(value) <= LIMITS[key],
              "Capacity exceeded: " + key)
    check(len({r["id"] for r in resources}) == len(resources), "Duplicate resource ID")
    check(len({p["id"] for p in pages}) == len(pages), "Duplicate page ID")
    rid = {r["id"]: i for i, r in enumerate(resources)}
    pid = {p["id"]: i for i, p in enumerate(pages)}
    check(scene["entry"] in pid, "Unknown entry page")
    outputs, info, records = {}, [], []

    def resource(name, kind=None):
        check(name in rid, "Unknown resource: " + str(name))
        if kind:
            check(resources[rid[name]]["kind"] == kind, "Wrong resource type: " + name)
        return rid[name]

    for i, r in enumerate(resources):
        path = (material_root / r["source"]).resolve()
        check(path.is_relative_to(material_root.resolve()), "Resource outside source root")
        check(path.is_file(), "Missing resource: " + str(path))
        kind, width, height, frames = r["kind"], 0, 0, 0
        if kind == "bmp":
            data = path.read_bytes()
            check(len(data) >= 54 and data[:2] == b"BM", "Invalid BMP")
            width, signed_h, planes, bpp, compression = struct.unpack_from("<iiHHI", data, 18)
            height = abs(signed_h)
            check(planes == 1 and bpp in (24, 32) and compression == 0
                  and 0 < width <= 1920 and 0 < height <= 1080, "Unsupported BMP")
            offset = struct.unpack_from("<I", data, 10)[0]
            check(offset >= 54 and len(data) >= offset + ((width * bpp + 31) // 32) * 4 * height,
                  "Truncated BMP")
            name, kind_id = r.get("file", path.name.upper()), 1
        elif kind == "wav":
            with wave.open(str(path), "rb") as audio:
                check((audio.getnchannels(), audio.getframerate(), audio.getsampwidth(), audio.getcomptype())
                      == (2, 48000, 2, "NONE"), "Unsupported WAV: " + path.name)
                frames = audio.getnframes()
                check(frames > 0 and len(audio.readframes(frames)) == frames * 4, "Truncated WAV")
            data, name, kind_id = path.read_bytes(), r.get("file", path.name.upper()), 2
        elif kind == "sprite":
            # A1R5G5B5: little endian, one binary alpha bit, no runtime PNG decoder.
            with Image.open(path) as image:
                rgba = image.convert("RGBA")
                width, height = rgba.size
                check(0 < width <= 272 and 0 < height <= 64, "Sprite exceeds 272x64")
                pixels = bytearray()
                raw_rgba = rgba.tobytes()
                flattened = zip(raw_rgba[0::4], raw_rgba[1::4], raw_rgba[2::4], raw_rgba[3::4])
                for red, green, blue, alpha in flattened:
                    pixels += struct.pack("<H", ((alpha >= 128) << 15) | ((red >> 3) << 10)
                                          | ((green >> 3) << 5) | (blue >> 3))
                data = bytes(pixels)
            name, kind_id = r.get("file", f"U{i:03d}.BIN"), 3
        else:
            raise ValueError("Unknown resource kind: " + kind)
        check(name not in outputs and name != "SCENE.BIN", "Duplicate output filename")
        encoded_name = short_name(name)
        outputs[name] = data
        record = bytearray(32)
        record[:11], record[11] = encoded_name, kind_id
        struct.pack_into("<HHHIII", record, 12, width, height, 0, len(data), zlib.crc32(data), frames)
        records.append(bytes(record))
        info.append(dict(id=r["id"], index=i, file=name, kind=kind, width=width, height=height,
                         bytes=len(data), frames=frames, sha256=hashlib.sha256(data).hexdigest()))

    first = 0
    for i, p in enumerate(pages):
        check(len(p.get("widgets", [])) <= 8, "At most 8 widgets per page")
        check(p.get("priority", 0) in (0, 1, 2), "Priority must be 0..2")
        record = bytearray(32)
        record[0] = i
        record[1] = resource(p["background"], "bmp")
        record[2] = resource(p["audio"], "wav") if p.get("audio") else 255
        record[3] = (1 if p.get("loop", False) else 0) | (2 if p.get("visual", False) else 0) | (4 if p.get("show_score", False) else 0) | (8 if p.get("auto_optional", False) else 0)
        target = p.get("auto_target")
        check(target is None or target in pid, "Invalid auto target")
        check(not p.get("auto_optional", False) or target is not None, "Optional autoplay requires a target")
        check(not target or (p.get("question", 255) == 255 and p.get("priority", 0) == 0), "Quiz/notice cannot auto advance")
        check(not target or p.get("audio") or p.get("dwell_ms", 0) > 0, "Autoplay needs audio or a dwell time")
        check(not target or p.get("dwell_ms", 0) > 0 or not p.get("loop", False), "Loop audio never completes")
        record[4] = pid[target] if target else 255
        dwell = p.get("dwell_ms", 0)
        check(isinstance(dwell, int) and 0 <= dwell <= 65535, "Invalid dwell time")
        struct.pack_into("<H", record, 6, dwell)
        record[8:10] = bytes((first, len(p.get("widgets", []))))
        back = p.get("back")
        check(back is None or back in pid, "Invalid back target")
        record[10] = pid[back] if back else 255
        question = p.get("question", 255)
        answer = p.get("correct", 255)
        check(question in (*range(8), 255) and answer in (0, 1, 2, 3, 255), "Invalid quiz metadata")
        check((question == 255) == (answer == 255), "Incomplete quiz metadata")
        record[11:14] = bytes((question, answer, p.get("priority", 0)))
        vx, vy = p.get("visual_origin", [64, 192])
        sx, sy = p.get("score_origin", [224, 264])
        check(0 <= vx <= 128 and 0 <= vy <= 420, "Visual region outside output")
        check(0 <= sx <= 480 and 0 <= sy <= 448, "Score region outside output")
        struct.pack_into("<HHHH", record, 14, vx, vy, sx, sy)
        record[22] = p.get("score_total", 3)
        check(0 < record[22] <= 8, "Score total exceeds question slots")
        records.append(bytes(record))
        first += len(p.get("widgets", []))

    for page, w in widgets:
        record = bytearray(32)
        x, y, width, height = w["rect"]
        check(all(isinstance(v, int) for v in w["rect"]) and 0 <= x < 640 and 0 <= y < 480
              and width > 0 and height > 0 and x + width <= 640 and y + height <= 480,
              "Widget outside screen: " + page)
        check(w.get("layer", 0) in range(4), "Layer must be 0..3")
        label, base = resource(w["label"], "sprite"), resource(w["base"], "sprite")
        check((info[label]["width"], info[label]["height"]) == (width, height)
              and (info[base]["width"], info[base]["height"]) == (width, height), "Sprite/rect mismatch")
        action = w["action"]
        check(action in ACTIONS, "Unknown action")
        target = w.get("target")
        if action in ("goto", "submit"):
            check(target in pid, "Unknown jump target")
            target_id = pid[target]
        elif action == "audio":
            target_id = resource(target, "wav")
        else:
            check(target is None, "Unexpected target for action " + action)
            target_id = 255
        arg = w.get("arg", 0)
        check(isinstance(arg, int) and 0 <= arg <= 255, "Invalid action argument")
        if action == "submit":
            check(pages[pid[page]].get("question", 255) != 255, "Submit outside quiz")
        if action == "answer":
            check(arg in range(4) and pages[pid[page]].get("question", 255) != 255, "Answer outside quiz")
        record[:4] = bytes((pid[page], w.get("layer", 0), label, base))
        struct.pack_into("<HHHH", record, 4, x, y, width, height)
        record[12:16] = bytes((ACTIONS[action], target_id, arg,
                              (1 if w.get("enabled", True) else 0) | (2 if w.get("visible", True) else 0)))
        siblings = pages[pid[page]].get("widgets", [])
        local = next(i for i, candidate in enumerate(siblings) if candidate is w)
        previous, following = (local-1) % len(siblings), (local+1) % len(siblings)
        neighbors = w.get("neighbors", [previous, following, previous, following])
        check(len(neighbors) == 4 and all(isinstance(n, int) and (0 <= n < len(siblings) or n == 255)
                                         for n in neighbors), "Invalid focus neighbor")
        record[16:20] = bytes(neighbors)
        records.append(bytes(record))

    table_bytes = len(records)*32
    atlas = bytearray()
    for i, info_entry in enumerate(info):
        if info_entry["kind"] == "sprite":
            offset = table_bytes+len(atlas)
            record = bytearray(records[i])
            struct.pack_into("<I", record, 26, offset)
            records[i] = bytes(record)
            info_entry["embedded_offset"] = offset
            atlas += outputs[info_entry["file"]]
            atlas += bytes((-len(atlas)) % 32)
    payload = b"".join(records) + atlas
    check(len(payload) <= 1048576, "Scene payload exceeds 1 MiB")
    header = bytearray(32)
    header[:4] = b"DMZP"
    struct.pack_into("<HHII", header, 4, 2, 32, len(payload), zlib.crc32(payload))
    header[16:20] = bytes((len(resources), len(pages), len(widgets), pid[scene["entry"]]))
    outputs["SCENE.BIN"] = bytes(header) + payload
    # Runtime UI pixels are embedded; emit only actual TF inputs.
    for resource_info in info:
        if resource_info["kind"] == "sprite":
            outputs.pop(resource_info["file"])
    return outputs, dict(version=2, title=scene["title"], entry=scene["entry"], resources=info,
                         pages={p["id"]: i for i, p in enumerate(pages)}, widgets=len(widgets),
                         config_bytes=len(header)+len(payload), media_bytes=sum(map(len, outputs.values())),
                         sprite_format="raw little-endian A1R5G5B5 embedded at resource offset; alpha threshold 128")


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("scene", type=Path)
    parser.add_argument("--materials", required=True, type=Path)
    parser.add_argument("--output", required=True, type=Path)
    args = parser.parse_args()
    scene = json.loads(args.scene.read_text(encoding="utf-8-sig"))
    outputs, report = compile_scene(scene, args.materials)
    args.output.mkdir(parents=True, exist_ok=True)
    for name, content in outputs.items():
        destination = args.output/name
        # Never silently replace a different package's media in an existing TF directory.
        check(not destination.exists() or destination.read_bytes() == content,
              "Output differs; use a fresh output directory: " + str(destination))
    for name, content in outputs.items():
        (args.output/name).write_bytes(content)
    print(f"TF package ready: {len(outputs)} runtime files, {len(report['pages'])} pages, {report['widgets']} widgets")


if __name__ == "__main__":
    main()
