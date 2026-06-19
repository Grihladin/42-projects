<p align="center">
  <img src="../42-project-badges/badges/get_next_linee.png" alt="get_next_line badge" width="150">
</p>

# get_next_line

get_next_line is a C function that reads one line at a time from a file
descriptor while preserving unread data between calls.

## Features

- Configurable `BUFFER_SIZE`
- Supports multiple file descriptors
- Returns the next line or `NULL` at end of file

## How to run

Include the header and compile the two source files with your program:

```bash
cd 42HN-get-next-line
cc -Wall -Wextra -Werror -DBUFFER_SIZE=42 \
  your_program.c src/get_next_line.c src/get_next_line_utils.c \
  -Iinc -o your_program
```

Made with ❤️ by [mratke](https://github.com/Grihladin) - 42 Heilbronn
