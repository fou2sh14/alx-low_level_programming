#include "main.h"

/**
 * _islower - check if char is lower case or not
 *
 * @c: checks input of function
 *
 * Return: return 1 if is lower case, otherwise return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
