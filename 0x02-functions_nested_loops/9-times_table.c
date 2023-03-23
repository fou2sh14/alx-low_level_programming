#include "main.h"

/**
 * times_table - prints the 9 times table
 */

void times_table(void)
{
	int num, i, c;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (i = 1; i <= 9; i++)
		{
			_putchar(',');
			_putchar(' ');
			c = num * i;
			if (c <= 9)
				_putchar(' ');
			else
				_putchar((c % 10) + 48);
		}
		_putchar('\n');
	}
}
