#include "holberton.h"
#include <stdio.h>

/**
 * print_char - Entry point
 * @var: list to arguments.
 * Return: lenght.
 */

int print_char(va_list var)
{
	char l;

	l = va_arg(var, int);
		putchar(l);
		return (l);
}
