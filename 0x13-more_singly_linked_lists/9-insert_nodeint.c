#include "lists.h"

/**
 * insert_nodeint_at_index - insert in position
 *
 * @head: head
 *
 * @idx: index
 *
 * @n: data of new
 *
 * Return: new
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *new = malloc(sizeof(listint_t));
	unsigned int f = 0;

	if (!head || !new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (!idx)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	ptr = *head;
	while (ptr)
	{
		if (f == idx - 1)
		{
			new->next = ptr->next;
			ptr->next = new;
			return (new);
		}
		f++;
		ptr = ptr->next;
	}
	free(new);
	return (NULL);
}
