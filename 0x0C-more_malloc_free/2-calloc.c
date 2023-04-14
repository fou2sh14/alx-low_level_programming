#include "main.h"

/**
 * _calloc - like calloc function
 *
 * @nmemb: number of elements
 *
 * @size: the size
 *
 * Return: pointer to newly space in memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *point;
	unsigned int k;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	point = malloc(size * nmemb);

	/*check if null*/
	if (point == 0)
	{
		return (NULL);
	}
	for (k = 0; k < (nmemb * size) ; k++)
	{
		*((char *)(point) + k) = 0;
	}

	return (point);
}
