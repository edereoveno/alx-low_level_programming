#include "main.h"

/**
 *_isalpha - checks for alphabetic character
 *@c: is the character
 * Return: Retruns 1 when it is a letter, lowercase or uppercase
 * and returns 0 when otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
