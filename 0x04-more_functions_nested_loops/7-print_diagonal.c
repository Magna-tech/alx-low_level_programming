#include "main.h"

/**
 * print_diagonal - prints a diagonal of backslashes
 * @n: the number of times to print
 * Return: no value
 */

void print_diagonal(int n)
{
	int i, k;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (k = 0; k < i; k++)
				_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
