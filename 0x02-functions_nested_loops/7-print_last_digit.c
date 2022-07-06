#include "main.h"

/**
  * print_last_digit - returns last digit
  * @n: parameter
  * Return: returns l
  */
int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
	{
		l *= -1;
	}
	_putchar('0' + l);
	return (l);
}
