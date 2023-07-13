#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * ExitfromError - Exits from error
 *
 * Return: void
 */
void ExitfromError(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * multiplyNumbers - Multiplies two numbers
 * @num1: First number
 * @num2: Second number
 *
 * Return: Result of multiplication
 */
int multiplyNumbers(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * isNumber - Checks if a string is a number
 * @str: String to check
 *
 * Return: 1 if true, 0 if false
 */
int isNumber(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - Multiplies two numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 if success, 98 if failure
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
		ExitfromError();
	if (!isNumber(argv[1]) || !isNumber(argv[2]))
		ExitfromError();

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = multiplyNumbers(num1, num2);
	printf("%d\n", result);

	return (0);
}

