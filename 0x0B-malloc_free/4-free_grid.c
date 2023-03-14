#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free up 2D grid created earlier
 * @grid: grid
 * @height: height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
