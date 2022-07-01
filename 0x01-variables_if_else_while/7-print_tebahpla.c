#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry and exit for program
 * Description: prints lowecase alphabets in reverse order
 * Return:0
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');

	return (0);
}
