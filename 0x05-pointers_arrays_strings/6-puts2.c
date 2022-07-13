#include "main.h"

/**
 * puts2 - prints every other char starting from the first
 * @str: string
 */

void puts2(char *str)
{
	int c, i;

	for (c = 0; str[c] != '\0'; c++)
	{
	}
	for (i = 0; i <= c - 1; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
