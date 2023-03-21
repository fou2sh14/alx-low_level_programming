#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print letters
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c = 'a';
	char k = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (k <= 'Z')
	{
		putchar(k);
		k++;
	}
	putchar('\n');

	return (0);
}
