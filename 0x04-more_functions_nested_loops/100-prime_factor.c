#include <stdio.h>
#include <math.h>

/**
 * main - print prime factors of a number
 *
 * Return: always 0
 */

int main(void)
{
	long int num = 612852475143;
	int p;

	for (p = 2; p <= sqrt(num); p++)
	{
		if (num % p == 0)
		{
			num = num / p;
			p = 1;
		}
	}
	printf("%ld\n", num);

	return (0);
}
