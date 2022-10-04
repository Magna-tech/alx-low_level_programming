#include "main.h"

/**
 * _abs - prints the absolute value of an integer
 * @a: value to be returned
 *
 * Return: returns an integer's absolute value
 */
int _abs(int a)
{
	if (a < 0)
		return (-1 * a);
	else
		return (a);
}
