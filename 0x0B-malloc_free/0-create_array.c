#include "main.h"

/**
 * create_array - it create an array of c
 *
 * @size: size of array
 *
 * @c: special char
 *
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
	{
		return (0);
	}

	while (size--)
	{
		array[size] = c;
	}
	return (array);
}
