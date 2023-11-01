#include "main.h"

/**
 * strtow - function that splits a string into two words
 * @str: string to split
 * Return: pointer to an array of words
 */

char **strtow(char *str)
{
	int numWords = 0;
	int inWord = 0;
	int wordIndex = 0;
	int i, j, wordLength;

	char *token;
	char **wordArray;

    	if (str == NULL || *str == '\0')
	{
        	return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
        	if (str[i] != ' ')
		{
			if (!inWord)
			{
     				numWords++;
				inWord = 1;
			}
		}
		else
		{
			inWord = 0;
		}
	}

	wordArray = (char **)malloc((numWords + 1) * sizeof(char *));

	if (wordArray == NULL)
	{
		return (NULL);
	}

	token = strtok(str, " ");

	while (token != NULL)
	{
        	wordLength = strlen(token);

		wordArray[wordIndex] = (char *)malloc(wordLength + 1);
        	if (wordArray[wordIndex] == NULL)
		{

            		for (j = 0; j < wordIndex; j++) 
			{
                		free(wordArray[j]);
            		}
            		free(wordArray);
            		return (NULL);
        	}

        strcpy(wordArray[wordIndex], token);
        wordIndex++;
        token = strtok(NULL, " ");
	}

	wordArray[numWords] = NULL;

	return (wordArray);
}
