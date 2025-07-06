<div align="center">

# <img src="https://github.com/Grihladin/42-project-badges/blob/main/badges/libfte.png" width="150" height="150"> 

</div>

Libft([42Heilbronn](https://www.42heilbronn.de/en/) project) is a custom C library that recreates essential functions from the C standard library, plus additional utility functions. This library serves as the foundation for my future 42 projects.

## Features

- **Standard C Library Functions**: String manipulation, memory management, character checking
- **Additional Utilities**: Enhanced string operations, conversion functions, file descriptor output
- **Bonus Functions**: Complete linked list implementation
- **42 Norm Compliant**: Follows strict coding standards with no memory leaks

## Usage

```bash
# Build with bonus functions
make bonus

# Include in your project
#include "libft.h"

# Compile with your code:
gcc -Wall -Wextra -Werror your_file.c libft.a
```

**Library**: `libft.a` static library  
**Header**: `libft.h` with all function prototypes

## Function Categories

- **Character Functions**: `ft_isalpha`, `ft_isdigit`, `ft_tolower`, etc. (7 functions)
- **String Functions**: `ft_strlen`, `ft_strchr`, `ft_split`, etc. (15 functions)
- **Memory Functions**: `ft_memset`, `ft_memcpy`, `ft_calloc`, etc. (7 functions)
- **Conversion Functions**: `ft_atoi`, `ft_itoa` (2 functions)
- **Output Functions**: `ft_putstr_fd`, `ft_putnbr_fd`, etc. (4 functions)
- **Bonus - List Functions**: `ft_lstnew`, `ft_lstadd_back`, etc. (9 functions)

## Project Structure

```
libft/
├── include/
│   └── libft.h              # Header file with function prototypes
├── src/
│   ├── char/                # Character checking and conversion functions
│   ├── string/              # String manipulation functions
│   ├── memory/              # Memory manipulation functions
│   ├── conversion/          # Data conversion functions
│   ├── output/              # Output functions
│   └── list/                # Linked list functions (bonus)
├── Makefile                 # Build configuration
└── README.md                # Project documentation
```

---

Made with ❤️ by **[mratke](https://github.com/Grihladin)** - 42 Heilbronn
