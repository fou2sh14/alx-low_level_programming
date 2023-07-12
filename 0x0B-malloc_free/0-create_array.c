#include "main.h"

/**
 * create_array - create an array
 *
 * @size: the size of array
 *
 * @c: the char
 *
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int f;
	char *point;

	point = malloc(size);

	if (size == 0 || point == 0)
	{
		return (NULL);
	}

	for (f = 0; f < size; f++)
	{
		point[f] = c;
	}
	return (point);
}
