#include "main.h"

void rev_string(char *s)
{
	int i, c, j, temp;
	for (c = 0; s[c] != '\0'; c++)
	{
	}
	j = c  - 1;
	for (i = 0; i < j; i--)
	{
	temp = s[c];
	s[c] = s[i];
	s[i] = temp;
	c++;
	}
}
