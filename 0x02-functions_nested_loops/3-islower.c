#include "main.h"
#include <ctype.h>

/**
  * _islower - checks if value is lowercase
  * int main(void) - calls function
  * @c: the variable to be checked
  * Return: returns 1
  */


int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
