#include "main.h"

/**
 * _abs - returns the absolute value of a number
 * @num: integer
 * Return: 0
 */

int _abs(int num)
{
	if (num < 0)
	{
		return (num * -1);
	}
	else
		return (num);
	return (0);
}
