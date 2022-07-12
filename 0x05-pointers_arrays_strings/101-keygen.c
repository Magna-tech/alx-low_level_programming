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
		c = rand() % 128;
		sum +=  c;
		_putchar(c);
	}
	_putchar(2772 - sum);

	return (0);
}
