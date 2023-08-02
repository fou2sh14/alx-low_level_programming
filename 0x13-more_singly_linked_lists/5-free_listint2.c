#include "lists.h"

/**
 * free_listint2 - free and null
 *
 * @head: head
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *node, *ptr;

	if (!head)
	{
		return;
	}
	node = *head;

	while (node)
	{
		ptr = node;
		node = node->next;
		free(ptr);
	}

	*head = NULL;
}
