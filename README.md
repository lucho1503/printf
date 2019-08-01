![Holberton Logo](https://www.holbertonschool.com/holberton-logo.png)

# Project _printf();

## Our first project as software development students at holberton school

## Define

* Create a file whit a function format for output conversion, receive some arguments, and take into account the format produces a result

* This function returns a number of printed characters excluding the null byte to end the string output

* To use our printf function, it is necessary to include the file holberton.h

# Synopsis

## Header used
* "holberton.h"
* <stdlib.h>
* <stdio.h>
* <stdarg.h>

## Main function 

### int printf(const char * format,...)

## Current Conversion Specifiers
| Specifier | Description |
| --------  | ----------- |
| %c | writes a single character |
| %s | writes a character string |
| %% | writes the literal % |
| %d | writes the decimal form a signed integer |
| %i | writes the decimal form a signed integer |
| %u | writes the decimal form of an unsigned integer |

## Functions

* **int _putchar(char c);**
> Writes the character c to stdout

* **int print_int(va_list var);**
> Is a function write an integers and decimals

* **int print_char(va_list var);**
> Is a function write just an character

* **int print_string(va_list var);**
> Is a function write a string

* **int print_dec(va_list var);**
> Is a function write the decimal form

* **int (get_op_func(char s))(va_list var);**
> It is a function that the structure data is equal to the arguments


## Authors

* [@luchito] Luis Cano (https://twitter.com/luchito1503)
* [@prototipo3d] Jose Guerra (https://twitter.com/prototipo3d)
