#include <stdio.h>
#include "main.h"

/**
 * main - calls fibonacci function
 * Return: 0
 */

int main(void)
{
	fibonacci(4000000);

	return (0);
}

/**
 * fibonacci - prints sequence of addition of previous two numbers from 0 & 1
 * @n: limit of sequence
 */

void fibonacci(int n)
{
	int i;

	long j = 0, k = 1, l, sum = 0;

	for (i = 1; i <= n; i++)
	{
		if (sum < n)
		{
		l = j + k;
		j = k, k = l;
		sum = k + l;
		}
	}
		printf("%lu", sum);
}
