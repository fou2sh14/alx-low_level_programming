#include "lists.h"

/**
 *  delete_nodeint_at_index - delete in position
 *
 *  @head: head
 *
 *  @index: the index
 *
 *  Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *prev;
	unsigned int f = 0;

	if (!head || !*head)
	{
		return (-1);
	}

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;

	while (node)
	{
		if (f == index)
		{
			prev->next = node->next;
			free(node);
			return (1);
		}
		f++;
		prev = node;
		node = node->next;
	}
	return (-1);
}
