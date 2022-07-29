#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two string
 * @s1: 1st string
 * @s2: 2nd str
 * @n: len of s2
 * Return: address to memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	unsigned int j;

	char *ar;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}

	ar = malloc(sizeof(char) * (i + n + 1));
	if (ar == NULL)
		return (NULL);

	i = j = 0;
	while (s1[i] != '\0')
	{
		ar[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0' && j < n)
	{
		ar[i] = s2[j];
		i++;
		j++;
	}
	ar[i] = '\0';
	return (ar);
}
