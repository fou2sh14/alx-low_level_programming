#include "main.h"

/**
 * more_numbers - print from 0 to 14 ten times
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j + 48);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
