#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int i, j, k, word_count = 0;
	char **p;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			word_count++;
	}

	p = malloc(sizeof(char *) * (word_count + 1));
	if (p == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < word_count; i++)
	{
		while (str[k] == ' ')
			k++;
		j = k;
		while (str[j] != ' ' && str[j] != '\0')
			j++;

		p[i] = malloc(sizeof(char) * (j - k + 1));
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(p[j]);
			free(p);
			return (NULL);
		}

		strncpy(p[i], str + k, j - k);
		p[i][j - k] = '\0';
		k = j + 1;
	}

	p[word_count] = NULL;
	return (p);
}

