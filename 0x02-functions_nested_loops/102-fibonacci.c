#include <stdio.h>

/**
 * main - program that prints the first 50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int f1, f2, fn, i;

	f1 = 0;
	f2 = 1;
	printf("%d, %d, ", f1, f2);
	fn = f1 + f2;
	for (i = 3; i <= 50; i++)
	{
		printf("%d", fn);
		f1 = f2;
		f2 = fn;
		fn = f1 + f2;
		if (i < 50)
			printf(", ");
	}
	putchar(10);
}
