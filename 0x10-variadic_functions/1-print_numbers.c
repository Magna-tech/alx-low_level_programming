#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints all numbers passed
 * @separator: the character that separates the numbers passed
 * @n: the number of nums passed
 *
 * Return: no value
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < (n - 1) && n != 0; i++)
	{
		if (!separator)
			printf("%d", va_arg(args, int));
		else
			printf("%d%s", va_args(args, int), separator)
	}
	if (n)
		printf("%d\n", va_args(args, int));
	else
		printf("\n");
	va_end(args);
}
