#include "main.h"

/**
 * _isupper - check if letter is uppercase
 *
 * @c: takes the input of function
 *
 * Return: 1 if is upper , 0 if is lower
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
