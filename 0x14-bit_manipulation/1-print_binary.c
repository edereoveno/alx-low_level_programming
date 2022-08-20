#include "main.h"

/**
 * print_binary - prints the binaru representation of a number
 * @n: number
 */

void print_binary(unsigned long int n)
{
	unsigned int output;
	int i, count = 0;


	for (i = 63; i >= 0; i--)
	{
		output = n >> i;
		if (output & 1)
		{
			_putchar('1');
			count++;
		}

		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
