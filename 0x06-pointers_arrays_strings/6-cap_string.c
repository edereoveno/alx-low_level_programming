#include "main.h"

/**
 * cap_string - capitalizes each word
 * @str: string
 * Return: string
 */

char *cap_string(char *str)
{
	int i = 0;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	while (str[i] != '\0')
	{
		/*if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '.') */
		switch (str[i])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			{
				if ((str[i + 1] != ' ') && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
		}
		i++;
	}
	return (str);
}
