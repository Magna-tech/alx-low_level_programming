#include "main.h"

/**
 * puts_half - prints half the characters of a string
 * @str: the string to be halved
 *
 * Return: no value
 */

void puts_half(char *str)
{
	int len = 0, i = 0;

/*We first get the length of the string */
	while (str[len] != '\0')
		len++;
	for (i = len / 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
