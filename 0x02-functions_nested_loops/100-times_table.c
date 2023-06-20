#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number to generate the times table for
 */
void print_number(int n)
{
	if (n / 10 != 0)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number to generate the times table for
 */

void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int result = i * j;

			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (result < 100)
					_putchar(' ');
				if (result < 10)
					_putchar(' ');
			}
			print_number(result);
		}
		_putchar('\n');
	}
}

