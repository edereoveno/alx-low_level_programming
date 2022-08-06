#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - printsstrings followed by a new line
 * @separator: seperators
 * @n: number of arguements
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	char *x;

	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(arg, char *);
		if (x != NULL)
			printf("%s", x);
		else
			printf("(nil)");
		if (separator != NULL && (i < (n - 1)))
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
