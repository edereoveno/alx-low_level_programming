#include <stdarg.h>

/**
 * sum_them_all - return sum of parameters
 * @n: parameter for specifying number of succeeding arguments
 * Return: argumentss
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int s;

	va_list arg;

	va_start(arg, n);
	if (n == 0)
		return (0);

	s = 0;
	for (i = 0; i < n; i++)
	{
		s += va_arg(arg, int);
	}
	return (s);
	va_end(arg);
}
