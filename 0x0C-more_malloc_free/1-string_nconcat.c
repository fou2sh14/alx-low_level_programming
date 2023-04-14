#include "main.h"

/**
 * length - get length of string
 *
 * @str: the string
 *
 * Return: length
 */

int length(char *str)
{
	int f;

	for (f = 0; str[f] != '\0'; f++)
	{
		;
	}
	return (f);
}

/**
 * string_nconcat - like nconcat function
 *
 * @s1: first string
 *
 * @s2: second one
 *
 * @n: length of string should take from s2
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size_one, size_two, g;
	char *point;

	size_one = length(s1);
	size_two = length(s2);

	if (s1 == NULL)
	{
		s1 = "\0";
	}
	if (s2 == NULL)
	{
		s2 = "\0";
	}

	point = malloc(size_one + n + 1);

	if (point == NULL)
	{
		return (NULL);
	}

	for (g = 0; g < (size_one + n); g++)
	{
		if (g < size_one)
		{
			point[g] = s1[g];
		}
		else if (g >= size_one && g <= size_two)
		{
			point[g] = s2[g - size_one];
		}
		else
		{
			;
		}
	}
	point[g] = '\0';
	return (point);
}
