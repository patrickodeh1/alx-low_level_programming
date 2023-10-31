#include "main.h"

/**
 * free_grid - function that returns a pointer to a two dimensional array
 * @width: array's width
 * @height: array's height
 * Return: NULL on failure
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
