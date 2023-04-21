#include "variadic_functions.h"

/**
 * print_strings - print strings
 *
 * @separator: the separator
 *
 * @n: the number of arg
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int f = n;
	va_list lst;
	char *string;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(lst, n);

	while (f--)
	{
		printf("%s%S", (string = va_arg(lst, char *)) ? string : "(nil)",
				f ? (separator ? separator : "") : "\n");
	}

	va_end(lst);
}
