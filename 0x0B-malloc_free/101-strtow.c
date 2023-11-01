#include "main.h"

/**
 * strtow - function that splits a string into two words
 * @str: string to split
 * Return: pointer to an array of words
 */

char **strtow(char *str)
{
	int num_of_words, word_len, i, j;
	char *tok;
	char **arr;

	if (str == NULL || *str == '\0')
		return (NULL);
	num_of_words = 0;
	tok = strtok(str, " ");
	while (tok != NULL)
	{
		num_of_words++;
		tok = strtok(NULL, " ");
	}
	arr = (char **)malloc((num_of_words + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	tok = strtok(str, " ");
	i = 0;
	while (tok != NULL)
	{
		word_len = strlen(tok);
		arr[i] = (char *)malloc(word_len + 1);
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr[j]);
			free(arr);
			return (NULL);
		}
		strcpy(arr[i], tok);
		i++;
		tok = strtok(NULL, " ");
	}
	arr[num_of_words] = NULL;
	return (arr);
}
