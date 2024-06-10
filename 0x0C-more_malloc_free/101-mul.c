#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * is_digit - checks if a string contains only digits
 * @s: string to check
 * Return: 1 if all characters are digits, 0 otherwise
 */

int is_digit(char *s)
{
	while (*s)
	{
		if (!isdigit(*s))
			return (0);
		s++;
	}
	return (1);
}

/**
 * print_error - prints an error message and exits with status 98
 */
void print_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * multiply - multiplies two positive numbers
 * @num1: first number as a string
 * @num2: second number as a string
 * @len1: length
 * @len2: length
 * Return: pointer to the result array
 */
int *multiply(char *num1, char *num2, int len1, int len2)
{
	int *result = calloc(len1 + len2, sizeof(int));
	int i, n1, carry, j, n2, prod;

	if (result == NULL)
		print_error();

	for (i = len1 - 1; i >= 0; i--)
	{
		n1 = num1[i] - '0';
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			prod = n1 * n2 + result[i + j + 1] + carry;
			carry = prod / 10;
			result[i + j + 1] = prod % 10;
		}
		result[i + j + 1] += carry;
	}
	return (result);
}

/**
 * print_result - prints the result array
 * @result: pointer to the result array
 * @len: length of the result array
 */
void print_result(int *result, int len)
{
	int i = 0;

	while (i < len && result[i] == 0)
		i++;

	if (i == len)
		putchar('0');
	else
		while (i < len)
			putchar(result[i++] + '0');

	putchar('\n');
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of argument strings
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int len1, len2, *result;

	if (argc != 3)
		print_error();

	num1 = argv[1];
	num2 = argv[2];

	if (!is_digit(num1) || !is_digit(num2))
		print_error();

	len1 = strlen(num1);
	len2 = strlen(num2);

	result = multiply(num1, num2, len1, len2);
	print_result(result, len1 + len2);

	free(result);
	return (0);
}
