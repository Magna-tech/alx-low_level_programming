#include "main.h"

/**
 * _sqrt_recursion - finds the square root of a number using recursion
 * @n: the number
 *
 * Return: Square root, -1 if there is not a natural sqrt
 */

int _sqrt_recursion(int n)
{
	int i = n / 2;

	_sqrt_recursion(i - 1);
	if (i * i == n)
		return (i);
	else
		return (-1);
}
