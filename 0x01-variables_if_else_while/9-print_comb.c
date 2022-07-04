#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry and exit of program
 * Description: prints all combinations of single digits
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar((a % 10) + '0');
		if (a == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
