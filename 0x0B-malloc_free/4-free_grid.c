#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees memory allocated to the grid.
 * @grid: The 2D dimension array to free
 * @height: input of 1 dimension of the grid.
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL || height == 0)
		return;

	for (a = 0; a < height; a++)
		free(grid[a]);

	free(grid);
}
