#include <stdio.h>
#include "holberton.h"

/**
 * get_op_func - template betty style.
 * Description: select the operation correct.
 * @s: pointer to args.
 * Return: pointer to function correct.
 */

int (*get_op_func(char s))(va_list)
{
mr L[] = {
	{"c", print_char},
	{"s", print_string},
	{NULL, NULL}
};
int i = 0;
for (; L[i].c != NULL; i++)
{
	if (*L[i].c == s)
	{
		return (L[i].f);
	}
}
return (NULL);
}
