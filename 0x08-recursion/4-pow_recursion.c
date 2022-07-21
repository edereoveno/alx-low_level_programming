#include "main.h"

/**
 * _pow_recursion - returns value of x raised to power y
 * @x: number
 * @y: power
 * Return: value
 */

int _pow_recursion(int x, int y)
{
	int power;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		power = (x * _pow_recursion(x, y - 1));
	}
	return (power);
}
