#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int N = 0;
	const listint_t *pointer = h;

	while (pointer)
	{
		printf("%d\n", pointer->n);
		N++;
		pointer = pointer->next;
	}
	return (N);
}
