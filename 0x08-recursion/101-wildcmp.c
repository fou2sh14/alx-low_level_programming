#include "main.h"

/**
 * move - move function
 *
 * @str2: string two
 *
 * Return: str2
 */

char *move(char *str2)
{
	if (*str2 == '*')
	{
		return (move(str2 + 1));
	}
	else
	{
		return (str2);
	}
}

/**
 * start - function start
 *
 * @str1: first string
 *
 * @str2: second one
 *
 * Return: r
 */

int start(char *str1, char *str2)
{
	int r = 0;

	if (*str1 == 0)
	{
		return (0);
	}
	if (*str1 == *str2)
	{
		r += wildcmp(str1 + 1, str2 + 1);
	}
	r += start(str1 + 1, str2);

	return (r);
}

/**
 * wildcmp - function
 *
 * @s1: first string
 *
 * @s2: second one
 *
 * Return: 0
 */

int wildcmp(char *s1, char *s2)
{
	int r = 0;

	if (!*s1 && *s2 == '*' && !*move(s2))
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		if (!*s1)
		{
			return (1);
		}
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
	{
		return (0);
	}
	if (*s2 == '*')
	{
		s2 = move(s2);
		if (!*s2)
		{
			return (1);
		}
		if (*s2 == *s1)
		{
			r += wildcmp(s1 + 1, s2 + 1);
		}
		r += start(s1, s2);
		return (!!r);
	}
	return (0);
}
