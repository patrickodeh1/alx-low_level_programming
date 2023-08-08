#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array
 * @size: size of array
 * @c: element of array
 * Return: a pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(c) * size);
	i = 0;
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	if (ptr)
		return (ptr);
	else
		return (NULL);
}
