#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_int - Entry point
 * @var: list to arguments.
 * Return: lenght.
 */


int print_int(va_list var)
{
	int count_1;
	int n = va_arg(var, int);

	if (n == 0)
	{
		n = 0;
		return (0);
	}
	count_1 = 0;
	count_1 = count_1 + print_number(n);
	return (count_1);
}
