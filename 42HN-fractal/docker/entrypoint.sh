#!/usr/bin/env bash
set -euo pipefail

export DISPLAY="${DISPLAY:-:99}"

Xvfb "$DISPLAY" -screen 0 1024x1024x24 >/tmp/xvfb.log 2>&1 &
for _ in {1..50}; do
	[[ -S /tmp/.X11-unix/X99 ]] && break
	sleep 0.1
done
x11vnc -display "$DISPLAY" -forever -shared -nopw >/tmp/x11vnc.log 2>&1 &
websockify --web=/usr/share/novnc/ 0.0.0.0:6080 localhost:5900 >/tmp/novnc.log 2>&1 &

echo "noVNC: http://localhost:6081/vnc.html?autoconnect=true"

if [[ -n "${FRACTAL_ARGS:-}" ]]; then
	read -r -a args <<<"$FRACTAL_ARGS"
	exec ./fract-ol "${args[@]}"
fi

if [[ ! -t 0 ]]; then
	echo "No interactive terminal detected; starting Mandelbrot."
	exec ./fract-ol 6
fi

while true; do
	printf 'Choose a fractal [1-6]: '
	read -r choice
	case "$choice" in
		1)
			printf 'Julia real parameter: '
			read -r real
			printf 'Julia imaginary parameter: '
			read -r imaginary
			exec ./fract-ol 1 "$real" "$imaginary"
			;;
		2|3|4|5|6)
			exec ./fract-ol "$choice"
			;;
		*)
			echo "Enter a number from 1 to 6."
			;;
	esac
done
