#include "main.h"

/**
 * print_last_digit -gives the last digit of a given number
 * @x: number to be checked
 *
 * Return: last digit
 */
int print_last_digit(int x)
{
	if (x < 0)
		return (-1 * (x % 10) + '0');
	else
		return ((x % 10) + '0');
}
