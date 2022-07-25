#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: arg count
 * @argv: arg array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc - 1; i++)
	{
		printf("%s", argv[i]);
		putchar('\n');
	}
	return (0);
}
