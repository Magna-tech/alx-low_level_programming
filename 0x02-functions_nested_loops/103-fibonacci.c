#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry of program
 *
 * Return:0
 */
int main(void)
{
	int a = 1, b = 2, next;
	int sum = 0;

	next = a + b;
	sum += b;

	while (next < 4000000)
	{
		if ((next % 2) == 0)
			sum += next;
		a = b;
		b = next;
		next = a + b;
	}
	printf("%d\n", sum);

	return (0);
}
