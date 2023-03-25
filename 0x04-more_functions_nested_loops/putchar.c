#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the char into standard output
 *
 * @c: the character to print
 *
 * Return: on success 1, onerror -1
 */

int _putchar(char c);
{
	return (write(1, &c, 1));
}
