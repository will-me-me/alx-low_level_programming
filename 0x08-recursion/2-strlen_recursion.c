#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to be checked
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}

/**
 * main - entry point of the program
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	n = _strlen_recursion("Corbin Coleman");
	printf("%d\n", n);
	return (0);
}

