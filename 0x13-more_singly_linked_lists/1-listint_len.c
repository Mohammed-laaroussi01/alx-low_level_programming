#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list of type listint_t
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int lenght = 0;
	const listint_t *pointer = h;

	while (pointer)
	{
		pointer = pointer->next;
		lenght++;
	}
	return (lenght);
}

