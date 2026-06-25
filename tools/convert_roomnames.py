import re
from pathlib import Path

root = Path(r"p:/Z/re/addons/props")
pattern = re.compile(r"z\\RegalisSCP_CB\\addons\\room_lcz\\data\\([^\\]+)\\([^\"]+)")
word_to_num = {'One':'1','Two':'2','Three':'3','Four':'4','Five':'5'}

changed = []
for path in root.rglob('*.rvmat'):
    text = path.read_text(encoding='utf-8')
    orig = text
    def repl(m):
        folder = m.group(1)
        fname = m.group(2)
        target = None
        # Room_123 -> data/123
        mroom = re.match(r'^Room_(\d+)$', folder)
        if mroom:
            target = f"data\\{mroom.group(1)}"
        else:
            # Hallway_WORD_DIGIT -> hallway<wordnum><digit>
            mh = re.match(r'^Hallway_(One|Two|Three|Four|Five)_(\d+)$', folder)
            if mh:
                w = word_to_num.get(mh.group(1), mh.group(1))
                d = mh.group(2)
                target = f"data\\hallway{w}{d}"
            elif folder.startswith('Hallway_Tesla'):
                target = "data\\tesla"
            elif folder.startswith('Hallway_'):
                # fallback: make lowercase with removed prefixes
                target = 'data\\' + folder.lower()
            elif folder.startswith('Room_IntroOffice'):
                target = 'data\\introroom'
            elif folder.startswith('Room_Storeroom'):
                target = 'data\\storeroom'
            elif folder.startswith('Piece_WhiteWall_Concave'):
                target = 'data\\wall_concave'
            elif folder.startswith('Piece_Stairs') or folder.startswith('Piece_TileStaircase'):
                target = 'data\\stairs'
            else:
                # general fallback: lowercase and replace spaces
                target = 'data\\' + re.sub(r'[^0-9a-z]+','_', folder.lower()).strip('_')
        return f"z\\re\\addons\\props\\interior\\{target}\\{fname}"
    text = pattern.sub(repl, text)
    if text != orig:
        bak = path.with_suffix(path.suffix + '.bak2')
        bak.write_text(orig, encoding='utf-8')
        path.write_text(text, encoding='utf-8')
        changed.append(str(path))

print(f"Remapped {len(changed)} files")
for p in changed:
    print(p)
