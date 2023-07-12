#include "main.h"

/**
 * free_grid - free all grid
 *
 * @grid: the grid
 *
 * @height: the height
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int f;

	for (f = 0; f < height; f++)
	{
		free(grid[f]);
	}
	free(grid);
}
