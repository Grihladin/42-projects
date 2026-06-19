<p align="center">
  <img src="../42-project-badges/badges/philosopherse.png" alt="Philosophers badge" width="150">
</p>

# Philosophers

Philosophers simulates the dining philosophers problem using POSIX threads and
mutexes.

## Features

- One thread per philosopher
- Mutex-protected forks and output
- Death detection and optional meal limits

## How to run

```bash
cd 42HN-philosophers
make
./philo 5 800 200 200
```

An optional fifth argument sets how many times each philosopher must eat:

```bash
./philo 4 410 200 200 5
```

Made with ❤️ by [mratke](https://github.com/Grihladin) - 42 Heilbronn
