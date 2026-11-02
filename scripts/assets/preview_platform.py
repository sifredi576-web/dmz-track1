"""Reference rasterizer for layout QA only, not a runtime playback dependency."""
import argparse
import json
import struct
from pathlib import Path
from PIL import Image, ImageDraw


def sprite(path, resource, version):
    data = path.read_bytes()
    if version == 2:
        width, height = resource["width"], resource["height"]
        data = bytes(16)+data
    elif data[:4] != b"DZUI":
        raise ValueError("Not a DZUI sprite")
    if version != 2:
        width, height = struct.unpack_from("<HH", data, 4)
    pixels = []
    for (word,) in struct.iter_unpack("<H", data[16:]):
        pixels.append((((word >> 10) & 31)*255//31, ((word >> 5) & 31)*255//31,
                       (word & 31)*255//31, 255 if word & 32768 else 0))
    image = Image.new("RGBA", (width, height))
    image.putdata(pixels)
    return image


def main():
    args = argparse.ArgumentParser()
    args.add_argument("package", type=Path)
    args.add_argument("--output", required=True, type=Path)
    options = args.parse_args()
    report = json.loads((options.package/"PACKAGE.json").read_text(encoding="utf-8"))
    data = (options.package/"SCENE.BIN").read_bytes()
    rc, pc, wc = data[16:19]
    base = 32+rc*32
    resources = report["resources"]
    names = {i:n for n,i in report["pages"].items()}
    atlas = Image.new("RGB", (1280, ((pc+3)//4)*268), "#dddddd")
    options.output.mkdir(parents=True, exist_ok=True)
    for i in range(pc):
        page = data[base+i*32:base+(i+1)*32]
        image = Image.open(options.package/resources[page[1]]["file"]).convert("RGBA")
        for j in range(page[8], page[8]+page[9]):
            record = data[base+pc*32+j*32:base+pc*32+(j+1)*32]
            x, y, width, height = struct.unpack_from("<HHHH", record, 4)
            image.alpha_composite(sprite(options.package/resources[record[3]]["file"], resources[record[3]], report["version"]), (x,y))
            image.alpha_composite(sprite(options.package/resources[record[2]]["file"], resources[record[2]], report["version"]), (x,y))
            if j == page[8]:
                ImageDraw.Draw(image).rounded_rectangle((x,y,x+width-1,y+height-1), radius=10,
                                                       outline="#ffe56d", width=2)
        image.convert("RGB").save(options.output/(names[i]+".png"))
        atlas.paste(image.convert("RGB").resize((320,240)), ((i%4)*320,(i//4)*268))
        ImageDraw.Draw(atlas).text(((i%4)*320+5,(i//4)*268+244), names[i], fill="black")
    atlas.save(options.output/"CONTACT.png")
    print(f"Rendered {pc} reference pages; not an FPGA screenshot")


if __name__ == "__main__":
    main()
