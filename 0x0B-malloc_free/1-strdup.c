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

	ptr = malloc(strlen(str) + 1);
	if (ptr == NULL)
		return (ptr);
	strcpy(ptr, str);
	return (ptr);
}
