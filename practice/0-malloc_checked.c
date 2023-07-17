#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (unsigned int *)malloc(b * sizeof(b));
	if (ptr == NULL)
		return (void *)98;
	else
		return (ptr);
}
