#include <stdio.h>

/**
 * main - entry point
 * description: a program that prints all single digit
 * numbers of base 10 starting from
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
	putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
