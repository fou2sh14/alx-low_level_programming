#include "main.h"

/**
 * last - get last index
 *
 * @s: string
 *
 * Return: int
 */

int is_palindrome(char *s);
int _scan(char *str, int the_start, int the_end, int the_mod);
int last(char *s)
{
	int f = 0;

	if (*s != '\0')
	{
		f += last(s + 1) + 1;
	}
	return (f);
}

/**
 * is_palindrome - check string is palindrome or not
 *
 * @s: string
 *
 * Return: int
 */

int is_palindrome(char *s)
{
	int end = last(s);

	return (_scan(s, 0, end - 1, end % 2));
}

/**
 * _scan - function
 *
 * @str: string
 *
 * @the_start: start
 *
 * @the_end: the end
 *
 * @the_mod: modilus
 *
 * Return: int
 */

int _scan(char *str, int the_start, int the_end, int the_mod)
{
	if ((the_start == the_end && the_mod != 0) || (the_start == the_end + 1
				&& the_mod == 0))
	{
		return (1);
	}
	else if (str[the_start] != str[the_end])
	{
		return (0);
	}
	else
	{
		return (_scan(str, the_start + 1, the_end - 1, the_mod));
	}
}
