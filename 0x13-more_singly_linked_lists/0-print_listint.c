#include "lists.h"

/**
 * print_listint - function
 *
 * @h: head
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t f = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		f++;
	}
	return (f);
}
