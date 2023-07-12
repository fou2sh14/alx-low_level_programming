#include "main.h"

/**
 * length - size
 *
 * @s: string
 *
 * Return: size of string
 */

int length(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	return (i);
}

/**
 * argstostr - conccat all arguments
 *
 * @ac: number of arguments
 *
 * @av: the arguments
 *
 * Return: concating arguments
 */

char *argstostr(int ac, char **av)
{
	char *string;
	int a = 0, b = 0, c = 0, d = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (; a < ac; a++, b++)
	{
		b += length(av[a]);
	}

	string = malloc(sizeof(char) * b + 1);

	if (string == 0)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (c = 0; av[a][c] != '\0'; c++, d++)
		{
			string[d] = av[a][c];
		}
		string[d] = '\n';
		d++;
	}
	string[d] = '\0';
	return (string);
