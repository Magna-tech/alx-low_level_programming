#include <stdio.h>

/**
 * main - entry and exit point
 * Description: print single digit numbers(base 10) with putchar
 * Return:0
 */
int main(void)
{
	char a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
