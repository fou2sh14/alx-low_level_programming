#include "main.h"

/**
 * free_grid - free all grid space in memory
 *
 * @grid: the grid
 *
 * @height: number of rows
 *
 * Return: nothing
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
