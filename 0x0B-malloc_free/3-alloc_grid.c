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
	int i, j, k, l;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(ptr[j]);
			}
			free(ptr);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			ptr[k][l] = 0;
		}
	}

	return (ptr);
}
