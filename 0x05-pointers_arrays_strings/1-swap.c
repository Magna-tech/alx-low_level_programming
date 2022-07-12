#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: pointer to first integer
 * @b: pointer to second integer
 *
 * Return: no value
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
