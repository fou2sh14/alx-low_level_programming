#include "main.h"

/**
 * array_range - create array of min to max
 *
 * @min: minimum
 *
 * @max: maximum
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *m;
	int f;

	if (min > max)
	{
		return (NULL);
	}
	m = malloc(sizeof(int) * ((max - min) + 1));
	if (m == 0)
	{
		return (NULL);
	}

	for (f = min; f <= max; f++)
	{
		m[f - min] = f;
	}

	return (m);
}
