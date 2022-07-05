#include "main.h"

/**
  * main - calls the print_alphabets function
  * print_alphabet - prints alphabets in lowercase
  * Return: returns 0
  */

int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
}
