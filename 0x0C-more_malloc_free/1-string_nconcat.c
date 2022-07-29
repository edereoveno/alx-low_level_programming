#include "main.h"
#include <stdlib.h>




char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;

	char *ar;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0' && j < n)
	{
		j++;
	}
	ar = malloc(sizeof(char) * (i + n + 1));
	if (ar == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		ar[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		ar[i + j] = s2[j];
		i++;
		j++;
	}
	ar[i + j] = '\0';
	return (ar);
}
