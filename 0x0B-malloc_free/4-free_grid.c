#include <stdlib.h>

/**
 * free_grid - free previously created 2D array
 * @grid: the array to free
 * @height: its height (rows)
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
