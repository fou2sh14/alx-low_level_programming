#include "variadic_functions.h"

/**
 * the_char - char format
 *
 * @sep: the seperator
 *
 * @lst: the list
 */

void the_char(char *sep, va_list lst)
{
	printf("%s%c", sep, va_arg(lst, int));
}

/**
 * the_int - int format
 *
 * @sep: seperator
 *
 * @lst: the list
 */

void the_int(char *sep, va_list lst)
{
	printf("%s%d", sep, va_arg(lst, int));
}

/**
 * the_float - float format
 *
 * @sep: seperator
 *
 * @lst: the list
 */

void the_float(char *sep, va_list lst)
{
	printf("%s%f", sep, va_arg(lst, double));
}

/**
 * the_string - string format
 *
 * @sep: seperator
 *
 * @lst: the list
 */

void the_string(char *sep, va_list lst)
{
	char *string = va_arg(lst, char *);

	switch ((int)(!string))
	{
		case 1:
			string = "(nil)";
	}

	printf("%s%s", sep, string);
}

/**
 * print_all - print anything
 *
 * @format: the format
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	int i = 0, g;
	char *sep = "";
	va_list lst;

	input_t inputs[] = {
		{"c", the_char},
		{"i", the_int},
		{"f", the_float},
		{"s", the_string},
		{NULL, NULL}
	};

	va_start(lst, format);
	while (format && format[i])
	{
		g = 0;
		while (inputs[g].input)
		{
			if (format[i] == inputs[g].input[0])
			{
				inputs[g].p(sep, lst);
				sep = ", ";
			}
			g++;
		}
		i++;
	}
	printf("\n");
	va_end(lst);
}
