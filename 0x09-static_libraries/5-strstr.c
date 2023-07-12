#include "main.h"

/**
 * _strstr - like strstr function
 *
 * @haystack: first input
 *
 * @needle: second input
 *
 * Return: pointer to haystack or 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *point = haystack;
	char *point2 = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack != *needle)
			{
				break;
			}
			haystack++;
			needle++;
		}
		if (!*needle)
		{
			return (point);
		}
		needle = point2;
		point++;
		haystack = point;
	}
	return (0);
}
