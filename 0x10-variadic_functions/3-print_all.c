#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


void print_all(const char * const format, ...)
{
	int k, j = 0, len = 0;

	char x;
	int y;
	float z;
	char *a;
	va_list arg;

	while (format[j] != '\0')
	{
		len++;
	}

	va_start(arg, format);

	k = 0;
	while (k < len - 1)
	{
		switch (format[k])
		{
		case 'c':
		{
			x = (char)va_arg(arg, int);
			printf("%c", x);
			break;
		}
	
		case 'i':
		{
			y = va_arg(arg, int);
			printf("%d", y);
			break;
		}

		case 'f':
		{
			z = (float)va_arg(arg, double);
			printf("%f", z);
			break;
		}
		case 's':
		{
			if (a == NULL)
				a = "(nil)";
			a = va_arg(arg, char *);
			printf("%s", a);
			break;
		}
		}
	}
	va_end(arg);
	printf("\n");
}
