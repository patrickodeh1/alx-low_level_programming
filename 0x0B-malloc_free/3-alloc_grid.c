#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - returns a pointer to 2d array
 * @width: width
 * @height: height
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = (int **) malloc(height * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		ptr[i] = (int *)malloc(width * sizeof(int));
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}

	return (ptr);
}
