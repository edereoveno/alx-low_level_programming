#include <stdio.h>
#include "main.h"
/**
 * main - calls print_muliples()
 * Return: returns 0
 */

int main(void)
{
	print_multiples(1024);
	return (0);
}
/**
 * print_multiples - prints mutliples of 3 and 5 before variable
 * @i: variable
 */
void print_multiples(int i)
{
	int n, sum = 0;

	for (n = 3; n < i; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			{
			sum += n;
			}
	}
		printf("%d", sum);
		printf("\n");
}
