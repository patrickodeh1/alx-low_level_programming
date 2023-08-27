#include "main.h"

/**
 * rot13 - rotates every character of a string 13 places
 * @str: string to rotate
 * Return: rotated string
 */

char *rot13(char *str)
{
	int i, j;
	char alph1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alph2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alph1[j])
			{
				str[i] = alph2[j];
				break;
			}
		}
	}
	return (str);
}
