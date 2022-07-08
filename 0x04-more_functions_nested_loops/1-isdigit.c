#include "main.h"

/**
 * _isdigit - checks if a given value is a digit
 * @c: value to be checked
 * Return: 1 for success, 0 otherwise
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
