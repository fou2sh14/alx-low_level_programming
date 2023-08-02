#include "lists.h"

/**
 * sum_listint - sum all data
 *
 * @head: head
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int summ = 0;

	while (head)
	{
		summ += head->n;
		head = head->next;
	}
	return (summ);
}
