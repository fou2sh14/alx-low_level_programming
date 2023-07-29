#include "lists.h"

/**
 * _strlen - get length
 *
 * @s: string
 *
 * Return: int
 */

int _strlen(char *s)
{
	int f = 0;

	if (!s)
	{
		return (0);
	}
	while (*s++)
	{
		f++;
	}
	return (f);
}


/**
 * print_list - print a list
 *
 * @h: head
 *
 * Return: list
 */

size_t print_list(const list_t *h)
{
	size_t f = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		f++;
	}
	return (f);
}
