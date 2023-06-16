#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, excluding 'q' and 'e',
 * using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* initialize char */
	char alpha;

	/* for loop over the alphabets */
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		/* check if letter is not 'q or e' */
		if (alpha != 'q' && alpha != 'e')
			putchar(alpha);
	}
	putchar('\n');

	return (0);
}
