#include "main.h"
#include <stdio.h>

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
	unsigned int size_one, size_two, g, k;
	char *point;

	/*check if null*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (size_one = 0; s1[size_one] != '\0'; size_one++)
		;

	for (size_two = 0; s2[size_two] != '\0'; size_two++)
		;

	point = malloc(size_one + n + 1);

	if (point == NULL)
		return (NULL);

	for (g = 0; s1[g] != '\0'; g++)
	{
		point[g] = s1[g];
	}

	for (k = 0; k < n; k++)
	{
		point[g] = s2[k];
		g++;
	}

	point[g] = '\0';
	return (point);
}
