#include "main.h"

/**
*_memset - fills memory with a constant byte.
*
*@s: pointer to memory area.
*@b: constant to fill memory with.
*@n: bytes of the memory area to be filled.
*Return: pointer to memory area s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
