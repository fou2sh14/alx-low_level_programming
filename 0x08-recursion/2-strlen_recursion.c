#include "main.h"

/**
 * _strlen_recursion - like strlen function
 *
 * @s: pointer to string
 *
 * Return: length of string (counter)
 */

int _strlen_recursion(char *s)
{
	int counter = 0;

	if (*s != '\0')
	{
		counter = counter + 1 + _strlen_recursion(s + 1);
	}
	return (counter);
}
