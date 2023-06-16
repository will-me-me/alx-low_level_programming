#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Checks if a randomly generated number is greater than 5,
 *              less than 6, or equal to 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* initialize the last number of the generated rand number */
	int last_digit = n % 10;

	/* Conditional statements */
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	}

	return (0);
}
