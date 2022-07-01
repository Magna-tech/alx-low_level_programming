#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry and exit of program
 * Description: prints the hexa numbers
 * Return:0
 */
int main(void)
{
	int a;
	char b;

	for (a = 0; a <= 9; a++)
		putchar(a + '0');
	for (b = 'a'; b <= 'f'; b++)
		putchar(b);
	putchar('\n');

	return (0);
}
