#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_to_98 - prints all numbers up to 98
 * @n: the given input
 *
 * Return: nno value
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n++;
		}
	}
	printf("\n");
}
