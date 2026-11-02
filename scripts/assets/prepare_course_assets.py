"""Validate and copy the user's original course assets without changing them."""
import hashlib
import json
import shutil
import struct
import wave
from pathlib import Path

from PIL import Image

ROOT = Path(__file__).resolve().parents[2]
SOURCE = ROOT / '素材'
DEST = ROOT / '素材_整理版'
BACKGROUND_NAMES = ('WAIT01', 'WAIT02', 'COURSE', 'LESSON01', 'LESSON02', 'LESSON03',
                    'OBSERVE', 'QUIZ01', 'QUIZ02', 'QUIZ03', 'EXPL01', 'EXPL02', 'EXPL03',
                    'RESULT', 'NOTICE', 'ALERT')
AUDIO_NAMES = ('BGM01', 'LECT01', 'LECT02', 'LECT03', 'TONE01', 'PIANO01', 'VOICE01')
LABELS = ('BACK', 'BROWSE', 'CONT', 'NEXT', 'OK', 'PIANO', 'PREV', 'REPLAY',
          'RETRY', 'START', 'TONE', 'VOICE')


def sha(path):
    h = hashlib.sha256()
    with path.open('rb') as f:
        for block in iter(lambda: f.read(1024 * 1024), b''):
            h.update(block)
    return h.hexdigest()


def copy_checked(source, destination, records, metadata):
    if not source.is_file():
        raise FileNotFoundError(source)
    destination.parent.mkdir(parents=True, exist_ok=True)
    if destination.exists():
        raise FileExistsError(destination)
    shutil.copy2(source, destination)
    before, after = sha(source), sha(destination)
    if before != after:
        raise ValueError(f'Copy hash mismatch: {source}')
    records.append({'source': str(source.relative_to(ROOT)),
                    'output': str(destination.relative_to(ROOT)),
                    'sha256': after, **metadata})


def main():
    if DEST.exists():
        raise FileExistsError(f'Output already exists: {DEST}')
    # Validate all inputs before creating any output.
    jobs = []
    for name in BACKGROUND_NAMES:
        path = SOURCE / 'backgrounds_bmp24' / (name + '.bmp')
        with path.open('rb') as f:
            h = f.read(54)
        if len(h) < 54 or h[:2] != b'BM':
            raise ValueError(f'Not a BMP: {path}')
        offset = struct.unpack_from('<I', h, 10)[0]
        dib = struct.unpack_from('<I', h, 14)[0]
        width, height = struct.unpack_from('<ii', h, 18)
        planes, bits, compression = struct.unpack_from('<HHI', h, 26)
        if (dib < 40 or width != 640 or abs(height) != 480 or planes != 1 or
                bits != 24 or compression != 0 or
                path.stat().st_size < offset + ((width * 3 + 3) // 4 * 4) * abs(height)):
            raise ValueError(f'Unsupported or truncated BMP: {path}')
        with Image.open(path) as im:
            im.load()
        jobs.append((path, DEST / 'TF_ROOT' / (name + '.BMP'),
                     {'type': 'BMP', 'width': width, 'height': height, 'bits': bits, 'compression': compression}))
    for name in AUDIO_NAMES:
        path = SOURCE / (name + '.WAV')
        with wave.open(str(path), 'rb') as w:
            if (w.getnchannels(), w.getframerate(), w.getsampwidth(), w.getcomptype()) != (2, 48000, 2, 'NONE'):
                raise ValueError(f'Unsupported WAV: {path}')
            frames = w.getnframes()
            data = w.readframes(frames)
            if frames == 0 or len(data) != frames * 4:
                raise ValueError(f'Empty or truncated WAV: {path}')
        jobs.append((path, DEST / 'TF_ROOT' / (name + '.WAV'),
                     {'type': 'WAV', 'channels': 2, 'rate': 48000, 'bits': 16, 'frames': frames}))
    ui = [('bases/BTN_BASE', 'BASEBTN', (160, 48)), ('bases/OPT_BASE', 'BASEOPT', (272, 44))]
    ui += [(f'labels/LBL_{name}', name, (160, 48)) for name in LABELS]
    ui += [(f'labels/QUIZ{q:02}_{answer}', f'Q{q:02}{answer}', (272, 44))
           for q in range(1, 4) for answer in 'ABCD']
    for original, short, dimensions in ui:
        png, svg = SOURCE / 'ui' / (original + '.png'), SOURCE / 'ui' / (original + '.svg')
        with Image.open(png) as im:
            im.load()
            if im.size != dimensions or im.mode != 'RGBA' or im.getchannel('A').getextrema() != (0, 255):
                raise ValueError(f'Unexpected UI dimensions/transparency: {png}')
        if not svg.is_file():
            raise FileNotFoundError(svg)
        jobs.append((png, DEST / 'UI_PNG' / (short + '.PNG'),
                     {'type': 'RGBA_PNG_SOURCE', 'width': dimensions[0], 'height': dimensions[1]}))
        jobs.append((svg, DEST / 'UI_SVG' / (short + '.SVG'), {'type': 'SVG_SOURCE'}))
    records = []
    for source, destination, metadata in jobs:
        copy_checked(source, destination, records, metadata)
    (DEST / 'manifest.json').write_text(json.dumps({'files': records}, ensure_ascii=False, indent=2), encoding='utf-8')
    print(f'PASS: {len(BACKGROUND_NAMES)} BMP, {len(AUDIO_NAMES)} WAV, {len(ui)} PNG + {len(ui)} SVG; copies verified by SHA-256')


if __name__ == '__main__':
    main()
