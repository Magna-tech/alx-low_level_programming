#include <stdio.h>

/**
 * main - entry and exit point
 * Description: print single digit numbers(base 10) with putchar
 * Return:0
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
		putchar(a + '0');
	putchar('\n');

	return (0);
}
