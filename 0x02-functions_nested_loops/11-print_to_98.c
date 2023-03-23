#include "main.h"

/**
 * print_to_98 - print numbers from n to 98
 *
 * @n: takes the input of function
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; n <= 98; i++)
		{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	else
	{
		for (i = n; n >= 98; i--)
		{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
