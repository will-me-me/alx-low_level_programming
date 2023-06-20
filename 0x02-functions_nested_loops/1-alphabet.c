#include "main.h"

/**
 * main - Prints alpabets in lower cases.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char lowerCase;
	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		_putchar(lowerCase);
	}
	_putchar(lowerCase);
	return (0);	
}
