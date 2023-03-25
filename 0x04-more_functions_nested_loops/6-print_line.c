#include "main.h"

/**
 * print_line - print line of under score
 * @n: takes the input of function
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
}
