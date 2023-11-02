#include "main.h"

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: elements of array
 * @size: size of array
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total_size = nmemb * size;
	p = malloc(total_size);
	if (p != NULL)
		memset(p, 0, total_size);
	return (p);
}
