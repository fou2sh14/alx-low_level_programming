#include "main.h"

/**
 * alloc_grid - make grid of zeros
 *
 * @width: the width
 *
 * @height: the height
 *
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **t, f, g;

	t = malloc(sizeof(*t) * height);
	if (width <= 0 || height <= 0 || t == 0)
	{
		return (NULL);
	}
	else
	{
		for (f = 0; f < height; f++)
		{
			t[f] = malloc(sizeof(**t) * width);
			if (t[f] == 0)
			{
				while (f--)
					free(t[f]);
				free(t);
				return (NULL);
			}
			for (g = 0; g < width; g++)
			{
				t[f][g] = 0;
			}
		}
	}
	return (t);
}
