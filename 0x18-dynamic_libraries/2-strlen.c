#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: returns a
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
