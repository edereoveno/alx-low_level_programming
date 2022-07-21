#include "main.h"

/**
* if_prime - checks whether n is prime
* @n: to be checked
* @g: integer
* Return: 1 if prime, 0 if not
*/

int if_prime(int n, int g)
{
	if (g < n)
	{
		if (n % g == 0)
			return (0);
		else
			return (if_prime(n, g + 1));
	}
	else
		return (1);
}

/**
* is_prime_number - checks whether n is prime
* @n: mumber;
* Return: returns 1 if prime
*/

int is_prime_number(int n)
{
	if (n <  2)
		return (0);
	else
		return (if_prime(n, 2));
}
