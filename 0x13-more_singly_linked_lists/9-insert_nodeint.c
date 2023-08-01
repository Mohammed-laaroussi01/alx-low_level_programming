#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *nyonode;
	listint_t *q = *head;

	nyonode = malloc(sizeof(listint_t));
	if (!nyonode || !head)
		return (NULL);

	nyonode->n = n;
	nyonode->next = NULL;

	if (idx == 0)
	{
		nyonode->next = *head;
		*head = nyonode;
		return (nyonode);
	}

	for (i = 0; q && i < idx; i++)
	{
		if (i == idx - 1)
		{
			nyonode->next = q->next;
			q->next = nyonode;
			return (nyonode);
		}
		else
			q = q->next;
	}

	return (NULL);
}
