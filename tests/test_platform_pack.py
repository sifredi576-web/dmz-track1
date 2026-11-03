import copy
import importlib.util
import json
import struct
import unittest
import zlib
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
spec = importlib.util.spec_from_file_location("pack_platform", ROOT/"scripts/pack_platform.py")
packer = importlib.util.module_from_spec(spec)
spec.loader.exec_module(packer)


class PlatformPackageTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.scene = json.loads((ROOT/"assets/platform/sound_course.json").read_text(encoding="utf-8"))
        cls.materials = ROOT.parent/"素材"
        cls.files, cls.info = packer.compile_scene(cls.scene, cls.materials)

    def reject(self, change):
        scene = copy.deepcopy(self.scene)
        change(scene)
        with self.assertRaises(ValueError):
            packer.compile_scene(scene, self.materials)

    def test_real_package_integrity(self):
        data = self.files["SCENE.BIN"]
        self.assertEqual(data[:4], b"DMZP")
        version, size, length, crc = struct.unpack_from("<HHII", data, 4)
        self.assertEqual((version, size, length), (2, 32, len(data)-32))
        self.assertEqual(zlib.crc32(data[32:]), crc)
        self.assertGreater(length, sum(data[16:19])*32)
        self.assertEqual(len(self.scene["pages"]), 16)
        for r in self.info["resources"]:
            if r["kind"] != "sprite":
                original = next(x for x in self.scene["resources"] if x["id"] == r["id"])
                self.assertEqual(self.files[r["file"]], (self.materials/original["source"]).read_bytes())

    def test_course_autoplay_package_preserves_media(self):
        autoplay_dir = ROOT/"assets/platform/tf_course_autoplay"
        baseline_dir = ROOT/"assets/platform/tf_course_v2"
        for name, data in self.files.items():
            self.assertEqual((autoplay_dir/name).read_bytes(), data)
            self.assertEqual((baseline_dir/name).read_bytes(), data)
            if name != "SCENE.BIN":
                self.assertEqual((autoplay_dir/name).read_bytes(), (baseline_dir/name).read_bytes())

        sim_scene = bytes(int(value, 16) for value in
                          (ROOT/"sim/platform/course_v2.hex").read_text(encoding="ascii").split())
        self.assertEqual(sim_scene, self.files["SCENE.BIN"])

        page_base = 32 + 32*len(self.scene["resources"])
        page_ids = self.info["pages"]
        for page_index, page in enumerate(self.scene["pages"]):
            record = self.files["SCENE.BIN"][page_base+32*page_index:page_base+32*(page_index+1)]
            self.assertEqual(bool(record[3] & 8), page.get("auto_optional", False))
            target = page.get("auto_target")
            self.assertEqual(record[4], page_ids[target] if target else 255)
            if page.get("question", 255) != 255 or page.get("priority", 0):
                self.assertIsNone(target)

    def test_sprite_header_alpha_and_size(self):
        for r in self.info["resources"]:
            if r["kind"] == "sprite":
                data = self.files[r["file"]]
                self.assertEqual(len(data), r["width"]*r["height"]*2)
                offset = r["embedded_offset"]
                self.assertEqual(offset % 32, 0)
                self.assertEqual(self.files["SCENE.BIN"][32+offset:32+offset+len(data)], data)

    def test_resource_order_independent_binding(self):
        other = copy.deepcopy(self.scene)
        other["resources"].reverse()
        files, info = packer.compile_scene(other, self.materials)
        offset = 32+32*len(other["resources"])
        for i, page in enumerate(other["pages"]):
            bg = files["SCENE.BIN"][offset+i*32+1]
            self.assertEqual(info["resources"][bg]["id"], page["background"])

    def test_second_scene_same_protocol(self):
        scene = json.loads((ROOT/"assets/platform/exhibit_demo.json").read_text(encoding="utf-8"))
        files, info = packer.compile_scene(scene, self.materials)
        self.assertEqual(len(scene["pages"]), 2)
        self.assertEqual(files["SCENE.BIN"][:8], self.files["SCENE.BIN"][:8])

    def test_bad_jump(self):
        self.reject(lambda s: s["pages"][0]["widgets"][0].update(target="MISSING"))

    def test_outside_layout(self):
        self.reject(lambda s: s["pages"][0]["widgets"][0].update(rect=[600, 416, 160, 48]))

    def test_wrong_audio_type(self):
        self.reject(lambda s: s["pages"][0].update(audio="COURSE"))

    def test_duplicate_resource(self):
        self.reject(lambda s: s["resources"].append(copy.deepcopy(s["resources"][0])))

    def test_path_escape(self):
        self.reject(lambda s: s["resources"][0].update(source="../README.md"))

    def test_long_output_name(self):
        self.reject(lambda s: s["resources"][0].update(file="LONG_BACKGROUND.BMP"))

    def test_invalid_answer(self):
        self.reject(lambda s: next(p for p in s["pages"] if p["id"] == "QUIZ01").update(correct=4))

    def test_invalid_focus_neighbor(self):
        self.reject(lambda s: s["pages"][0]["widgets"][0].update(neighbors=[0, 0, 0, 8]))

    def test_quiz_selection_and_submit_are_distinct(self):
        for page in self.scene["pages"]:
            if page["id"].startswith("QUIZ"):
                self.assertEqual([w["action"] for w in page["widgets"]], ["answer"]*4+["submit"])
                self.assertEqual(page["widgets"][-1]["target"], page["id"].replace("QUIZ", "EXPL"))

    def test_wrong_sprite_size(self):
        self.reject(lambda s: s["pages"][0]["widgets"][0].update(label="QUIZ01_A"))


if __name__ == "__main__":
    unittest.main(verbosity=2)
