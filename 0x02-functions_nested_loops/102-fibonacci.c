#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry of program
 *
 * Return: 0
 */
int main(void)
{
	int a;
	long int first = 1, second = 2;
	long int next = first + second;

	printf("%ld, %ld, ", first, second);

	for (a = 3; a <= 50; a++)
	{
		printf("%ld", next);
		first = second;
		second = next;
		next = first + second;
		if (a < 50)
			printf(", ");
	}
	printf("\n");

	return (0);
}
