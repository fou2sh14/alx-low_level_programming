#include "main.h"

/**
 * move - function
 *
 * @s2: string
 *
 * Return: char
 */

char *move(char *s2)
{
	if (*s2 == '*')
	{
		return (move(s2 + 1));
	}
	else
	{
		return (s2);
	}
}

/**
 * start - function
 *
 * @s1: string
 *
 * @s2: string
 *
 * Return: int
 */

int start(char *s1, char *s2)
{
	int f = 0;

	if (*s1 == 0)
	{
		return (0);
	}
	if (*s1 == *s2)
	{
		f += wildcmp(s1 + 1, s2 + 1);
	}
	f += start(s1 + 1, s2);
	return (f);
}

/**
 * wildcmp - compare
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: int
 */

int wildcmp(char *s1, char *s2)
{
	int g = 0;

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
		if (*s1 == *s2)
		{
			g += wildcmp(s1 + 1, s2 + 1);
		}
		g += start(s1, s2);
		return (!!g);
	}
	return (0);
}
