#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *L = head;
	listint_t *R = head;

	if (!head)
		return (NULL);

	while (L && R && R->next)
	{
		R = R->next->next;
		L = L->next;
		if (R == L)
		{
			L = head;
			while (L != R)
			{
				L = L->next;
				R = R->next;
			}
			return (R);
		}
	}

	return (NULL);
}
