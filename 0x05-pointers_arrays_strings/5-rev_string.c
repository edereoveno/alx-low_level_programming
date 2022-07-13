#include "main.h"

void rev_string(char *s)
{
	int i, c, temp;
	for (c = 0; s[c] != '\0'; c++)
	{
	}
	for (i = c - 1; i < 0; i--)
	{
	temp = s[c];
	s[c] = s[i];
	s[i] = temp;
	c++;
	}
}
