#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @ht: pointer to the list_t list
 *
 * Return: number of elements in ht
 */
size_t list_len(const list_t *ht)
{
	size_t n = 0;

	while (ht)
	{
		n++;
		ht = ht->next;
	}
	return (n);
}
