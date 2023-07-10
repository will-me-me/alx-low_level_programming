#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int i, j = 0, k, l, m = 0, n;
	char **p;
	char *s;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			j++;
	}

	p = malloc(sizeof(char *) * (j + 1));
	if (p == NULL)
		return (NULL);

	for (k = 0; k < j; k++)
	{
		for (l = 0; str[l] != ' '; l++)
			m++;

		p[k] = malloc(sizeof(char) * (m + 1));
		if (p[k] == NULL)
		{
			for (n = 0; n < k; n++)
				free(p[n]);
			free(p);
			return (NULL);
		}

		for (m = 0; m < l; m++)
			p[k][m] = str[m];

		p[k][m] = '\0';
		s = str + l + 1;
	}

	p[k] = NULL;
	return (p);
}

