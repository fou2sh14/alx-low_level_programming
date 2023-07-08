#include <unistd.h>

/**
 * _putchar - function like putchar
 *
 * @ch: the char
 *
 * Return: 1 on success
 */

int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
