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
	double num1 = 1;
	double num2 = 2;
	double sum;
	double i;

	printf("%.0lf, %.0lf, ", num1, num2);

	for (i = 3; i <= count; i++)
	{
	sum = num1 + num2;
	printf("%.0lf", sum);

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

