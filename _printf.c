#include "holberton.h"

/**
 * _printf - entry point and function principal.
 * @format: pointer to arguments.
 * Return: lenght.
 */

int _printf(const char *format, ...)
{
	int contador, i = 0;
	va_list valist;
	int (*p)(va_list);

	va_start(valist, format);
	if (format != NULL)
	{
		if (format[0] == '%' && format[1] == '\0')
		{
			return (-1);
		}
		contador = 0;
		i = 0;
		while (format[i] != '\0')
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
				{
					contador = contador + _putchar(format[i]);
					i++;
				}
				else if (format[i + 1] != '\0')
				{
					p = get_op_func(format[i + 1]);
contador += (p ? p(valist) : _putchar(format[i]) + _putchar(format[i + 1]));
					i++;
				}
			}
			else
				contador = contador + _putchar(format[i]);
			i++;
		}
		va_end(valist);
	}
	else
	{
		return (-1);
	}
	return (contador);
}
