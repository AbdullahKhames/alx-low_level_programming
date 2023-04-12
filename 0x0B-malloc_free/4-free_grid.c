#include "main.h"

/**
 * free_grid - function to free grid
 * @grid: pointer to pointer to grid
 * @height: number of rows
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i< height; i++)
		free(grid[i]);
	free(grid);
}
