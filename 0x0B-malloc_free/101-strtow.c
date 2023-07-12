#include "main.h"

/**
 * count - word count
 *
 * @s: string
 *
 * Return: int
 */

int count(char *s)
{
	int k, l = 0;

	for (k = 0; s[k]; k++)
	{
		if (s[k] == ' ')
		{
			if (s[k + 1] != ' ' && s[k + 1] != '\0')
			{
				l++;
			}
		}
		else if (k == 0)
		{
			l++;
		}
	}
	l++;
	return (l);
}

/**
 * strtow - function to divide
 *
 * @str: string
 *
 * Return: char pointer
 */

char **strtow(char *str)
{
	int f, g, a, b, c = 0, w = 0;
	char **word;

	if (str == NULL || *str == '\0')
		return (NULL);
	c = count(str);
	if (c == 1)
		return (NULL);
	word = (char **)malloc(c * sizeof(char *));
	if (word == NULL)
		return (NULL);
	word[c - 1] = NULL;
	f = 0;
	while (str[f])
	{
		if (str[f] != ' ' && (f == 0 || str[f - 1] == ' '))
		{
			for (g = 1; str[f + g] != ' ' && str[f + g]; g++)
				;
			g++;
			word[w] = (char *)malloc(g * sizeof(char));
			g--;
			if (word[w] == NULL)
			{
				for (a = 0; a < w; a++)
					free(word[a]);
				free(word[c - 1]);
				free(word);
				return (NULL);
			}
			for (b = 0; b < g; b++)
				word[w][b] = str[f + b];
			word[w][b] = '\0';
			w++;
			f += g;
		}
		else
			f++;
	}
	return (word);
}
