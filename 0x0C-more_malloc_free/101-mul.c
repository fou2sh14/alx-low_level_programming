#include "main.h"

/**
 * _puts - like puts
 *
 * @str: string
 *
 * Return: void
 */

void _puts(char *str)
{
	int f = 0;

	while (str[f])
	{
		_putchar(str[f]);
		f++;
	}
}

/**
 * _atoi - like atoi
 *
 * @s: string
 *
 * Return: int
 */

int _atoi(const char *s)
{
	int ss = 1;
	unsigned long int rr = 0, first, f;

	for (first = 0; !(s[first] >= 48 && s[first] <= 57); first++)
	{
		if (s[first] == '-')
		{
			ss *= -1;
		}
	}

	for (f = first; s[f] >= 48 && s[f] <= 57; f++)
	{
		rr *= 10;
		rr += (s[f] - 48);
	}
	return (ss * rr);
}

/**
 * print_int - finction to print int
 *
 * @n: input
 *
 * Return: void
 */

void print_int(unsigned long int n)
{
	unsigned long int d = 1, f, rr;

	for (f = 0; n / d > 9; f++, d *= 10)
	{
		;
	}

	for (; d >= 1; n %= d, d /= 10)
	{
		rr = n / d;
		_putchar('0' + rr);
	}
}

/**
 * main - main function
 *
 * @argc: number of arg
 *
 * @argv: the arg
 *
 * Return: int (0)
 */

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}

	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
