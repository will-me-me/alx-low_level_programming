#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase and then in uppercase
 * using putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower_case, upper_case;

	/* printin the lower case alphas */
	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
		putchar(lower_case);

	/* printing the alpha in uppercase */
	for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
		putchar(upper_case);

	putchar('\n');

	return (0);

}
