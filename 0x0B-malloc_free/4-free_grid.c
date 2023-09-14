#include "main.h"

/**
 * free_grid - free to daimentional array
 * @grid: pointer to araay
 * @height: row in array
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
