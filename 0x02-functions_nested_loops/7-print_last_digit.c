#include "main.h"

/**
 * print_last_digit -gives the last digit of a given number
 * @x: number to be checked
 *
 * Return: last digit
 */
int print_last_digit(int x)
{
	int xa;

	if (x < 0)
	{
		xa = (-1 * (x % 10);
		_putchar(xa + '0');
		return (xa);
	}
	else
	{
		xa = (x % 10);
		_putchar(xa + '0');
		return (xa);
	}
}
