#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 * @a: pointer to the array to be reversed
 * @n: number of elements in the array
 *
 * Return: no value
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = n - 1; i >= n / 2; i--)
	{
		j = a[(n - 1) - i];
		a[(n - 1) - i] = a[i];
		a[i] = j;
	}
}
