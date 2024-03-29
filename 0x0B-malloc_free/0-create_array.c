#include "main.h"
#include <stdlib.h>

/**
 * create_array - initializes array to a char
 * @size: size of array
 * @c: char
 * Return: address of array
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
	free(ar);
}
