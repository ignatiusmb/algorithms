from os import getcwd, path, remove, sep, walk
from os.path import getsize, split

IGNORE = (".git", ".vscode")

TOTAL_SIZE = 0
for idx, (root, dirs, files) in enumerate(walk(getcwd())):
    if not idx: base_idx = root.split(sep).index(split(root)[-1])
    if not any([True for x in IGNORE if x in root]):
        if not files: continue
        folder = f"{sep}".join(root.split(sep)[base_idx:])
        for f in files:
            filepath = f"{root}/{f}"
            filesize = getsize(filepath)
            if "." not in f:
                TOTAL_SIZE += filesize
                print(f"{filesize/float(1<<10):.2f} KB << {folder}{sep}{f}")
                remove(filepath)

print(f"\n{TOTAL_SIZE/float(1<<10):.2f} total KB freed from the disk")
