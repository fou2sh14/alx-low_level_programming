#include "main.h"

/**
 * _strdup - like strdup function in c
 *
 * @str: string input
 *
 * Return: pointer to copy of string
 */

char *_strdup(char *str)
{
	int f, size_of_string;
	char *point;

	if (str == NULL)
	{
		return (NULL);
	}

	for (size_of_string = 0; str[size_of_string] != '\0' ; size_of_string++)
	{
		;
	}

	point = malloc(size_of_string * (sizeof(*str)) + 1);

	if (point == 0)
	{
		return (NULL);
	}
	else
	{
		for (f = 0; f < size_of_string ; f++)
		{
			point[f] = str[f];
		}
	}
	return (point);
}
