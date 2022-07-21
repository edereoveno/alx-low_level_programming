#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string pointer
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		_putchar (s[i]);
		_puts_recursion(s + 1);
	}
}
