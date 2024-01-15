#include "main.h"

/**
 * create_array - Function thats create an array
 * @size: size of array
 * @c: character to initialize array
 * Return: pointer to array if successful or null if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	int i;

	if (size == 0)
		return (NULL);
	ar = malloc(sizeof(char) * (size + 1));
	if (ar == NULL)
		return (NULL);
	i = 0;
	while (size > i)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
