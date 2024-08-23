# Custom printf Function

This project involves creating a custom implementation of the `printf` function in C.

## Features

- Supports the following conversion specifiers:
  - `%c`: Character
  - `%s`: String
  - `%%`: Percent sign
  - `%d` / `%i`: Signed decimal integer

## Usage

Include the `main.h` header file and use the `_printf` function as you would use `printf`.

### Example

```c
#include "main.h"

int main(void)
{
    _printf("Character: %c\n", 'A');
    _printf("String: %s\n", "Hello, World!");
    _printf("Percentage: %%\n");
    _printf("Integer: %d\n", 42);
    return (0);
}
```

## Compilation

Compile the files with the following command:

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

## Files

- `README.md`: Project documentation.
- `_printf.c`: Contains the main `_printf` function implementation.
- `helpers.c`: Contains helper functions used by `_printf`.
- `helpers.h`: Header file for helper functions.
- `main.c`: Contains test cases or example usage of `_printf`.
- `main.h`: Header file containing prototypes and necessary includes for `_printf`.

## Man Page

A man page is included for this project to provide documentation on the usage of the `_printf` function. To view the man page, use the following command:

```sh
man ./_printf.1
```

## Project Requirements

- Allowed editors: vi, vim, emacs

- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

- All your files should end with a new line

- A README.md file, at the root of the folder of the project is mandatory

- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

- You are not allowed to use global variables

- No more than 5 functions per file

- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation; do not push your own main.c file. Our main.c files might be different from the one shown in the examples


- The prototypes of all your functions should be included in your header file called main.h

- Don’t forget to push your header file

- All your header files should be include guarded

- Note that we will not provide the _putchar function for this project

## Notes

This project is part of a learning experience and is not intended for production use. The focus is on understanding how the `printf` function works under the hood and practicing C programming concepts.

