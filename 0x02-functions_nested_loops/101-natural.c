#include <stdio.h>

/**
 * main - Program that calculates the sum of natural numbers
 * Return: 0
 */

int main(void)
{
	int num, sum;

	for (num = 1; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
