#include "main.h"

/**
 * strlen_recursion - return length of string
 * @s: sting
 */

int _strlen_recursion(char *s)
{
	int len;

	if (*s != '\0')
	{
		len = (1 + _strlen_recursion(s + 1));
	}
	return (len);
}
