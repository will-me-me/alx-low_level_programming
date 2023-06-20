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
#endif /* MAIN_H */

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
void print_alphabet(void);

#endif /* MAIN_H */
