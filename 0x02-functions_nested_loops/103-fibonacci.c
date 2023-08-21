#include <stdio.h>

/**
 * main - entry
 * Return: 0
 */

int main(void)
{
	int f1, f2, fn;
	int sum = 2, i;

	f1 = 1;
	f2 = 2;
	fn = f1 + f2;
	for (i = 3; i <= 32; i++)
	{
		if (fn % 2 == 0)
		{
			sum += fn;
		}
		f1 = f2;
		f2 = fn;
		fn = f1 + f2;
	}
	printf("%d\n", sum);
	return (0);
}
