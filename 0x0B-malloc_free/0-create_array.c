#include <stdlib.h>
#include "main.h"

/**
 * create_array - a function that creates an array
 * @size: the size of the array
 * @c: character to initialoze
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
		return (NULL);
	ar = (malloc(sizeof(char) * size));

	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}
