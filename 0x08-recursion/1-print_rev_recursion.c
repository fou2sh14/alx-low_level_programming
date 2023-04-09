#include "main.h"

/**
 * _print_rev_recursion - like puts function put in reverse way
 *
 * @s: the input of function
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
