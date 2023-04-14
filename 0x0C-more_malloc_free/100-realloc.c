#include "main.h"

/**
 * _realloc - like realloc function in c
 *
 * @ptr: pointer
 *
 * @old_size: the old size
 *
 * @new_size: the new one
 *
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *m;
	unsigned int f;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (if new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		m = malloc(new_size);
		if (m == NULL)
		{
			return (NULL);
		}
		return (m);
	}
	if (old_size < new_size)
	{
		m = malloc(new_size);
		if (m == NULL)
		{
			return (NULL);
		}
		for (f = 0; f < old_size && f < new_size; f++)
		{
			*((char *)m + f) = *((char *)ptr + f);
		}
		free(ptr);
	}
	return (m);
}
