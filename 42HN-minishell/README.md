<p align="center">
  <img src="../42-project-badges/badges/minishelle.png" alt="Minishell badge" width="150">
</p>

# Minishell

Minishell is a small Unix shell written in C with command parsing, pipelines,
redirections, environment expansion, signals, and built-in commands.

## Features

- Pipes, redirections, heredocs, and quoting
- Environment-variable and exit-status expansion
- `cd`, `echo`, `env`, `exit`, `export`, `pwd`, and `unset`

## How to run

From this project directory:

```bash
cd 42HN-minishell
docker build -t 42hn-minishell .
docker run --rm -it 42hn-minishell
```

Exit with the `exit` command.

Made with ❤️ by [psenko](https://github.com/plavik) and
[mratke](https://github.com/Grihladin) - 42 Heilbronn
