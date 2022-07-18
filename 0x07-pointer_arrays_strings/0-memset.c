#include "main.h"

/**
 * _memset - fills bytes in s memory area with b
 * @s: pointer to memory are
 * @b: new value for memory
 * @n: number of bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
