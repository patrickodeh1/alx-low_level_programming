#include "main.h"
#include <ctype.h>
/**
 * cap_string - capitalizes all words in a string
 * @str: string to capitalize
 * Return: capitalized string
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			str[i] = toupper(str[i]);
		}
		else if (str[i] == ' ' ||
		str[i] == '.' ||
		str[i] == ',' ||
		str[i] == '\n' ||
		str[i] == '\t' ||
		str[i] == '!' ||
		str[i] == '?' ||
		str[i] == '"' ||
		str[i] == '(' ||
		str[i] == ')' ||
		str[i] == '{' ||
		str[i] == '}' ||
		str[i] == ';')
		{
			 str[i + 1] = toupper(str[i + 1]);
		}
	}
	return (str);
}
