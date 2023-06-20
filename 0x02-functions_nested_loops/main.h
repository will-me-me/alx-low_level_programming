#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to be written
 *
 * Return: On success, returns the character written.
 * On error, returns -1 and sets errno appropriately.
 */
int print_putchar(void)
{
	/* printing the putchar */
	write(1, "_putchar\n", 9);

	return (0);
}

int print_alphabet(void)
{
	char lowerCase;

	/*looping over the alphabets*/
	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		_putchar(lowerCase);
	}
	_putcha('\n');
}

#endif /* MAIN_H */
