#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: string of 1s and 0s in char form
*
* Return: Converted number
* 0 if there are one or more chars in b that are not 0 or 1
* 0 if b is null
*/

unsigned int binary_to_uint(const char *b)
{
	int len, i;
	unsigned int result = 0, mul = 1;

	if (!b)
		return (0);
	len = 0;
	while (b[len])
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	result += (b[i] - '0') * mul;
	mul *= 2;
	}
	return (result);
}
