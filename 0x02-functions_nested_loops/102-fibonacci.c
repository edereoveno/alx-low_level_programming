#include <stdio.h>
#include "main.h"

/**
 * main - calls fibonacci function
 * Return: 0
 */

int main(void)
{
	fibonacci(50);

	return (0);
}

/**
 * fibonacci - prints sequence of addition of previous two numbers from 0 & 1
 * @n: length of sequence
 */

void fibonacci(int n)
{
	int i, j = 0, k = 1;

	long sum;

	for (i = 0; i <= n; i++)
	{
		sum = j + k;
		j = k, k = sum;

		printf("%lu, ", sum);
	}
}
