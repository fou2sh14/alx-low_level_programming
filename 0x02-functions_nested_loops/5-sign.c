#include "main.h"

/**
 * print_sign - print sign of number
 *
 * @n: take input for function
 *
 * Return: return 1 if is positive, 0 if is zero, -1 if is negative
 */

int print_sign(int n)
{
	if (n > '0')
	{
		_putchar(43);
		return (1);
	}
	else if (n == '0')
	{
		_putchar(48);
		return (0);
	}
	else if (n < '0')
	{
		_putchar(45);
		return (-1);
	}
}
