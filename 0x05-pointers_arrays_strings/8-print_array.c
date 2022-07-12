#include "main.h"

/**
 * print_array - prints the elements of an array
 * @a: the array
 * @n: the number of elements to be printed
 *
 * Return : no value
 */

void print_array(int *a, int n)
{
	int i;

	while (i <= n - 1)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
		i++;
	}
	_putchar('\n');
}
