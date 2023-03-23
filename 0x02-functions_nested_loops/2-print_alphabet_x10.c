#include "main.h"

/**
 * print_alphabet_x10 - print from a to z ten times
 */

void print_alphabet_x10(void)
{
	int c;
	char ch;

	for (c = 0; c < 9; c++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
	_putchar('\n');
	}
}
