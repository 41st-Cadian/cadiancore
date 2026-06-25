"""Delete backup files created during RVMat conversion.

Default behavior: scan `addons/props` under repo root and list matching files.
Options:
  --path PATH    : base path to scan (default: ./addons)
  --patterns P   : comma-separated suffixes to remove (default: .bak,.bak2,.bak3,.bak4)
  --dry-run      : show files that would be deleted without removing
  --yes          : skip confirmation and delete

Usage examples:
  python tools/cleanup_backup_files.py --dry-run
  python tools/cleanup_backup_files.py --yes
  python tools/cleanup_backup_files.py --path p:/Z/re --patterns .bak,.old
"""
from pathlib import Path
import argparse
import sys


def find_backup_files(base: Path, patterns):
    matches = []
    for p in base.rglob('*'):
        if not p.is_file():
            continue
        for suf in patterns:
            if str(p).endswith(suf):
                matches.append(p)
                break
    return matches


def main():
    ap = argparse.ArgumentParser(description='Cleanup backup files (safe).')
    ap.add_argument('--path', '-p', default='addons', help='Base path to scan (default: ./addons)')
    ap.add_argument('--patterns', default='.bak,.bak2,.bak3,.bak4', help='Comma-separated suffixes to delete')
    ap.add_argument('--dry-run', action='store_true', help='List files without deleting')
    ap.add_argument('--yes', action='store_true', help='Delete without prompting')
    args = ap.parse_args()

    base = Path(args.path)
    if not base.exists():
        print(f'Base path not found: {base}')
        sys.exit(1)

    patterns = [p.strip() for p in args.patterns.split(',') if p.strip()]
    files = find_backup_files(base, patterns)

    if not files:
        print('No backup files found.')
        return

    print(f'Found {len(files)} backup files under {base}:')
    for f in files:
        print(' -', f)

    if args.dry_run:
        print('\nDry run: no files were deleted.')
        return

    if not args.yes:
        resp = input('\nDelete these files? [y/N]: ').strip().lower()
        if resp not in ('y', 'yes'):
            print('Aborted. No files were deleted.')
            return

    deleted = 0
    for f in files:
        try:
            f.unlink()
            deleted += 1
        except Exception as e:
            print(f'Failed to delete {f}: {e}')

    print(f'Deleted {deleted} files.')


if __name__ == '__main__':
    main()
