#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The input string
 */
void rev_string(char *s)
{
	int i, j;
	char rev_str;

	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j / 2; i++)
	{
		rev_str = s[i];
		s[i] = s[j - 1 - i];
		s[j - 1 - i] = rev_str;
	}
}

