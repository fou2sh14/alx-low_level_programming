#include "lists.h"

/**
 * *get_nodeint_at_index - function to get node
 *
 * @head: head
 *
 * @index: the index
 *
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int f;

	for (f = 0, node == head; node && f < index; node = node->next, f++)
	{
		;
	}
	return (node);
}
