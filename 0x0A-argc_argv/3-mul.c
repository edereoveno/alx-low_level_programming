#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies arguments
 * @argc: arg count
 * @argv: arg array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[argc - 1]) * atoi(argv[argc - 2]);
		printf("%d", mul);
		putchar('\n');
	}
	else
	{
		puts("Error");
		putchar('\n');
		return (1);
	}
	return (0);
}
