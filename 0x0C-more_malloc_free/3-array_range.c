#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers from min to max.
 * @min: minimum int in array
 * @max: maximum int in array
 * Return: pointer to array or null
 **/
int *array_range(int min, int max)
{
	int *ar;
	int i, size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	ar = malloc(size * sizeof(int));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size && min <= max; i++, min++)
		ar[i] = min;
	return (ar);
}
