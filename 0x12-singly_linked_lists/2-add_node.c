#include "lists.h"

/**
 * add_node - function
 *
 * @head: the head
 *
 * @str: string
 *
 * Return: node at begining
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (!head || !new)
	{
		return (NULL);
	}

	if (str)
	{
		new->str = strdup(str);
		if (!new->str)
		{
			free(new);
			return (NULL);
		}
		new->len = _strlen(new->str);
	}

	new->next = *head;
	*head = new;
	return (new);
}
