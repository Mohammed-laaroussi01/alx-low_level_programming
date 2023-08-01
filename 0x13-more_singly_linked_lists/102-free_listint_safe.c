#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t F = 0;
	int M;
	listint_t *p;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		M = *h - (*h)->next;
		if (M > 0)
		{
			p = (*h)->next;
			free(*h);
			*h = p;
			F++;
		}
		else
		{
			free(*h);
			*h = NULL;
			F++;
			break;
		}
	}

	*h = NULL;

	return (F);
}
