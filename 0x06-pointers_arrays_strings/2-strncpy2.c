#include "main.h"

char *_strncpy(char *dest,char *src, int n)
{
	int i, j, k, len1, len2;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	len1 = i - 1;
	for (j = 0; src[j] != '\0'; j++)
	{
	}
	len2 = j - 1;
	for (k = 0; k <= len2 && k < n; k++)
	{
		dest[len1] = src[k];
	}
	return (dest);
}

