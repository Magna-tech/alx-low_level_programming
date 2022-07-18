#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to be printed
 *
 * Return: no value
 */

void print_number(int n)
{
	unsigned int a;

	if (a < 0)
	{
		a = -n;
		_putchar('-');
	}
	else
	{
		a = n;
	}
	if (a / 10 > 0)
		print_number(a / 10);
	_putchar((a % 10) + '0');
}
