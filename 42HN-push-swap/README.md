<div align="center">

# <img src="https://github.com/Grihladin/42-project-badges/blob/main/badges/push_swape.png" width="150" height="150"> 

</div>

Push_swap is a 42 School project that sorts integers using two stacks and a limited set of operations.

## Overview

Push Swap sorts a stack of integers using the minimum number of operations possible. It uses two stacks (A and B) and implements a radix sort algorithm optimized for the constraints.

## Algorithm

- **3 elements**: Custom tiny_sort() with optimal moves
- **More elements**: Binary radix sort with negative number normalization

## Installation

**Requirements:**
- macOS or Linux
- Make

```bash
git clone https://github.com/Grihladin/42HN-push_swap.git
cd 42HN-push_swap
make
```

## Usage

```bash
./push_swap "3 2 1 6 5 8"
```

**Input**: Single argument with space-separated integers  
**Output**: Sequence of operations to sort the stack

## Performance

- **3 numbers**: 0-2 operations
- **100 numbers**: ≤ 700 operations
- **500 numbers**: ≤ 5500 operations

## Project Structure

```
push_swap/
├── push_swap.h          # Header file with function declarations
├── ps_main.c           # Main program entry point
├── ps_sorting.c        # Core sorting algorithms (radix sort, tiny sort)
├── ps_operations*.c    # Stack operations (sa, sb, pa, pb, ra, rb, etc.)
├── ps_list_fts*.c     # Linked list utility functions
├── ps_utils.c         # Helper functions and input validation
├── ft_split.c         # String parsing utilities
├── ft_printf/         # Custom printf library
├── Makefile           # Build configuration
└── README.md          # Project documentation
```

---

Made with ❤️ by **[mratke](https://github.com/Grihladin)** - 42 Heilbronn
