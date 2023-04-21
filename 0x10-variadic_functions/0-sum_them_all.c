#include "variadic_functions.h"

/**
 * sum_them_all - sum all arg
 *
 * @n: number of arg
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int f = n, sum = 0;
	va_list lst;

	if (n == 0)
	{
		return (0);
	}
	va_start(lst, n);
	while (f--)
	{
		sum += va_arg(lst, int);
	}
	va_end(lst);
	return (sum);
}
