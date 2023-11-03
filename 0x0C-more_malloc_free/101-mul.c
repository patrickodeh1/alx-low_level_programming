#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive - checks for positive number
 * @str: string
 * Return: 1 if true or 0 if false
 */

int is_positive(const char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: 98 on failure
 */

int main(int argc, char *argv[])
{
	int n1, n2, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	if (!is_positive(argv[1]) || !is_positive(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	res = n1 * n2;

	printf("%d\n", res);
	return (0);
}
