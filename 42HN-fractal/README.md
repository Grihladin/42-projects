<p align="center">
  <img src="../42-project-badges/badges/fract-ole.png" alt="fract-ol badge" width="150">
</p>

# fract-ol

fract-ol is an interactive Mandelbrot and Julia set explorer written in C with
MLX42.

## Features

- Mandelbrot and Julia rendering
- Julia presets and custom parameters
- Mouse-wheel zoom
- Multithreaded calculations

## How to run

From this project directory:

```bash
cd 42HN-fractal
docker build -t 42hn-fractal .
docker run --rm -it -p 6081:6080 42hn-fractal
```

Choose a fractal in the terminal, then open
<http://localhost:6081/vnc.html?autoconnect=true>.

To start Mandelbrot directly:

```bash
docker run --rm -p 6081:6080 -e FRACTAL_ARGS=6 42hn-fractal
```

Made with ❤️ by [mratke](https://github.com/Grihladin) - 42 Heilbronn
