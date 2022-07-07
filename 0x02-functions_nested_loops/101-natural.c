#include <stdio.h>
#include <stdlib.h>

/**
 * main -  entry of the program
 *
 * Return: 0
 */
int main(void)
{
	int num = 0;
	int sum;

	while (num < 1024)
	{
		if ((num % 3) == 0 || (num % 5) == 0)
			sum += num;
		num++;
	}
	printf("%d\n", sum);

	return (0);
}
