#include "main.h"

/**
 * prime - check if num is prime or not
 *
 * @num: number input
 *
 * @start: ohter number to compare
 *
 * Return: 1 if prime 0 otherwise
 */

int prime(int num, int start)
{
	if (start >= num && num > 1)
	{
		return (1);
	}
	else if (num % start == 0)
	{
		return (0);
	}
	else
	{
		return (prime(num, start + 1));
	}
}

/**
 * is_prime_number - check if n prime
 *
 * @n: number given
 *
 * Return: 1  if prime 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (prime(n, 2));
}
