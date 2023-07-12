#include "main.h"

/**
 * length - get size
 *
 * @s: string
 *
 * Return: size
 */

int length(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
	{
		;
	}
	return (size);
}

/**
 * str_concat - concating two string
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: concating
 */

char *str_concat(char *s1, char *s2)
{
	char *point;
	int f, length1, length2;

	if (s1 == NULL)
		s1 = '\0';

	if (s2 == NULL)
		s2 = '\0';

	length1 = length(s1);
	length2 = length(s2);

	point = malloc(sizeof(char) * (length1 + length2) + 1);

	if (point == 0)
	{
		return (NULL);
	}

	for (f = 0; f <= length1 + length2; f++)
	{
		if (f < length1)
		{
			point[f] = s1[f];
		}
		else
		{
			point[f] = s2[f - length1];
		}
	}

	point[f] = '\0';
	return (point);
}
