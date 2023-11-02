#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: number of bytes to allocate
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(sizeof(unsigned int) * b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
