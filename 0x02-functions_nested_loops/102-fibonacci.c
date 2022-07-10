#include <stdio.h>
#include "main.h"

int main(void)
{
	fibonacci(50);
}

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
