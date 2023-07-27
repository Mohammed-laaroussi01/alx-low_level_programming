#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @st: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *st)
{
	list_t *new;
	unsigned int leng = 0;

	while (st[len])
		leng++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->st = strdup(st);
	new->leng = leng;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
