#include <stdio.h>
/**
 * main - function that prints largest prime factor)
 * Return: 0
 */

int main(void)
{
	long num = 612852475143, i;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			num = num / i;
			i--;
		}
	}
	prinf("%lu\n", i);
	return (0);
}
