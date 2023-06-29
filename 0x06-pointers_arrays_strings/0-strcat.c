#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *dest_pt = dest;
	char *src_pt = src;

	if (*dest_pt != '\0')
	{
		dest_pt++;
		_putchar(*dest_pt);
	}
	else
	{
		src_pt++;
		_putchar(*src_pt);
	}
	_putchar('\n');

	return (dest);
}

