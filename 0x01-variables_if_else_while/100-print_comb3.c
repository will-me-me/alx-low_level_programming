#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits,
 *              separated by ", ", in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digitone, digitwo;

	for (digitone = 0; digitone <= 8; digitone++)
	{
		for (digitwo = digitone + 1; digitwo <= 9; digitwo++)
		{
			putchar(digitone + '0');

			putchar(digitwo + '0');

			if (digitone != 8 || digitwo != 9)
			{
				putchar(',');
				putchar(' ');

			}
		}
	}
	putchar('\n');
	return (0);
}
