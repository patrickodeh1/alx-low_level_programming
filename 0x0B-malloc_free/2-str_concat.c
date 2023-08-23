#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *ptr;

	i = j = k = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	ptr = (char *)malloc((i + j + 1) * sizeof(char));
	while (k < i)
	{
		ptr[k] = s1[k];
		k++;
	}
	while (k < (i + j))
	{
		ptr[k] = s2[k - i];
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
