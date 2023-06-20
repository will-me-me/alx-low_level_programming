#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 */
void print_to_98(int n)
{
    if (n <= 98)
    {
        for (; n <= 98; n++)
        {
            if (n < 10)
                _putchar('0' + n);
            else
            {
                _putchar('0' + (n / 10));
                _putchar('0' + (n % 10));
            }
            if (n != 98)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
    }
    else
    {
        for (; n >= 98; n--)
        {
            if (n < 10)
                _putchar('0' + n);
            else
            {
                _putchar('0' + (n / 10));
                _putchar('0' + (n % 10));
            }
            if (n != 98)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
    }
    _putchar('\n');
}

