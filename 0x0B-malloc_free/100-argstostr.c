#include "main.h"

/**
 * argstostr - concatenates all arguments of the program
 * @ac: number of argumentz
 * @av: argmuent vector
 * Return: pointer to mew string
 */

char *argstostr(int ac, char **av)
{
	int i, len, pos, j;
	char *res;
	 
	if (ac == 0 || av == NULL)
		 return (NULL);
	len = 0;
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			len += strlen(av[1]) + 1;
		}
	}

	res = (char *)malloc(len + 1);
	if (res == NULL)
		return (NULL);
	pos = 0;
	for (j = 0; j < ac; j++)
	{
		if (av[j] != NULL)
		{
			strcpy(res + pos, av[j]);
			pos += strlen(av[j]);
			res[pos] = '\n';
			pos++;
		}
	}
	res[pos] = '\0';
	return (res);
}
