#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer
 * @s2: pointer
 * Return: returns 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

/*	while (s1[i] != '\0' && s2[j] != '\0')
	{
		if (s1[i] != s2[j])
		{
			return (s1[i] - s2[j]);
		}
		i++;
		j++;
	}
	return (1);
}
*/	for (i = 0; s1[i] != '\0' || s2[j] != '\0'; i++)
	{
		if (s1[i] != s2[j])
		{
			return (s1[i] - s2[j]);
		}
		j++;
	}
	return (0);
}
