#include "main.h"

void print_alphabet_x10(void)
{
	int ch, c;

	for (c = 0; c < 9; c++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
	_putchar('\n');
	}
}
