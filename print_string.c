#include "holberton.h"

/**
 * print_string - Entry point
 * @var: list to arguments.
 * Return: lenght.
 */


int print_string(va_list var)
{
	char *l;
	int i;

	l = va_arg(var, char *);
		if (l == NULL)
		{
			return (0);
		}
		for (i = 0; l[i] != '\0'; i++)
			putchar(l[i]);
		return (i);
}
