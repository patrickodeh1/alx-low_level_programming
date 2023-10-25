#include "main.h"

/**
 * _pow_recursion - finds the exponetial of a number
 * @x: base
 * @y: exponent
 * Return: the exponential
 */

int _pow_reursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y ==0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
