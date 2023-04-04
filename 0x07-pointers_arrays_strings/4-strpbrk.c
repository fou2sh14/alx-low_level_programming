#include "main.h"

/**
 * _strpbrk - like strpbrk function
 *
 * @s: first input
 *
 * @accept: second one
 *
 * Return: pointer or 0
 */

char *_strpbrk(char *s, char *accept)
{
	int f, g;
	char *pointer;

	f = 0;
	while (s[f] != '\0')
	{
		g = 0;
		while (accept[g] != '\0')
		{
			if (accept[g] == s[f])
			{
				pointer = &s[f];
				return (pointer);
			}
			g++;
		}
		f++;
	}
	return (0);
}
