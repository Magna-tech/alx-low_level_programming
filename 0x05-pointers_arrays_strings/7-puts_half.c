#include "main.h"

/**
 * puts_half - prints half the characters of a string
 * @str: the string to be halved
 *
 * Return: no value
 */

void puts_half(char *str)
{
	int len, i;

/*We first get the length of the string */
	while (str[i] != '\0')
		len++;
	while (str[i] <= (len / 2))
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
