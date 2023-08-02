#include "lists.h"

/**
 * listint_len - get size
 *
 * @h: head
 *
 * Return: size
 */

size_t listint_len(const listint_t *h)
{
	size_t f = 0;

	while (h)
	{
		h = h->next;
		f++;
	}
	return (f);
}
