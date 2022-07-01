#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry and exit of program
 * Description: print alphabets using putchar() only
 * Return:0
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('\n');

	return (0);
}
