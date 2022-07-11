#include "main.h"

/**
 * _puts - prints a string followed by a new line to stdout
 * @str: string to be printed
 *
 * Return: no value
 */

void _puts(char *str)
{
	char i;

	for (i = 0; i <= str; i++)
		_putchar(i);
	_putchar('\n');
}
