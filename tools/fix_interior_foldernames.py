import re
from pathlib import Path

root = Path(r"p:/Z/re/addons/props")
pattern = re.compile(r"(z\\re\\addons\\props\\interior\\data\\)([^\\]+)\\([^\"]+)")
word_to_num = {'one':'1','two':'2','three':'3','four':'4','five':'5'}
changed = []
for path in root.rglob('*.rvmat'):
    text = path.read_text(encoding='utf-8')
    orig = text
    def repl(m):
        prefix = m.group(1)
        folder = m.group(2)
        fname = m.group(3)
        target = None
        # Hallway_One etc with trailing digit
        mh = re.match(r'^Hallway_(One|Two|Three|Four|Five)_(\d+)$', folder)
        if mh:
            w = word_to_num[mh.group(1).lower()]
            d = mh.group(2)
            target = f"hallway{w}{d}"
        else:
            m2 = re.match(r'^Hallway_Two_([A-Za-z_]+)$', folder)
            if m2:
                target = 'hallway_' + m2.group(1).lower()
            else:
                # general fallback: lowercase and replace non-alnum with underscore
                target = re.sub(r'[^0-9a-z]+','_', folder.lower()).strip('_')
        return prefix + target + '\\' + fname
    text = pattern.sub(repl, text)
    if text != orig:
        bak = path.with_suffix(path.suffix + '.bak3')
        bak.write_text(orig, encoding='utf-8')
        path.write_text(text, encoding='utf-8')
        changed.append(str(path))

print(f"Fixed {len(changed)} files")
for p in changed:
    print(p)
