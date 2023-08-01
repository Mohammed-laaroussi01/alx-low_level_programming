#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return:last sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *q = head;

	while (q)
	{
		sum += q->n;
		q = q->next;
	}

	return (sum);
}
