#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer tp spring duplicate
 * @str: pointer to string to be duplicated
 * Return: pointer to duplicate
 */

char *_strdup(char *str)
{
	unsigned int i, len;

	char *ar;

	/* get length of string */
	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len])
	{
		len++;
	}
	/* multiply length with size of char to get memory for duplicate string */
	ar = malloc(sizeof(*str) * len);

	if (ar == NULL)
		return (NULL);
	/* loop index and copy string */
	for (i = 0; i < len; i++)
	{
		ar[i] = str[i];
	}
	return (ar);
	free(ar);
}
