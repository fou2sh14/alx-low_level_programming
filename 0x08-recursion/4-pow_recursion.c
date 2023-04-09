#include "main.h"

/**
 * _pow_recursion - get the x put to power of y
 *
 * @x: first number (base)
 *
 * @y: second number (power)
 *
 * Return: -1 if y negative | 1 if y = 0 | else return x power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
