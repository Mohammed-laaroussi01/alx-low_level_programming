#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked_list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the element that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *qtr;
	int n;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	qtr = (*head)->next;
	free(*head);
	*head = qtr;

	return (n);
}
