#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the value of a[2] after assigning it 98
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	*(p + 5) = 98; /* Assign 98 to a[2] using pointer arithmetic */

	printf("a[2] = %d\n", a[2]);

	return (0);
}

