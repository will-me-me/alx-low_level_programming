#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase,
 * followed by a new line
 * and it prints ten times.
 */

void print_alphabet_x10(void)
{
	char lowerCase;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
		{
			_putchar(lowerCase);
		}
		_putchar('\n');
	}

}
