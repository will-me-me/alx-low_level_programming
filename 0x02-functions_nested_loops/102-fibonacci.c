#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers,
 * separated by comma and space.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int counter;
	unsigned long num1 = 0, num2 = 1, sum;


	for (counter = 0; counter < 50; counter++)
	{
		sum = num1 + num2;
		printf("%lu", sum);

		num1 = num2;
		num2 = sum;

		if (counter == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
