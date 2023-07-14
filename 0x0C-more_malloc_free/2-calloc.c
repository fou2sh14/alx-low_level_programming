#include "main.h"

/**
 * set - like memset
 *
 * @s: string
 *
 * @a: second
 *
 * @x: third
 *
 * Return: pointer
 */

char *set(char *s, char a, unsigned int x)
{
	char *point = s;

	while (x--)
	{
		*s++ = a;
	}
	return (point);
}

/**
 * _calloc - like calloc
 *
 * @nmemb: first input
 *
 * @size: size
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	m = malloc(size * nmemb);

	if (m == 0)
		return (NULL);

	set(m, 0, sizeof(int) * nmemb);

	return (m);
}
