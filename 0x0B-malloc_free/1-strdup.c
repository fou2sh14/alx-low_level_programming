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

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	point = malloc(sizeof(*str) * i + 1);

	if (point == 0)
	{
		return (NULL);
	}
	else
	{

		for (f = 0; f < i; f++)
		{
			point[f] = str[f];
		}
	}

	return (point);
}
