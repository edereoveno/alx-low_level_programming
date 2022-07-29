#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - returns ponter to allocated memory
 * @b: number of bytes to be allocated
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	void *ar;

	ar = malloc(b);

	if (ar == NULL)
		exit(98);

	return (ar);
}
