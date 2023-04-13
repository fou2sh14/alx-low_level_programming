#include "main.h"

/**
 * length - get length of string
 *
 * @str: the string
 *
 * Return: size of it
 */

int length(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		;
	}
	return (x);
}

/**
 * str_concat - concat two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: pointer to newly allocated copy in memory
 */

char *str_concat(char *s1, char *s2)
{
	char *point;
	int f, size_one, size_two;

	if (s1 == NULL)
	{
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = '\0';
	}

	size_one = length(s1);
	size_two = length(s2);

	point = malloc((size_one + size_two) * sizeof(char) + 1);

	if (point == 0)
	{
		return (0);
	}

	for (f = 0; f <= size_one + size_two; f++)
	{
		if (f < size_one)
		{
			point[f] = s1[f];
		}
		else
		{
			point[f] = s2[f - size_one];
		}
	}
	point[f] = '\0';
	return (point);
}
