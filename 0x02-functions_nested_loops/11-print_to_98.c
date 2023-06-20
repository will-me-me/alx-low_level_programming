#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			putchar((n / 100) + '0');
			putchar(((n / 10) % 10) + '0');
			putchar((n % 10) + '0');
			putchar(',');
			putchar(' ');
			n--;
		}
		putchar((n / 100) + '0');
		putchar(((n / 10) % 10) + '0');
		putchar((n % 10) + '0');
		putchar('\n');
	}
	else
	{
		while (n < 98)
		{
			putchar((n / 100) + '0');
			putchar(((n / 10) % 10) + '0');
			putchar((n % 10) + '0');
			putchar(',');
			putchar(' ');
			n++;
		}
		putchar((n / 100) + '0');
		putchar(((n / 10) % 10) + '0');
		putchar((n % 10) + '0');
		putchar('\n');
	}
}
