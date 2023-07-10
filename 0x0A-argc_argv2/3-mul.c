#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int b;
	int c;

	if (argc == 3)
	{
		c = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", argc);
		printf("argv[1] * argv[2] = %d\n", c * b);
	}
	else if (argc <= 2)
	{
		printf("error\n");
		return (1);
	}
	return (0);
}

