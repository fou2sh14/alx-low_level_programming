#include "main.h"

/**
 * malloc_checked - check failure of malloc
 *
 * @b: input
 *
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	int *point;

	point = malloc(b);

	if (point == NULL)
	{
		exit(98);
	}
	return (point);
}
