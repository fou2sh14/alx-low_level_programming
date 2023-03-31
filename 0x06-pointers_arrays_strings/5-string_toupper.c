#include "main.h"

/**
 * string_toupper - transform lower to uppercase
 *
 * @s: pointer to string
 *
 * Return: string in uppercase
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	}
	return (s);
}
