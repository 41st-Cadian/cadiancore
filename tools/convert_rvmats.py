import re
from pathlib import Path

root = Path(r"p:/Z/re/addons/props")
pattern_texture = re.compile(r"z\\RegalisSCP_CB\\addons\\textures\\")
pattern_roomnum = re.compile(r"z\\RegalisSCP_CB\\addons\\room_lcz\\data\\Room_(\d+)\\(Room_\d+_.+?\.paa)")
pattern_roomdata = re.compile(r"z\\RegalisSCP_CB\\addons\\room_lcz\\data\\")
pattern_any = re.compile(r"z\\RegalisSCP_CB\\addons\\")

changed = []
for path in root.rglob('*.rvmat'):
    s = path.read_text(encoding='utf-8')
    orig = s
    s = pattern_texture.sub(r"z\\re\\addons\\props\\interior\\textures\\", s)
    s = pattern_roomnum.sub(r"z\\re\\addons\\props\\interior\\data\\\1\\\2", s)
    s = pattern_roomdata.sub(r"z\\re\\addons\\props\\interior\\data\\", s)
    # fallback: replace remaining RegalisSCP_CB base
    s = pattern_any.sub(r"z\\re\\addons\\props\\interior\\", s)
    if s != orig:
        bak = path.with_suffix(path.suffix + '.bak')
        bak.write_text(orig, encoding='utf-8')
        path.write_text(s, encoding='utf-8')
        changed.append(str(path))

print(f"Modified {len(changed)} files")
for p in changed:
    print(p)
