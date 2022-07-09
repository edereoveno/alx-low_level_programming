#include "main.h"

/**
 * times_table - prints timestable from 0 to 9
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;

			if (c >= 0 && c < 10)
			{
				if (b != 0)
				{
					_putchar(' ');
				}
				_putchar(c + '0');
				if (b != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else if (c > 9 && c < 100)
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
				if (b != 9)
					{
					_putchar(',');
					_putchar(' ');
					}
			}
		}
	_putchar('\n');
	}
}
