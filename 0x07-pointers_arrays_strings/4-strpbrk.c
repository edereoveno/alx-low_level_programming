#include "main.h"

/**
 * _strpbrk - finds first char in a string that matches a set of chars
 * @s: string to be searched
 * @accept: set of characters
 * Return: null
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
