#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size in bytes of each element
 * Return: returns 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;

	int *ar;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ar = malloc(size * nmemb);
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(ar) + i) = 0;
	}
	return (ar);
	free(ar);
}
