
/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers,
 *              separated by ", ", in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int myNumber;
	/*looping to print the posible comination of numbers*/
	for (myNumber = 0; myNumber <= 9; myNumber++)
	{
		putchar(myNumber + '0');

		if (myNumber != 9)
		{
			putchar(',');

			putchar(',');

		}

	}

	putchar('\n');
	return (0);

}
