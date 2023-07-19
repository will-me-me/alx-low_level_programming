#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - print the result of a operation
 * @argc: no of arguments
 * @argv: array of arguments
 * Return: 0 (SUCCESS)
 */

int main(int argc, char **argv)
{
	int (*func)(int, int), ans, i, j;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		puts("Error");
		exit(99);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);

	ans = func(i, j);

	printf("%d\n", ans);

	return (0);
}
