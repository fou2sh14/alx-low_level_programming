#include "variadic_functions.h"

/**
 * sum_them_all - function sum
 *
 * @n: num of arg
 *
 * Return: summ
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int f;
	int summ = 0;
	va_list list;

	if (n)
	{
		va_start(list, n);

		for (f = 0; f < n; f++)
		{
			summ += va_arg(list, int);
		}
		va_end(list);
	}

	return (summ);
}
