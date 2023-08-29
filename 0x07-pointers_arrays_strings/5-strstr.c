#include "main.h"

/**
 * _strstr - locates a character in a string
 * @haystack: string
 * @needle: substring
 * Return: a pointer to the string
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		if (!*needle || (samestr(haystack, needle) == 1 && *haystack == *needle))
		{
			return ((char *) haystack);
		}
	}
	return (NULL);
}

/**
 * samestr - checks if the string b is inside a.
 * @a: source string
 * @b: string to be searched
 *
 * Return: 1 if there is coincidence, otherwise 0.
 */
int samestr(char *a, char *b)
{
	while (*b && *b == *a)
	{
		b++;
		a++;
	}

	if (*b == '\0')
		return (1);
	else
		return (0);
}
