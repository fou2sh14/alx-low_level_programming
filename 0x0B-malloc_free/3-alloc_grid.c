#include "main.h"

/**
 * alloc_grid - make grid of rows and coloums
 *
 * @width: number of coloums of grid
 *
 * @height: number of rows of grid
 *
 * Return: grid all
 */

int **alloc_grid(int width, int height)
{
	int f, g, **x;

	x = malloc(height * sizeof(*x));

	if (x == 0 || height <= 0 || width <= 0)
	{
		return (NULL);
	}
	else
	{
		for (f = 0; f < height; f++)
		{
			x[f] = malloc(width * sizeof(**x));

			if (x[f] == 0)
			{
				while (f--)
				{
					free(x[f]);
				}
				free(x);
				return (NULL);
			}
			for (g = 0; g < width; g++)
			{
				x[f][g] = 0;
			}
		}
	}
	return (x);
}
