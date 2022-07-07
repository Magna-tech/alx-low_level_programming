#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry of program
 *
 * Return:0
 */
int main(void)
{
	long int a = 1, b = 2, next;
	long long int sum;

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
	printf("%lld\n", sum);

	return (0);
}
