#include <stdio.h>
#include <ctype.h>
/**
  * main - prints out every combination of alphabet
  * Return: returns 0
  */

int main(void)
{
int j;
int k;

for (j = '0'; j <= '9'; j++)
{
	for (k = j + 1; k <= '9'; k++)
	{
		if (k != j)
		{
			putchar(j);
			putchar(k);
			if (j != 8 && k != 9)
			putchar(',');
			putchar(' ');
		}
	}
}
	putchar('\n');
	return (0);
}
