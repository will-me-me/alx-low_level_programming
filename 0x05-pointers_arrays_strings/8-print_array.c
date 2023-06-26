#include <stdio.h>
#include "main.h"

/**
 *print_array - given an interger of array this fucntion prints all
 *	its elements
 *@a: Pointer parameter
 *@n: integer variable
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
