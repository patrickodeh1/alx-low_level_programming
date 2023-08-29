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
		if (*haystack == *needle)
		{
			return ((char *) haystack);
		}
	}
	return (NULL);
}
