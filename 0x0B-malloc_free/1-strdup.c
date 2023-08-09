#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string
 * @str: string
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	ptr = malloc(i * sizeof(*str) + 1);
	if (ptr == 0)
		return (NULL);
	for (j = 0; j < i; j++)
		ptr[j] = str[j];
	return (ptr);
}
