#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 * Return: pointer to newly allocated space containing s1 followed by
 * the first n bytes of s2, null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);
i
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n >= len2)
		n = len2;

	char *result = malloc(len1 + n + 1);

	if (result == NULL)
		return (NULL);

	strcpy(result, s1);
	strncpy(result + len1, s2, n);
	result[len1 + n] = '\0';

	return (result);
}
