#include "main.h"

/**
 * _puts_fun - print string
 *
 * @string: the string
 *
 * Return: nothing
 */

void _puts_fun(char *string)
{
	int f = 0;

	while (string[f])
	{
		_putchar(string[f]);
		f++;
	}
}

/**
 * _atoi - transform to integer
 *
 * @string: string
 *
 * Return: the int number
 */

int _atoi(const char *string)
{
	int x = 1;
	unsigned long int r = 0, firstN, g;

	for (firstN = 0; !(string[firstN] >= 48 && string[firstN] <= 57); firstN++)
	{
		if (string[firstN] == '-')
		{
			x *= -1;
		}
	}
	for (g = firstN; string[g] >= 48 && string[g] <= 57; g++)
	{
		r *= 10;
		r += (string[g] - 48);
	}
	return (x * r);
}

/**
 * print_integer - print the integer needed
 *
 * @num: number
 *
 * Return: nothing
 */

void print_integer(unsigned long int num)
{
	unsigned long int d = 1, g, r;

	for (g = 0; num / d > 9; g++, d *= 10)
	{
		;
	}
	for (; d >= 1; num %= d, d /= 10)
	{
		r = num / d;
		_putchar('0' + r);
	}
}

/**
 * multi - multiply two integers
 *
 * @argc: first input
 *
 * @arcv: second input
 *
 * Return: 0
 */

int multi(int argc, char const *arcv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts_fun("Error ");
		exit(98);
	}

	print_integer(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
