#include "main.h"

/**
 * length - size function
 *
 * @s: string
 *
 * Return: size
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
 * string_nconcat - like nconcat
 *
 * @s1: string1
 *
 * @s2: string2
 *
 * @n: size of n
 *
 * Return: pointer to concating
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size1, size2, f, g;
	char *m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = length(s1);
	size2 = length(s2);

	m = malloc(size1 + n + 1);
	if (m == 0)
		return (NULL);

	for (f = 0; f < size1; f++)
	{
		m[f] = s1[f];
	}
	for (g = 0; g < n; g++)
	{
		m[f] = s2[g];
		f++;
	}
	m[f] = '\0';
	return (m);

}
