/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to find the square root of.
 *
 * Return: the square root of n, or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}

	return sqrt_helper(n, 1, n);
}

/**
 * sqrt_helper - recursive helper function to find the square root of a number.
 * @n: number to find the square root of.
 * @start: starting point for the search.
 * @end: ending point for the search.
 *
 * Return: the square root of n, or -1 if n does not have a natural square root.
 */
int sqrt_helper(int n, int start, int end)
{
	int mid = (start + end) / 2;

	if (start > end)
	{
		return (-1);
	}

	if (mid * mid == n)
	{
		return (mid);
	}

	if (mid * mid > n)
	{
		return (sqrt_helper(n, start, mid - 1));
	}

	return sqrt_helper(n, mid + 1, end);
}

