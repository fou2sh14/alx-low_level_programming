#include "lists.h"

/**
 * _rr - func
 *
 * @lst: lst
 *
 * @size: size
 *
 * @new: newlist
 *
 * Return: newlist
 */

const listint_t **_rr(const listint_t **lst, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t f;

	newlist = malloc(size * sizeof(listint_t *));

	if (newlist == NULL)
	{
		free(lst);
		exit(98);
	}
	for (f = 0; f < size - 1; f++)
	{
		newlist[f] = lst[f];
	}
	newlist[f] = new;
	free(lst);

	return (newlist);
}

/**
 * print_listint_safe - function
 *
 * @head: head
 *
 * Return: num
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t f, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (f = 0; f < num; f++)
		{
			if (head == list[f])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _rr(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
