#include "main.h"

/**
 * puts_half - prints half the characters of a string
 * @str: the string to be halved
 *
 * Return: no value
 */

void puts_half(char *str)
{
	int len = 0, i;

/*We first get the length of the string */
	for (len = 0; str[len] != '\0'; len++)
		len++;
	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (len - 1) / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
