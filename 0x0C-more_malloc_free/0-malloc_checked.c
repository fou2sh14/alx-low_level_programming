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
	char *point;

	point = malloc(sizeof(b));

	if (point == NULL)
	{
		exit(98);
	}
}
