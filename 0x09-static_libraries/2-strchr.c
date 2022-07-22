#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates character in a string
 * @s: checked string
 * @c: character located
 *
 * Retrun: pointer s and NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (!c)
		return (s);
	return (NULL);
}
