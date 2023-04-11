#include "main.h"

/**
 * _abs - return absluote value of n
 *
 * @n: takes input of function
 *
 * Return: return n
 */

int _abs(int n)
{
	if (n < 0)
		n = n * (-1);
	return (n);
}
