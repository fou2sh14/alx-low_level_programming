#include "main.h"

/**
 * _strlen - get lenth of string
 *
 * @s: takes first input ant points to it
 *
 * Return: Always count
 */

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		++count;

	return (count);
}
