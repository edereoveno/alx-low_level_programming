#include "main.h"

/**
  * _islower - checks if value is lowercase
  * int main(void) - calls function
  * @c: the variable to be checked
  * Return: returns 1
  */


int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
