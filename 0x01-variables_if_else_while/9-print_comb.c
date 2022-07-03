#include <stdio.h>
#include <ctype.h>
/**
  * main - prints out every single didit seperated by comma and white space
  * Return: returns 0
  */

int main(void)
{
int j;

	for (j = '0'; j <= '9'; j++)
	{
		putchar(j);
		if (j != 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	return (0);
}
