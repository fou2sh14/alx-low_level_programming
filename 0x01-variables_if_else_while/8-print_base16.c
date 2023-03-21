#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print hexadecimal numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char i, n;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
