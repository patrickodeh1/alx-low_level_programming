#include "main.h"

/**
 * _strdup - returns a pointer to a new string which is a duplicate of the string str
 * @str: string
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *new_str;

	if (str == NULL)
		return (NULL);
	new_str = (char *)malloc(sizeof(strlen(str) + 1));
	if (new_str == NULL)
		return (NULL);
	strcpy(new_str, str);
	return (new_str);
}
