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

for (j = 'a'; j <= 'z'; j++)
	{
	for (k = 'a'; k <= 'z'; k++)
		{
		putchar(j);
		putchar(k);
		putchar(',');
		putchar('\n');
		}
	}
	return (0);
}
