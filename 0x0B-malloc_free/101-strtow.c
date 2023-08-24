#include "main.h"
#include <stdlib.h>
#include <stddef.h>

int word_count(char *str);

/**
 * strtow - splits a string in two parts
 * @str: string to split
 * Return: splited string
 */

char **strtow(char *str)
{
	int i, k = 0, len = 0, wrd, c = 0, st, end;
	char **p, *tmp;

	while (*(str + len))
		len++;
	wrd = word_count(str);
	if (wrd == 0)
		return (NULL);
	p = (char **) malloc(sizeof(char *) * (wrd + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (st < end)
					*tmp++ = str[st++];
				*tmp = '\0';
				p[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			st = i;
	}
	p[k] = NULL;
	return (p);
}

/**
 * word_count - count words in string
 * @str: string
 * Return: number of words
 */

int word_count(char *str)
{
	int idx, len = 0, words = 0;

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		if (str[idx] == ' ')
			len = 0;
		else if (len == 0)
		{
			len = 1;
			words++;
		}
	}
	return (words);
}
