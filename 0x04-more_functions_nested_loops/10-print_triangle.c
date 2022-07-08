#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: defines the size of the triangle
 *
 * Return: no value
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = size; i >= 1; --i)
		{
			for (j = 1; j <= i; ++j)
			{
				_putchar('*');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
