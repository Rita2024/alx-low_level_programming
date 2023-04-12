#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a 2 dimensional grid
 * @grid: dimensional grid
 * @height: height of the grid
 * Return: grid
 */

void free_grid(int **grid, int height)
{
	int g;

	for (g = 0; g < height; ++g)
	{
		free(grid[g]);
	}
	free(grid);
}
