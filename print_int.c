#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_number - Entry point
 * @n: numbers to arguments.
 * Return: lenght.
 */

int print_number(int n)
{
	int count_1;
	unsigned int numero;

	numero = n;
	count_1 = 0;
	if (n < 0)
	{
		putchar('-');
		numero = -numero;
	}
	if (n == 0)
	{
		count_1 = count_1 + putchar('0');
		return (count_1);
	}
	if (numero / 10)
		count_1 = count_1 + print_number(numero / 10);
	count_1 = count_1 + putchar(numero % 10 + '0');
	return (count_1);
}
