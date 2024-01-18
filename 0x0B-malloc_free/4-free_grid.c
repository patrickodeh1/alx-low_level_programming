#include "main.h"

/**
 *  free_grid - frees the array created by alloc_grid
 *  @grid: array to free
 *  @height: height of the array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid);
}	
