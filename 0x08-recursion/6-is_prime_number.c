#include "main.h"

/**
 * _divisible - checks if a number is divisible
 * @n: number
 * @i: divisor
 * Return: 0 if divisible 1 if not
 */

int _divisible(int n, int i)
{
	if (i == 1)
		return (0);
	if (i * i > n)
		return (0);
	if (n % i == 0)
		return (1);
	return (_divisible(n, i + 1));
}

/**
 * is_prime_number - checks for prime numbers
 * @n: number to check
 * Return: 0 if not prime 1 if prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (!_divisible(n, 2));
}

