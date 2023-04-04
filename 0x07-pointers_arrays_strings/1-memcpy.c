#include "main.h"

/**
 * _memcpy - like memcpy function
 *
 * @dest: first input
 *
 * @src: second
 *
 * @n: third
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int g;

	for (g = 0; g < n; g++)
		dest[g] = src[g];
	return (dest);
}
