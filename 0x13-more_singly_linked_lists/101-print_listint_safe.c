#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *p = NULL;
	const listint_t *q = NULL;
	size_t calculator = 0;
	size_t N;

	p = head;
	while (p)
	{
		printf("[%p] %d\n", (void *)p, p->n);
		calculator++;
		p = p->next;
		q = head;
		N = 0;
		while (N < calculator)
		{
			if (p == q)
			{
				printf("-> [%p] %d\n", (void *)p, p->n);
				return (calculator);
			}
			q = q->next;
			N++;
		}
		if (!head)
			exit(98);
	}
	return (calculator);
}
