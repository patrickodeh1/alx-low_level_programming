#include "main.h"

/**
 * string_nconcat - concatenates string
 * @s1: destination string
 * @s2: source string
 * @n: bytes of s2 to concatenate
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int l1, l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = strlen(s1);
	l2 = strlen(s2);
	if (n < l2)
		l2 = n;
	p = malloc(l1 + l2 + 1);
	if (p == NULL)
		return (NULL);
	strcpy(p, s1);
	strncpy(p + l1, s2, l2);
	p[l1 +l2] = '\0';
	return (p);
}
