#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '0'; i++)
	{
	if (*s == '\0')
	{
		_putchar(' ');
	}
	else
		_putchar(*s++);
	}
	_putchar('\n');
}
