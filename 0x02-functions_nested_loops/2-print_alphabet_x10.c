#include "main.h"

/**
  * print_alphabet - prints alphabets in lowercase
  * Return: Nothing
  */

void print_alphabet(void)
{
	char i;
	int j;

	for (j = 1; j <= 10; j++)
	{
	for (i = 'a'; i <= 'z'; i++)
	_putchar(i);
	}
	_putchar('\n');
}
