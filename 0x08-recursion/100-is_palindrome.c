#include "main.h"

int is_palindrome(char *s);
int ok(char *str, int start, int end, int m);

/**
 * last - get last index
 *
 * @s: string
 *
 * Return: last
 */

int last(char *s)
{
	int f = 0;

	if (*s > '\0')
	{
		f += last(s + 1) + 1;
	}
	return (f);
}

/**
 * is_palindrome - check if string is palindrome
 *
 * @s: string
 *
 * Return: ok function
 */

int is_palindrome(char *s)
{
	int e = last(s);

	return (ok(s, 0, e - 1, e % 2));
}

/**
 * ok - check if start equal end
 *
 * @str: string
 *
 * @start: the start of string
 *
 * @end: the end of string
 *
 * @m: moduls
 *
 * Return: 1 or 0
 */

int ok(char *str, int start, int end, int m)
{
	if ((start == end && m != 0) || (start == end + 1 && m == 0))
	{
		return (1);
	}
	else if (str[start] != str[end])
	{
		return (0);
	}
	else
	{
		return (ok(str, start + 1, end - 1, m));
	}
}
