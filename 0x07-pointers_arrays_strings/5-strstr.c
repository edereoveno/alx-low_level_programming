#include "main.h"

/**
 * _strstr - searches for string in string
 * @haystack: string to be searched
 * @needle: string searched for
 * Return: address
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	for (; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j]; j++)
			{
				if (haystack[i + j] == needle[j])
				{
					return (&haystack[i + j]);
				}
			}
		}
	}
	return ('\0');
}
