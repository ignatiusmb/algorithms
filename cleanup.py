from os import getcwd, remove, walk

IGNORE = (".git", ".vscode")
for root, dirs, files in walk(getcwd()):
    if not any([True for x in IGNORE if x in root]):
        if not files: continue
        for f in files:
            filepath = f"{root}/{f}"
            if "." not in f:
                remove(filepath)
                print(f"Cleaned {filepath}")
