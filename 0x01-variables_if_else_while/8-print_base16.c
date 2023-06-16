#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all numbers of base 16 in lowercase,
 *              followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char baseSixteen;
	/* printing numbers 0 to 9 */
	for (baseSixteen = '0'; baseSixteen <= '9'; baseSixteen++)
		putchar(baseSixteen);

	/* printing the letters a to f */
	for (baseSixteen = 'a'; baseSixteen <= 'f'; baseSixteen++)
		putchar(baseSixteen);

	putchar('\n');
	return (0);
}
