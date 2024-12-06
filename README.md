# 42 Printf

### Description
`42_printf` is an implementation of the standard `printf` function in C. 
This project is part of the 42 school curriculum, designed to enhance understanding of variadic functions and formatted output in C.

### Features
- Custom implementation of the `ft_printf` function.
- Supports various format specifiers (e.g., %d, %s, %x, %u).
- Handles variadic arguments efficiently.

### Requirements
- A C compiler (e.g., CC)
- Make

### Usage
To compile the project:
```sh
make
```
(It compiles with -Wall -Wextra -Werror flags)
After the compilation it will create a libftprintf.a file

To use it, you should create a file (e.g., main.c) and call the ft_printf function.
To compile te main:
```sh
cc main.c libftprintf.a
```

To run the provided tests:
```sh
.\a.out
```
