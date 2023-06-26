#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 *
 * Description: This function takes two pointers to integers as parameters
 * and swaps the values of the integers they point to.
 */
void swap_int(int *a, int *b)
{
	int temporary_var = *a;
	*a = *b;
	*b = temporary_var;
}

