#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 *
 * @separator: the separator
 *
 * @n: number of arg
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int f = n;
	va_list lst;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(lst, n);

	while (f--)
	{
		printf("%d%s", va_arg(lst, int), f ? (separator ? separator : "") : "\n");
	}
	va_end(lst);
}
