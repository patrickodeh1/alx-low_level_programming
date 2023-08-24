#include <stdlib.h>
#include "main.h"
#include <stddef.h>


/**
 * free_grid - frees a 2d array 3-alloc_grid.c
 * @grid: grid
 * @height: height
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
