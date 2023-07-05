#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
	{
		return (0);
	}

	while (i < n)
	{
		if (n % i == 0)
		{
			return (0);
		}
		i++;
	}

	return (1);
}

