#include "main.h"

/**
 * puts2 - prints one character out of two
 * starting with the first one
 *
 * @str: pointer
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
