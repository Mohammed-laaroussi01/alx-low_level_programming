#include <stdio.h>
/**
 * main - entry point
 * description:prints the first 98 Fibonacci numbers, starting
 *		with 1 and 2
 * Return: 0
 */
int main(void)
{
	 count = 98;
	unsigned long long num1 = 1;
	unsigned long long num2 = 2;
	unsigned long long sum;
	unsigned long long i;

	printf("%d, %d, ", num1, num2);

	for (i = 3; i <= count; i++)
	{
	sum = num1 + num2;
	printf("%d", sum);

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
