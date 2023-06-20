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
	int num1 = 0, num2 = 1, sum, count;	
	/* Print the first two Fibonacci numbers */
	printf("%d, %d", num1, num2);

	/* Generate and print the remaining 48 Fibonacci numbers */
	for (count = 3; count <= 50; count++)
	{
		sum = num1 + num2;
		printf(", %d", sum);
		num1 = num2;
		num2 = sum;
	}

	printf("\n");

	return (0);
}
