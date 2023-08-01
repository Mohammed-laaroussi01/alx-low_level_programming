#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 -Success, or -1 -Fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p = *head;
	listint_t *q = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(p);
		return (1);
	}

	while (i < index - 1)
	{
		if (!p || !(p->next))
			return (-1);
		p = p->next;
		i++;
	}


	q = p->next;
	p->next = q->next;
	free(q);

	return (1);
}
