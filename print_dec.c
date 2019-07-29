#include "holberton.h"

/**
 * print_dec - Entry point
 * @var: list to arguments.
 * Return: lenght.
 */


int print_dec(va_list var)
{
	int count_1;
	int n = va_arg(var, int);

	count_1 = 0;
	count_1 = count_1 + print_number(n);

	return (count_1);
}
