#include "main.h"

/**
 * malloc_checked - malloc function
 *
 * @b: size
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(sizeof(unsigned int) * b);
	if (m == 0)
	{
		exit(98);
	}
	return (m);
}
