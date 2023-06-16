#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse,
 *              followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char reverse_letter;

	/* loop over the letter in a reverse manner */
	for (reverse_letter = 'z'; reverse_letter >= 'a'; reverse_letter--)
		putchar(reverse_letter);
	putchar('\n');

	return (0);
}
