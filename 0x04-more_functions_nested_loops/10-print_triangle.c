#include "main.h"

/**
 * print_triangle - Prints a triangle using #
 * @size: The size of the triangle
 *
 * Description: Prints a triangle with a base and height
 * of 'size' using the
 * character '#'. If 'size' is 0 or less.
 */
void print_triangle(int size)
{
	int i = 0, j, n = size - 1;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
