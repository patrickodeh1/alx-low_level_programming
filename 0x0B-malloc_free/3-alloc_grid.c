#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a two dimensional array
 * @width: array's with
 * @height: array's height
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = (int **)malloc(height * sizeof(int *));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(width * sizeof(int *));
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(p[j]);
			}
			free(p);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
		for (l = 0; l < width; l++)
			p[k][l] = 0;
	return (p);
}
