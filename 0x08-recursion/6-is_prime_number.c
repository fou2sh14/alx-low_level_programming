#include "main.h"

/**
 * is_prime_number - check if number prime
 *
 * @n: number
 *
 * @y: counter
 *
 * Return: int
 */
int _prime(int n, int y);
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	else if (n < 2)
	{
		return (0);
	}
	else
	{
		return (_prime(n, 2));
	}
}

/**
 * _prime - prime function
 *
 * @n: number
 *
 * @y: counter
 *
 * Return: int
 */

int _prime(int n, int y)
{
	if (n % y == 0)
	{
		return (0);
	}
	else if (n % y != 0 && n - y == 1)
	{
		return (1);
	}
	else
	{
		return (_prime(n, y + 1));
	}
}
