#include "main.h"

/**
 * _strchr - returns pointer to first occuence of c in s
 * @s: string to be searched
 * @c: character
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}
