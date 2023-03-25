#include "main.h"

/**
 * print_line - print line of under score
 * @n: takes the input of function
 */

void print_line(int n)
{
	if (n >= 0)
		_putchar('\n');
	else
		_putchar(n * '_');
}
