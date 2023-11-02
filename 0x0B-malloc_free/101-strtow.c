#include "main.h"

/**
 * strtow - function that splits a string into two words
 * @str: string to split
 * Return: pointer to an array of words
 */

char **strtow(char *str)
{
	int count = 0, i, index = 0, j;
	char **array, *token;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			count++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}
	}
	array = malloc((count + 1) * sizeof(char *));
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
