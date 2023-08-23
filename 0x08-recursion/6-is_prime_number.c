#include "main.h"

/**
 * test - checks if a number is prime
 * @n: number to check
 * @st: start point
 * Return: 1 if prime 0 if not
 */

int test(int n, int st)
{
	if (n <= 2)
		return ((n == 2) ? 1 : 0);
	if (n % st == 0)
		return (0);
	if (st * st > n)
		return (1);
	return (test(n, st + 1));
}

/**
 * is_prime_number - calls test function
 * @n: number to check
 * Return: test
 */

int is_prime_number(int n)
{
	return (test(n, 2));
}
