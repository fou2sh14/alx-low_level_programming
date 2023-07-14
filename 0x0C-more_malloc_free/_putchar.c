#include <unistd.h>

/**
 * _putchar - like putchar function
 *
 * @c: char
 *
 * Return: 1 on succes -1 of fail
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
