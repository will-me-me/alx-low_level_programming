#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to string
 * @accept: pointer to substring
 *
 * Return: number of bytes in the initial segment of s which consist only of
 * bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;

	while (*s != '\0' && _strchr(accept, *s++))
		bytes++;

	return (bytes);
}

