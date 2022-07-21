#include "main.h"

/**
 * find_sqrt - finds square root
 * @n: number
 * @g: probable square root
 * Return: squareroot
 */

int find_sqrt(int n, int g)
{
	if (g * g == n)
	{
		return (g);
	}
	else if (g * g > n)
	{
		return (-1);
	}
	else
	{
		return (find_sqrt(n, g + 1));
	}
}

/**
 * _sqrt_recursion - calls find_sqrt
 * @n: number
 * Return: squareroot
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (find_sqrt(n, 0));
}
