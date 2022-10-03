#include "main.h"
/**
 * _memset -  fills memory with a constant byte.
 * @s: pointer to the memory area
 * @b: constant byte
 * @n: number of bytes to be filled
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		s[c] = b;
	return (s);
}
