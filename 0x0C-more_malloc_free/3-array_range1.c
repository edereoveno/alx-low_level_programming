#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: minimum int in array
 * @max: maximum int in array
 * Return: pointer to array or null
 **/

int *array_range(int min, int max)
{
	int i, *ar;

	if (min > max)
	{
		return (NULL);
	}

	ar = malloc(sizeof(*ar) * (max - min + 1));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (max - min + 1) && min <= max; i++, min++)
	{
		*(ar + i) = min;
	}
	return (ar);
}
