#include"main.h"

/**
 * print_last_digit -  a function that prints the last digit of a number.
 *
 * @n: the input to check
 *
 * Return:  the value of the last digit
 */
int print_last_digit(int n)
{
	int b;

	if (n < 0)
	{
		n = -n;
	}
		b = n % 10;
		_putchar(b + '0');

	return (b);
}
