#include "main.h"

/**
 * strtow - function that splits a string into two words
 * @str: string to split
 * Return: pointer to an array of words
 */

char **strtow(char *str)
{
	if (str == NULL || str[0] == '\0')
		return (NULL);

	int count = 0, i, index = 0, j;
	char **array, *token;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			count++;
			while (str[i] != ' ' && stri != '\0')
				i++;
		}
	}
	array = (char **)malloc((count + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	token = strtok(str, " ");
	while (token != NULL)
	{
		array[index] = strdup(token);
		if (array[index] == NULL)
		{
			for (j = 0; j < index; j++)
				free(array[j]);
			free(array);
			return (NULL);
		}
		index++;
		token = strtok(NULL, " ");
	}
	array[index] = NULL;
	return (array);
}
