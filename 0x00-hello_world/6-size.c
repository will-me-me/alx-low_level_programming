#include <stdio.h>

/**
 * main - This is the main entry point of our function
 * The function prints the size of various types on the computer it is compiled 
 *
 * Return: 0 if successful
 */

int main()
{
printf("Size of char: %zu byte(s)\n", sizeof(char));
printf("Size of int: %zu byte(s)\n", sizeof(int));
printf("Size of float: %zu byte(s)\n", sizeof(float));
printf("Size of double: %zu byte(s)\n", sizeof(double));
printf("Size of short: %zu byte(s)\n", sizeof(short));
printf("Size of long: %zu byte(s)\n", sizeof(long));
printf("Size of long long: %zu byte(s)\n", sizeof(long long));
printf("Size of unsigned int: %zu byte(s)\n", sizeof(unsigned int));
printf("Size of unsigned long: %zu byte(s)\n", sizeof(unsigned long));
printf("Size of unsigned long long: %zu byte(s)\n", sizeof(unsigned long long));
printf("Size of void*: %zu byte(s)\n", sizeof(void*));
return 0;

}
