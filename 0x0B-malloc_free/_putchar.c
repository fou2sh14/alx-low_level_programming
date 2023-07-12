#include <unistd.h>

/**
 * _putchar - like putchar function
 *
 * @ch: the char
 *
 * Return: 1 on success 1 on failure
 */

int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
