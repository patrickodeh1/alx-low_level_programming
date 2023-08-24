#include "main.h"
#include <stdlib.h>
#include <stddef.h>

int word_len(char *str);
int word_count(char *str);

/**
 * strtow - splits a string in two parts
 * @str: string to split
 * Return: splited string
 */

char **strtow(char *str)
{
	int idx = 0, wrd, w, ltr, l;
	char **p;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	wrd = word_count(str);
	if (wrd == 0)
		return (NULL);
	p = malloc(sizeof(char *) * (wrd + 1));
	if (p == NULL)
		return (NULL);
	for (w = 0; w < wrd; w++)
	{
		while (str[idx] == ' ')
		{
			idx++;
		}
		ltr = word_len(str + idx);
		p[w] = malloc(sizeof(char) * (ltr + 1));

		if (p[w] == NULL)
		{
			for (; w >= 0; w--)
				free(p[w]);
			free(p);
			return (NULL);
		}
		for (l = 0; l < ltr; l++)
			p[w][l] = str[idx++];
		p[w][l] = '\0';
	}
	p[w] = NULL;
	return (p);
}

/**
 * word_count - count words in string
 * @str: string
 * Return: number of words
 */

int word_count(char *str)
{
	int idx = 0, len = 0, words = 0;

	for (idx = 0; *(str + idx); idx++)
		len++;
	for (idx = 0; idx < len; idx++)
	{
		if (*(str + idx) != ' ')
		{
			words++;
			idx = word_len(str + idx);
		}
	}
	return (words);
}

/**
 * word_len - locates the index of first word in a string
 * @str: string
 * Return: index
 */

int word_len(char *str)
{
	int idx = 0, len = 0;

	while (*(str + idx) && *(str + idx) != ' ')
	{
		len++;
		idx++;
	}
	return (len);
}
