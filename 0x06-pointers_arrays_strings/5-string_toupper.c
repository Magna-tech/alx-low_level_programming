#include "main.h"

/**
 * string_toupper - converts a string to uppercase
 * @s: string to be converted
 *
 * Return: pointer to the converted string
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}

	return (s);
}
