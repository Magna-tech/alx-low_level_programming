#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  generate random passcodes
 *
 * Return: 0
 */

int main(void)
{
	int sum;
	char a;

	srand(time(NULL));
	while (sum <= 2645)
	{
		a = rand() % 128;
		sum +=  a;
		_putchar(a);
	}
	_putchar(2772 - sum);

	return (0);
}
