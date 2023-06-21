#include <stdio.h>
/**
 * main - entry point
 * description:prints the first 98 Fibonacci numbers, starting
 *		with 1 and 2
 * Return: 0
 */
int main(void)
{
	int count = 98;
	unsigned long int num1 = 1;
	unsigned long int num2 = 2;
	unsigned long int sum;
	unsigned long int i;

	printf("%lu, %lu, ", num1, num2);

	for (i = 3; i <= count; i++)
	{
	sum = num1 + num2;
	printf("%lu", sum);

	if (i < count)
	{
		printf(", ");
	}
	num1 = num2;
	num2 = sum;
	}

	printf("\n");

	return (0);
}

