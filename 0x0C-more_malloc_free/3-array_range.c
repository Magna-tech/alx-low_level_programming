#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: lower range
 * @max: upper range
 *
 * Return: pointer to the new array
 * NULL if it fails or if min > max
 */

int *array_range(int min, int max)
{
	int *r;
	int i, j;

	if (min > max)
		return (NULL);
	j = (max - min) + 1;
	r = malloc(j * sizeof(*p));
	if (r == NULL)
		return (NULL);
	for (i = 0; i < j && min <= max; i++, min++)
		*(r + i) = min;
	return (r);
}
