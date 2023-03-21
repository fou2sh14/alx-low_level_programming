#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all combinations of single digit numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
