#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * argstostr - concatenates all arguments
 * @ac: argument count
 * @av: vector
 * Return: pointer to new string
 */

char *argstostr(int ac, char **av)
{
	int ch, i, j, k;
	char *s;

	ch = i = j = k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		while (av[i][j])
		{
			s[k] = av[i][j];
			k++;
			j++;
		}
		s[k] = '\n';
		j = 0;
		k++;
		i++;
	}
	k++;
	s[k] = '\0';
	return (s);
}
