#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - func
 *
 * @separator: sep
 *
 * @n: numbers
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int f;

	va_start(ap, n);

	for (f = 0; f < n; f++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && f != (n - 1))
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(ap);
}
