#include "main.h"
#include <ctype.h>
#define UC(c)

/**
  * int _islower(int c) - checks if value is lowercase
  * int main(void) - calls function
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
