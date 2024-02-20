#include "main.h"

/**
 * helper - a helper function for is_prime_number
 * @n: number
 * @div: divisor
 * Return: 1 if prime
 */

int helper(int n, int div)
{
	if (n < 2)
		return (0);
	if (div * div > n)
		return (1);
	if (n % div == 0)
		return (0);
	return (helper(n, div + 1));
}

 /**
  * is_prime_number - checks for prime number
  * @n: number to check
  * Return: 1 if true
  */

int is_prime_number(int n)
{
	return (helper(n, 2));
}
