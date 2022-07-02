#include <stdio.h>
#include <ctype.h>
/**
  * main - prints out alphabet in lowercase and uppercase with putchar
  * Return: returns 0
  */

int main(void)
{
char j;
char k;

for (j = 'a'; j <= 'z'; j++)
	{
	putchar(j);
	}
for (k = 'A'; k <= 'Z'; k++)
	{
	putchar(k);
	}
	putchar('\n');
	return (0);
}
