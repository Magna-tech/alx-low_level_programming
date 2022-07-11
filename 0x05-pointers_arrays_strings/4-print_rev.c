#include "main.h"

/**
 * print_rev - prints the string in reverse
 * @s: string to be reversed
 *
 * Return: no value
 */

void print_rev(char *s)
{
	int i;

	for (i = s; i > 0; i--)
		_putchar(i);
	_putchar('\n');
}
