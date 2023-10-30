#include "main.h"

/**
 * _strdup - returns pointer to a new string which is duplicate of str
 * @str: string
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *new_str;
	size_t len;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	new_str = (char *)malloc(len + 1);
	if (new_str == NULL)
		return (NULL);
	strcpy(new_str, str);
	return (new_str);
}
