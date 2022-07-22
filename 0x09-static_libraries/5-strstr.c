#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: checked string 
 * @needle: located string
 * Return: a pointer to the beginning of the located 
 *         substring, or NULL if the substring is not 
 *         found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	if (*needle == '\0')
		return (haystack);

	while (*(haystack + i) != '\0')
	{
		if (*(haystack + i) == *needle)
		{
			char *ptr = _strstr(haystack + i + 1, needle + 1);

			return ((ptr) ? ptr - 1 : NULL);
		}
		i++;
	}
	return (NULL);
}
