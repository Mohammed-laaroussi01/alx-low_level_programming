#include "main.h"
/**
 * print_times_table -  prints the n times table, starting with 0
 * @n: input to check
 */

void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
	return;
	}

	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int result = i * j;

			if (j == 0)
			{
				_putchar('0' + result);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (result >= 100)
				{
					_putchar('0' + result / 100);
					_putchar('0' + (result / 10) % 10);
					_putchar('0' + result % 10);
				}
				else
					(result >= 10)
					{
					_putchar(' ');
					_putchar('0' + result / 10);
					_putchar('0' + result % 10);
					}
				else
				{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + result);
				}
			}
		}
		_putchar('\n');
	}
}

