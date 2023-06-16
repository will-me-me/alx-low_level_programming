#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of three digits,
 *              separated by ", ", in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit1, digit2, digit3;
/* Loop to print the combinations */
for (digit1 = 0; digit1 <= 7; digit1++)
{
for (digit2 = digit1 + 1; digit2 <= 8; digit2++)
{
for (digit3 = digit2 + 1; digit3 <= 9; digit3++)
{
/* Print the current combination */
putchar(digit1 + '0');
putchar(digit2 + '0');
putchar(digit3 + '0');

/* Check if it's not the last combination */
if (digit1 != 7 || digit2 != 8 || digit3 != 9)
{
/* Print the separator */
putchar(',');
putchar(' ');
}
}
}
}

putchar('\n');
return (0);
}

