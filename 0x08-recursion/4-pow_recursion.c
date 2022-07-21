#include "main.h"

/**
 * _pow_recursion - calculates the power of a number using recursion
 * @x: base number
 * @y: the power it is being raised to
 *
 * Return: the power of the number
 * -1 if y is less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y > 0)
		return (x * (_pow_recursion(x, y - 1)));
	else
		return (1);
}
