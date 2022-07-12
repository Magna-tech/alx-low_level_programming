#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: no value
 */

void rev_string(char *s)
{
	int l, i, n;
	char rev;

	for (l = 0; s[l] != '\0'; l++)
		i = 0;

	n = l / 2;

	while (n--)
	{
		rev = s[l - i - 1];
		s[l - i - 1] = s[i];
		s[i] = rev;
		i++;
	}
}
