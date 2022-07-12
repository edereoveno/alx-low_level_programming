#include "main.h"

/**
 * _strlen - returns length of string
 * @s: pointer
 * Return: count
 */

int _strlen(char *s)
{
	int count = 0;

	for (; *s != '\0'; s++)
	{
		count++;
	}
	return (count);
}
