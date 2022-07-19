#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagsums - prints sum of diagonals
 * @a: the array to be checked
 * @size: the limit of diagonals to be used
 *
 * Return: no value
 */

void print_diagsums(int *a, int size)
{
	int i, fsum = 0, sum = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			fsum = fsum + *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			sum = sum + *(a + i);
	}
	printf("%d, %d\n", fsum, sum);
}
