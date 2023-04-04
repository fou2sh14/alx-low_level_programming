#include "main.h"

/**
 * _strchr - like strchr finction
 *
 * @s: first input
 *
 * @c: second input
 *
 * Return: terminator
 */

char *_strchr(char *s, char c)
{
	int f;

	for (f = 0; s[f] >= '\0'; f++)
	{
		if (s[f] == c)
		{
			return (s + f);
		}
	}
	return ('\0');
}
