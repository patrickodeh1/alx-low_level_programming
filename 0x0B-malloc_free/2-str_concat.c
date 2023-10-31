#include "main.h"


/**
 * str_concat - function that concatenates string
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	size_t length = strlen(s1) + strlen(s2) + 1;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	ptr = (char *)malloc(sizeof(length));
	if (ptr)
	{
		strcpy(ptr, s1);
		strcat(ptr, s2);
	}
	return (ptr);
}
