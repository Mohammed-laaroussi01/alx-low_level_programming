#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: adress to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	struct listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

		ptr->n = n;
		ptr->next = *head;
		*head = ptr;

		return (ptr);
}
