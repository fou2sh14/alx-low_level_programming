#include "main.h"

/**
 * _memset - like memset function
 *
 * @s: first input
 *
 * @b: second
 *
 * @n: third
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int f;

	for (f = 0; n > 0; f++, n--)
		s[f] = b;
	return (s);
}
