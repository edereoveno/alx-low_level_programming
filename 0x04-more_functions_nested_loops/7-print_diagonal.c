#include "main.h"

/**
  * print_diagonal - draws a straight line
  * @n: number of times
  */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('\\');
			for (j = 1; j <= n; j++)
			{
				_putchar('b');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
