import re
from pathlib import Path

root = Path(r"p:/Z/re/addons/props")
pattern = re.compile(r"(z\\re\\addons\\props\\interior\\data\\)([^\\]+)(\\[^\"]+)")
changed = []
for path in root.rglob('*.rvmat'):
    parent = path.parent.name
    text = path.read_text(encoding='utf-8')
    orig = text
    def repl(m):
        prefix = m.group(1)
        folder = m.group(2)
        rest = m.group(3)
        if folder == parent:
            return m.group(0)
        return prefix + parent + rest
    new = pattern.sub(repl, text)
    if new != orig:
        bak = path.with_suffix(path.suffix + '.bak4')
        bak.write_text(orig, encoding='utf-8')
        path.write_text(new, encoding='utf-8')
        changed.append(str(path))

print(f"Updated {len(changed)} files to use parent folder names")
for p in changed:
    print(p)
