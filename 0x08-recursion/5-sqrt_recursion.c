#include "main.h"

/**
 * _sqrt_recursion - get square root
 *
 * @n: number
 *
 * @y: counter
 *
 * Return: int
 */
int sqrt(int n, int y);

int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}

/**
 * sqrt - get square root function
 *
 * @n: number
 *
 * @y: counter
 *
 * Return: int
 */

int sqrt(int n, int y)
{
	if (y * y == n)
	{
		return (y);
	}
	else if (y * y < n)
	{
		return (sqrt(n, y + 1));
	}
	else
	{
		return (-1);
	}
}
