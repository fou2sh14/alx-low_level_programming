#include "main.h"

/**
 * array_range - make array from min to max
 *
 * @min: min value
 *
 * @max: max value
 *
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *point, f;

	if (min > max)
	{
		return (NULL);
	}

	point = malloc(sizeof(int) * (max - min + 1));

	if (point == 0)
	{
		return (NULL);
	}

	for (f = min; f <= max; f++)
	{
		point[f - min] = f;
	}

	return (point);
}
