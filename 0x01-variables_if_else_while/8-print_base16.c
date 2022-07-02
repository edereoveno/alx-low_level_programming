#include <stdio.h>

/**
  * main - prints out single digits
  * Return: returns 0
  */

int main(void)
{
char j;
char k;

for (j = '0'; j <= '9'; j++)
	{
	putchar(j);
	}
for (k = 'a'; k <= 'f'; k++)
	{
	putchar(k);
	}
	putchar('\n');
	return (0);
}
