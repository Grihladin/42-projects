<p align="center">
  <img src="../42-project-badges/badges/pipexe.png" alt="pipex badge" width="150">
</p>

# pipex

pipex recreates a two-command shell pipeline in C using processes, pipes, and
file-descriptor redirection.

## Features

- Executes two commands connected by a pipe
- Resolves executables through `PATH`
- Redirects input and output files

## How to run

```bash
cd 42HN-pipex
make
./pipex infile "grep hello" "wc -l" outfile
```

This is equivalent to:

```bash
< infile grep hello | wc -l > outfile
```

Made with ❤️ by [mratke](https://github.com/Grihladin) - 42 Heilbronn
