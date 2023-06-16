#include <stdio.h>

/**
 * main - entry point
 * description:  a program that prints all single-digit numbers
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	printf("\n");

	return (0);
}
