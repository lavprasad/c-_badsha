#!/usr/bin/env bash
# Launch the Badsha private learning hub (Linux / macOS / Git Bash).
set -euo pipefail
cd "$(dirname "$0")/.."
exec python3 hub/server.py
