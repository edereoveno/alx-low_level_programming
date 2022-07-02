#include <stdio.h>

/**
  * main - prints out alphabet in lowercase with putchar
  * Return: returns 0
  */

int main(void)
{
char j;

for (j = 'a'; j <= 'z'; j++)
	{
	if (j != 'e' && j != 'q')
	putchar(j);
	}
	putchar('\n');
	return (0);
}
