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
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		;
	}
	return (x);
}

/**
 * argstostr - concat all arguments
 *
 * @ac: first input
 *
 * @av: second one
 *
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
	int f, g, h, d;
	char *m;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (f = 0; f < ac; f++, g++)
	{
		g += length(av[f]);
	}
	m = malloc(sizeof(char) * g + 1);

	if (m == 0)
	{
		return (NULL);
	}

	for (f = 0; f < ac; f++)
	{
		for (h = 0; av[f][h] != '\0'; h++, d++)
		{
			m[d] = av[f][h];
		}
		m[d] = '\n';
		d++;
	}
	m[d] = '\0';

	return (m);
}
