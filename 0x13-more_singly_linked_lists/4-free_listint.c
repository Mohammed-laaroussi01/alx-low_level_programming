#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list for free
 */
void free_listint(listint_t *head)
{
	listint_t *qtr;

	while (head)
	{
		qtr = head->next;
		free(head);
		head = qtr;
	}
}
