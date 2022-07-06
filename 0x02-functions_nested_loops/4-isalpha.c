#include "main.h"
#include <ctype.h>

/**
  * _isalpha - checks if c is a letter
  * @c: variable to be checked
  * Return: returns 1
  */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
