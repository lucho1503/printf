#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_dec - Entry point
 * @var: numbers of arguments that pass and acced to arguments.
 * Return: lenght.
 */

int print_dec(va_list var)
{
	unsigned int count_1, count_2, aux, c;
	int numero;

	numero = va_arg(var, int);
	count_1 = 0;

	if (numero < 0)
	{
		c = numero * -1;
		count_1 = count_1 + _putchar ('-');
	}
	else
	{
		c = numero;
	}
	aux = c;
	count_2 = 1;
	while (aux > 9)
	{
		aux = aux / 10;
		count_2 = count_2 * 10;
	}
	while (count_2 >= 1)
	{
		count_1 += _putchar(((c / count_2) % 10) + '0');
		count_2 = count_2 / 10;
	}
	return (count_1);
}

/**
 * print_int - Entry point
 * @var: numbers of arguments that pass and acced to arguments.
 * Return: function print_dec.
 */


int print_int(va_list var)
{
	return (print_dec(var));
}
