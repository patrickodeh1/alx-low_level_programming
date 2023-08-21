#include <stdio.h>

/**
 * main - program that prints the first 50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	long int f1, f2, fn;
	int i;

	f1 = 1;
	f2 = 2;
	printf("%lu, %lu, ", f1, f2);
	fn = f1 + f2;
	for (i = 3; i <= 50; i++)
	{
		if (i == 50)
		{
			printf("%lu \n", fn);
		}
		else
			printf("%lu, ", fn);

		f1 = f2;
		f2 = fn;
		fn = f1 + f2;
	}
	return (0);
}
