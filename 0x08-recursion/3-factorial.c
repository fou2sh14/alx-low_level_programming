#include "main.h"

/**
 * factorial - get the factorial of positive number
 *
 * @n: the given number (input)
 *
 * Return: the factorial of n
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
