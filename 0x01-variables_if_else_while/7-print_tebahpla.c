#include <stdio.h>

/**
  * main - prints out alphabet in lowercase in reverse with putchar
  * Return: returns 0
  */

int main(void)
{
char j;

for (j = 'z'; j >= 'a'; j--)
	{
	putchar(j);
	}
	putchar('\n');
	return (0);
}
