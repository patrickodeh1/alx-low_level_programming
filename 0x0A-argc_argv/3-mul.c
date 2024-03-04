#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @argv: argument vector
 * @argc: argument count
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int a, b, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	res = a * b;
	printf("%d\n", res);

	return (0);
}
