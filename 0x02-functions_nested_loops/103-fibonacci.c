#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds and prints the sum of the even-valued terms
 * in the Fibonacci sequence that do not exceed 4,000,000.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int sum = 0;
	int num1 = 1, num2 = 2, nextTerm;

	while (num1 <= 4000000)
	{
		if (num1 % 2 == 0)
			sum += num1;

		nextTerm = num1 + num2;
		num1 = num2;
		num2 = nextTerm;
	}

	printf("%d\n", sum);

	return (0);
}
