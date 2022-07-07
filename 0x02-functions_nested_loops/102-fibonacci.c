#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry of program
 *
 * Return: 0
 */
int main(void)
{
	int a, b;
	int first = 1, second = 2;
	int next = first + second;

	printf("%d, %d, ", first, second);

	for (a = 3; a <= 50; a++)
	{
		printf("%d, ", next);
		first = second;
		second = next;
		next = first + second;
	}
	printf("\n");

	return (0);
}
