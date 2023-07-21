#include "variadic_functions.h"

/**
 * print_strings - func
 *
 * @separator: sep
 *
 * @n: numbers
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int f;
	char *ptr;

	va_start(list, n);

	for (f = 0; f < n; f++)
	{
		if (separator != NULL && f != 0)
		{
			printf("%s", separator);
			ptr = va_arg(list, char *);
			printf("%s", (ptr == NULL ? "(nil)" : ptr));
		}
	}
	printf('\n');
	va_end(list);
}
