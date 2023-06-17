#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * description: print the value of n status:
 *		greater than, is zero and is not less than 6
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;

	printf("Last digit of %d is %d and is ", n, lastdigit);

	if (lastdigit > 0)

		printf("Last digit greater than 5\n");
	else if (lastdigit == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");

	return (0);
}
