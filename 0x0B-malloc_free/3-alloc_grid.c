#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2-dimensional array
 * @width: grid's width
 * @height: grids height
 * Return: a pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int) * width);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		grid[i] = malloc(sizeof(int) * height);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
