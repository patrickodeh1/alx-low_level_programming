#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: destination
 * @s2: source
 * @n: btyes
 * Return: a pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, l1 = 0, l2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;
	if (n >= l2)
		n = l2;
	else
		 ptr = malloc(sizeof(char) * (l2 + l1 + 1));
	if (!ptr)
		return (NULL);
	while (i < l1)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (n < l2 && i < (l1 + n))
		ptr[i++] = s2[j++];
	ptr[i] = '\0';
	return (ptr);
}
