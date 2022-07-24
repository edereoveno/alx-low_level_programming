#include "main.h"
#include <stdio.h>

/**
 * main - prints name of file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	printf("%s", argv[argc - 1]);
	putchar('\n');
	return (0);
}
