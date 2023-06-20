#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, separated by comma and space.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count;
	unsigned int num1 = 1, num2 = 2;

	printf("%u, %u", num1, num2);
	
	for (count = 3; count <= 98; count++)
	{
		unsigned int nextTerm = num1 + num2;

		printf(", %u", nextTerm);


		num1 = num2;
		num2 = nextTerm;
	}

	printf("\n");

	return (0);
}

