#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be free
 */
void free_listint2(listint_t **head)
{
	listint_t *qtr;

	if (head == NULL)
		return;

	while (*head)
	{
		qtr = (*head)->next;
		free(*head);
		*head = qtr;
	}

	*head = NULL;
}
