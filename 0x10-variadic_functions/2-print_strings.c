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
	va_list valist;
	unsigned int f;
	char *str;

	va_start(valist, n);

	for (f = 0; f < n; f++)
	{
		str = va_arg(valist, char *);

		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (f < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
