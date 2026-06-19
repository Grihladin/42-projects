<p align="center">
  <img src="../42-project-badges/badges/minirte.png" alt="miniRT badge" width="150">
</p>

# miniRT

miniRT is a ray tracer written in C with MLX42. It renders scenes containing
spheres, planes, cylinders, lights, and cameras.

## Features

- Sphere, plane, and cylinder intersections
- Ambient and point lighting with shadows
- Interactive camera movement and rotation
- Scene parsing from `.rt` files

## How to run

From this project directory:

```bash
cd 42HN-miniRT
docker build -t 42hn-minirt .
docker run --rm -p 6082:6080 42hn-minirt
```

Open <http://localhost:6082/vnc.html?autoconnect=true>.

To render another included scene:

```bash
docker run --rm -p 6082:6080 42hn-minirt examples/scene_a_lot.rt
```

Made with ❤️ by [psenko](https://github.com/plavik) and
[mratke](https://github.com/Grihladin) - 42 Heilbronn
