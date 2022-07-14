#include "main.h"

/**
 * puts_half - prints second half of string
 * @str: string
 */

void puts_half(char *str)
{
	int c, len, i;

	for (c = 0; str[c] != '\0'; c++)
	{
	}
	len = c - 1;
	for (i = (len / 2) + 1; i <= len; i++)
	{
	/**
	 *	if (len % 2 != 0)
	 *	{
	 *		i = ((len - 1) / 2) + 1;
	 *	}
	 */
		_putchar(str[i]);
	}
}
