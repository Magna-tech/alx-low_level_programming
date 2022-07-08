#include "main.h"

/**
 * print_diagonal - prints a diagonal of backslashes
 * @n: the number of times to print
 * Return: no value
 */

void print_diagonal(int n)
{
	while (n > 0)
	{
		_putchar('\\');
		n--;
	}
	_putchar('\n');
}
