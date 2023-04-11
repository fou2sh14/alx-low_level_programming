#include "main.h"

/**
 * _puts - print a string to stdout
 *
 * @str: takes input
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
