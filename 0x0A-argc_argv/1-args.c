#include "main.h"
#include <stdio.h>

/**
 * main - prints no of attributes
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d", argc - 1);
	putchar('\n');
	return (0);
}
