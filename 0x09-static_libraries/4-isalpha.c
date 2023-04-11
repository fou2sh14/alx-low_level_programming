#include "main.h"

/**
 * _isalpha - checks if c is alpha
 *
 * @c: checks input of function
 *
 * Return: return 1 if is alpha, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
