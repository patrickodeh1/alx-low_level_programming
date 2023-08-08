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
	int l = strlen(str) + 1;

	if (str == NULL)
		return (NULL);
	ptr = malloc(l);
	if (ptr)
		memcpy(ptr, str, l);
	return (ptr);

}
