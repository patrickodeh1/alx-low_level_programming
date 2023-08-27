#include "main.h"

/**
 * leet - encodes a string with 1337
 * @str: string to encode
 * Return: encoded string
 */

char *leet(char *str)
{
	int i, j;
	char n1[] = "4433007711";
	char n2[] = "aAeEoOtTlL";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
			if (str[i] == n2[j])
			{
				str[i] = n1[j];
			}
	}
	return (str);
}
