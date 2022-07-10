#include "main.h"

/**
 * print_diagonal - prints a diagonal of backslashes
 * @n: the number of times to print
 * Return: no value
 */

void print_diagonal(int n)
{
	int i, k;

	for (i = n; i > 0; i--)
   	{
		for (k = 1; k <= n; k++)
			_putchar(' ');
		_putchar('\\');
		n--;
	}
	_putchar('\n');
}
