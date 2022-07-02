#include <stdio.h>
#include <ctype.h>
/**
  * main - prints out alphabet in lowercase and uppercase with putchar
  * Return: returns 0
  */

int main(void)
{
char j;

for (j = 'a'; j <= 'z'; j++)
	{
	putchar(j);
	putchar(toupper(j));
	}
	putchar('\n');
	return (0);
}
