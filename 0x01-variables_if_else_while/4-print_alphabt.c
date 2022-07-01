#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry and exit
 * Description: print letters of alphabet except q and e
 * Return:0
 */
int main(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		if (al != 'q' && al != 'e')
			putchar(al);
		al++;
	}
	putchar('\n');

	return (0);
}
