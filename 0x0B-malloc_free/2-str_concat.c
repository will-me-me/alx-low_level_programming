#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *p;

	i = 0;
	j = 0;
	k = 0;
	l = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	p = malloc(sizeof(char) * (i + j + 1));
	if (p == NULL)
		return (NULL);

	while (k < i)
	{
		p[k] = s1[k];
		k++;
	}
	while (l < j)
	{
		p[k] = s2[l];
		k++;
		l++;
	}
	p[k] = '\0';

	return (p);
}

