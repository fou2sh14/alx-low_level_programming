#include "main.h"

/**
 * print_last_digit - to print last digit of a number
 *
 * @n: takes input of function
 *
 * Return: return n
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = (n % 10) * -1;
	else
		n = n % 10;
	_putchar(n + '0');
	return (n);
}
