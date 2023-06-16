#include <stdio.h>

/**
 * main - entry point
 * description: print all alphabet in lowercase in reverse
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'z';

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
