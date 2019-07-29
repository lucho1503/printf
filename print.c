#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - entry point and function principal.
 * @format: pointer to arguments.
 * Return: lenght.
 */

int _printf(const char *format, ...)
{
mr L[6] = {
	{'c', print_char},
	{'s', print_string},
	{'%', print_per},
	{'i', print_int},
	{'d', print_dec},
	{0, 0}
};
int i = 0, j = 0;
va_list valist;
va_start(valist, format);

while (format && format[i] != '\0')
{
	if (format[i] != '%')
	{
	putchar(format[i]);
	}
	if (format[i] == '%')
	{
		if (format[i] == 0)
		{
			i = 0;
			return (-1);
		}
	while (j < 6)
	{
		if (format[i + 1] == L[j].c)
		{
			L[j].f(valist);
		}
		j++;
	}
	++i;
	}
	++i;
}
va_end(valist);
return (i);
}
