#include "main.h"

/**
 * _islower - checks if parameter is lowercase
 * @c: character to be checked
 *
 * Return:1 if c is lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
