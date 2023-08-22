#include <stdio.h>

/**
 * main - entry
 * description: program that finds the largest prime factor of a number
 * Return: 0
 */

int main(void)
{
	int i;
	long int num = 612852475143;

	while (num % 2 == 0)
	{
		num = num / 2;
	}
	for (i = 3; i * i < num; i = i + 2)
	{
		while (num % i == 0)
		{
			num = num / i;
		}

	}
	if (num > 2)
	{
		printf("%d", num);
	}
	return (0);
}
