#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2-dimensional array
 * @width: grid's width
 * @height: grids height
 * Return: a pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **grid, *data;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * width);
	if (grid == NULL)
		return (NULL);
	data = malloc(sizeof(int) * width * height);
	if (data == NULL)
	{
		free(data);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = data + i * width;
	}
	return (grid);
}
