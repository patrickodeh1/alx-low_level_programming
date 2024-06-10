#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size (bytes) of memory to allocate
 * Return: a pointer to to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
