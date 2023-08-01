#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *qr;
	listint_t *ptr = *head;

	qr = malloc(sizeof(listint_t));
	if (!qr)
		return (NULL);

	qr->n = n;
	qr->next = NULL;

	if (*head == NULL)
	{
		*head = qr;
		return (qr);
	}

	while (ptr->next)
		ptr = ptr->next;

	ptr->next = qr;

	return (qr);
}
