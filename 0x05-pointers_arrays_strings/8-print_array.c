#include "main.h"
#include <stdio.h>

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

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
			printf(", ");
	}
	printf("\n");
}
