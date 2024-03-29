#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
	unsigned int size1, size2, f, g;
	char *m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (size1 = 0; s1[size1] != '\0'; size1++)
		;

	for (size2 = 0; s2[size2] != '\0'; size2++)
		;

	m = malloc(size1 + n + 1);
	/*check if fail*/
	if (m == 0)
	{
		return (NULL);
	}

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
