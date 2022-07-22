#include "main.h"

/**
 * _sqrt_recursion - finds the square root of a number using recursion
 * @n: the number
 *
 * Return: Square root, -1 if there is not a natural sqrt
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (roots(n, 1));
}

/**
 * roots - finds the square root of a number
 * @n: number to find sqrt of
 * @i: starting value
 *
 * Return: square root, -1 otherwise
 */

int roots(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (roots(n, i + 1));
	else
		return (-1);
}
