#include "main.h"

/**
 * _strdup - returns pointer to a new string which is duplicate of str
 * @str: string
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *new_str;
	size_t len = strlen(str);

	if (str == NULL)
		return (NULL);
	new_str = (char *)malloc(sizeof(len + 5));
	if (new_str == NULL)
		return (NULL);
	strcpy(new_str, str);
	return (new_str);
}
