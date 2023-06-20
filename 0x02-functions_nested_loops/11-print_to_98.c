#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from input to 98,
 *               in order separated by a comma followed by a space.
 * @n: The number to begin counting at n
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			_putchar('0' + (n / 10));
            		_putchar('0' + (n % 10));
           		_putchar(',');
            		_putchar(' ');
            		n--;	
		}
		_putchar('0' + (n / 10));
		_putchar('0' + (n % 10));
		_putchar('\n');
	}
	else 
	{
		while (n < 98 )
		{
			_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
			_putchar(',');
			_putchar(' ');
			n++
		}
		_putchar('0' + (n / 10));
		_putchar('0' + (n % 10));
		_putchar('\n');
	}
}
