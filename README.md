# ft_printf

## Description

`ft_printf` is a custom implementation of the standard `printf` function in C, handling formatted output with various specifiers.

## Features

- **Format Specifiers**: 
  - `%c` - Prints a single character.
  - `%s` - Prints a string (as defined by the common C convention).
  - `%p` - The void * pointer argument has to be printed in hexadecimal format.
  - `%d` - Prints a decimal (base 10) number.
  - `%i` - Prints an integer in base 10.
  - `%u` - Prints an unsigned decimal (base 10) number.
  - `%x` - Prints a number in hexadecimal (base 16) lowercase format.
  - `%X` - Prints a number in hexadecimal (base 16) uppercase format.
  - `%%` - Prints a percent sign.

## Installation

To get started with this project, simply clone the repository to your local machine:

```bash
git clone https://github.com/Mouad-El-Asri/ft_printf.git
```

## Usage

Once you've cloned the repository, you can compile the `ft_printf` project by following these steps:

1. Navigate to the project directory:

    ```bash
    cd ft_printf
    ```

2. Compile the project using `make`:

    ```bash
    make
    ```

3. To test your implementation, you can include `ft_printf` in your C programs:

    ```c
    #include "ft_printf.h"

    int main() {
        ft_printf("Hello, World! %d\n", 42);
        return 0;
    }
    ```

4. You can then compile and run your program:

    ```bash
    gcc main.c -L . -l ftprintf
    ./a.out
    ```

## Example

Here’s a basic example demonstrating how `ft_printf` works:

```c
#include "ft_printf.h"

int main() {
    int num = 1234;
    char c = 'A';
    
    ft_printf("This is a number: %d\n", num);
    ft_printf("This is a character: %c\n", c);
    return 0;
}
```

**Output**:

```
This is a number: 1234
This is a character: A
```

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

This project is part of the **42 Network** curriculum.

