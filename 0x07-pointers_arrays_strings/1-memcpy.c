#include "main.h"

/**
 * _memcpy - copies n bytes from src yo dest
 * @dest: destination memory
 * @src: source memory
 * @n: number of bytes
 * Return: destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
