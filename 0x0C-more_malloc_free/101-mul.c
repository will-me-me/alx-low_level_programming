#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * errorExit - Print error message and exit with status 98
 */
void errorExit(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * multiplyNumbers - Multiply two numbers
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
 * isNumber - Check if a string is composed only of digits
 * @str: String to check
 *
 * Return: 1 if true, 0 if false
 */
int isNumber(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - Multiply two positive numbers
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
		errorExit();

	if (!isNumber(argv[1]) || !isNumber(argv[2]))
		errorExit();

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = multiplyNumbers(num1, num2);

	printf("%d\n", result);

	return (0);
}

