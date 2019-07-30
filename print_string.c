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
	int j = 0;

	l = va_arg(var, char *);
		if (l == NULL)
		{
			l = "(nil)";
		}
		for (i = 0; l[i] != '\0'; i++)
			j = j + _putchar(l[i]);
		return (j);
}
