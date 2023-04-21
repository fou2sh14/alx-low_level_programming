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
	int f, sum;

	if (n == 0)
	{
		return (0);
	}
	va_list lst;

	va_start(lst, n);

	sum = 0;

	for (f = 0; f < n; f++)
	{
		sum += va_arg(lst, int);
	}

	va_end(lst);

	return (sum);
}
