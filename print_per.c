#include "holberton.h"
#include <stdio.h>

/**
 * print_per - Entry point
 * @var: list to arguments.
 * Return: lenght.
 */


int print_per(va_list var)
{
	char l;

	l = va_arg(var, int);
	l = '%';
	putchar(l);
	return (0);
}
