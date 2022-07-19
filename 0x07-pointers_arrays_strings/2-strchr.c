#include "main.h"

/**
 * _strchr - returns pointer to first occuence of c in s
 * @s: string to be searched
 * @c: character
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		return (&s[i]);
	}
	return (0);
}
