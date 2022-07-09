#include <stdio.h>
#include "main.h"

void main(void)
{
	print_multiples(1024);
}
void print_multiples(int i)
{
	int n;

	for (n = 3; n < i; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			{
			n += n;
			printf("%d", n);
			}
	}
}
