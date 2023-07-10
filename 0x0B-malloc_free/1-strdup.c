#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *          containing a copy of the string given as parameter.
 * @str: string to be copied
 *
 * Return: pointer to the duplicated string, or NULL if insufficient memory
 *         or if str is NULL.
 */
char *_strdup(char *str)
{
	char *p;
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	p = malloc(sizeof(char) * (i + 1));
	if (p == NULL)
		return (NULL);

	for (int j = 0; j <= i; j++)
		p[j] = str[j];

	return (p);
}

