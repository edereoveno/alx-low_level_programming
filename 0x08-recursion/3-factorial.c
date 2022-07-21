#include "main.h"

/**
 * factorial - returns factorial of number
 * @n: number
 * Return: fac
 */

int factorial(int n)
{
	int fac;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		fac = n * factorial(n - 1);
	}
	return (fac);
}
