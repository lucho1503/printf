#ifndef PRINT_F
#define PRINT_F

#include <stdio.h>
#include <stdarg.h>

/**
 * struct str - struct the pointers.
 * @str: name the struct.
 * @f: pointer to functios.
 * @c: variable to struct.
 * Description: array the structs.
 */

typedef struct str
{
	char *c;
	int (*f)(va_list);
} mr;

/*int print_number(int n);*/
/*int print_int(va_list var);*/
int _printf(const char *format, ...);
int print_char(va_list var);
int print_string(va_list var);
int _putchar(char c);
/*int print_dec(va_list var);*/
int (*get_op_func(char s))(va_list var);

#endif /* PRINT_F */
