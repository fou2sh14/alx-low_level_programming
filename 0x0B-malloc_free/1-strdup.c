#include "main.h"

/**
 * _strdup - function
 *
 * @str: string
 *
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *point;
	int f, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	point = malloc(sizeof(*str) * i + 1);

	if (*str == 0 || point == 0)
	{
		return (NULL);
	}

	for (f = 0; f < i; f++)
	{
		point[f] = str[f];
	}

	return (point);
}
