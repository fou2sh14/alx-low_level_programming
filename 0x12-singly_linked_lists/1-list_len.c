#include "lists.h"

/**
 * list_len - get length
 *
 * @h: head
 *
 * Return: size
 */

size_t list_len(const list_t *h)
{
	size_t f = 0;

	while (h)
	{
		h = h->next;
		f++;
	}
	return (f);
}
