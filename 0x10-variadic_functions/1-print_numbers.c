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
	int f = n, g;
	va_list lst;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(lst, n);

	for (g = 0; g < f; g++)
	{
		printf("%d%s", va_arg(lst, int), g ? (separator ? separator : "") : "\n");
	}
	va_end(lst);
}
