#include "main.h"

/**
 * sq - function to check if number has square root and get it
 *
 * @num: given number
 *
 * @start: start value to check
 *
 * Return: square root or -1
 */

int sq(int num, int start)
{
	if (start * start == num)
	{
		return (start);
	}
	else if (start * start < num)
	{
		return (sq(num, start + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - to get square root of n
 *
 * @n: number input
 *
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	return (sq(n, 1));
}
