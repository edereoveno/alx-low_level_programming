#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: variable
 * Return: returns 1 if correct
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
