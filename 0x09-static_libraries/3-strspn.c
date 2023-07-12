#include "main.h"

/**
 * _strspn - like strspn function
 *
 * @s: first input
 *
 * @accept: second input
 *
 * Return: f
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int f, g;

	for (f = 0; s[f] != '\0'; f++)
	{
		for (g = 0; accept[g] != s[f]; g++)
		{
			if (accept[g] == '\0')
				return (f);
		}
	}
	return (f);
}
