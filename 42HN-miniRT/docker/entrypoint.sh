#!/usr/bin/env bash
set -euo pipefail

export DISPLAY="${DISPLAY:-:99}"

Xvfb "$DISPLAY" -screen 0 600x600x24 >/tmp/xvfb.log 2>&1 &
for _ in {1..50}; do
	[[ -S /tmp/.X11-unix/X99 ]] && break
	sleep 0.1
done
x11vnc -display "$DISPLAY" -forever -shared -nopw >/tmp/x11vnc.log 2>&1 &
websockify --web=/usr/share/novnc/ 0.0.0.0:6080 localhost:5900 >/tmp/novnc.log 2>&1 &

echo "noVNC: http://localhost:6082/vnc.html?autoconnect=true"
exec ./miniRT "$@"
