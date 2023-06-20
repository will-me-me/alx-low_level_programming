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
    unsigned long int i;
    unsigned long int prev1 = 1;
    unsigned long int prev2 = 2;
    unsigned long int l = 1000000000;
    unsigned long int prev1_1;
    unsigned long int prev1_2;
    unsigned long int prev2_1;
    unsigned long int prev2_2;

    printf("%lu", prev1);

    for (i = 1; i < 91; i++)
    {
        printf(", %lu", prev2);
        prev2 += prev1;
        prev1 = prev2 - prev1;
    }

    prev1_1 = (prev1 / l);
    prev1_2 = (prev1 % l);
    prev2_1 = (prev2 / l);
    prev2_2 = (prev2 % l);

    for (i = 92; i < 99; ++i)
    {
        printf(", %lu", prev2_1 + (prev2_2 / l));
        printf("%lu", prev2_2 % l);
        prev2_1 = prev2_1 + prev1_1;
        prev1_1 = prev2_1 - prev1_1;
        prev2_2 = prev2_2 + prev1_2;
        prev1_2 = prev2_2 - prev1_2;
    }
    
    printf("\n");
    return 0;
}
